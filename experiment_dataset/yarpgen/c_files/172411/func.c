/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172411
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] [i_1] = ((((arr_1 [i_0]) ^ (arr_1 [i_0]))) << (((((((/* implicit */_Bool) ((short) arr_3 [i_0]))) ? (var_3) : (arr_3 [6U]))) - (9286277361087555781ULL))));
                    arr_9 [i_2] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_2]))) & (var_13)))) ? (((/* implicit */unsigned int) ((int) var_12))) : (((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0]) : (var_7)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        var_14 ^= ((/* implicit */unsigned int) (-(arr_12 [i_3])));
        arr_13 [i_3] [i_3] = (!(((/* implicit */_Bool) 0U)));
    }
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) var_2);
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
                        {
                            var_15 = ((/* implicit */_Bool) arr_19 [i_5]);
                            arr_30 [i_4] [i_5] [i_8] = ((long long int) (_Bool)1);
                            arr_31 [i_4] [i_5] [i_6] [i_5] [i_4] = ((/* implicit */long long int) (+(arr_23 [i_4] [i_5] [i_8])));
                        }
                        for (signed char i_9 = 1; i_9 < 16; i_9 += 1) 
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) arr_28 [i_4] [i_6] [i_6] [i_4] [i_9] [i_9 - 1] [i_4])), (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_33 [i_9 + 3] [i_5] [i_6] [i_7] [i_9 + 1])) <= (((/* implicit */int) (short)255)))))) : (min((((var_13) << (((var_12) - (1378598693977623256LL))))), (((/* implicit */unsigned int) (short)-32203))))));
                            arr_35 [i_5] [i_5] [i_6] [i_7] = ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_28 [i_9 + 1] [i_9] [i_9] [i_9] [i_9] [i_9 - 1] [i_9 + 3])), (arr_33 [i_9 + 1] [i_9 + 3] [i_9 + 2] [i_9] [i_9]))))) <= ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_4] [i_5] [(signed char)16] [i_7] [i_5] [(signed char)16] [i_9]))) / (var_7))))));
                        }
                        var_17 = ((/* implicit */short) (unsigned short)58485);
                    }
                } 
            } 
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_4] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_4] [i_10] [i_4] [i_4] [i_4] [i_4] [i_10])) ? (1425872938U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_4] [i_4] [i_4] [i_10] [i_10] [i_4] [i_10]))))))));
            arr_39 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) var_2))))), (var_8)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [(_Bool)1])))));
            /* LoopNest 3 */
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                for (unsigned int i_12 = 2; i_12 < 16; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        {
                            arr_47 [i_4] [(_Bool)1] [i_11] [i_12] [i_13] = ((((long long int) var_1)) - (((/* implicit */long long int) ((arr_37 [i_12 + 2] [i_12 - 2]) + (arr_37 [i_12 + 3] [i_12 - 2])))));
                            var_19 = ((/* implicit */long long int) (((!(arr_14 [i_4]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_24 [i_12 + 3] [i_12 + 3] [i_11] [i_12] [i_13]))))) : (((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -6390398566968155378LL)))) : (arr_34 [i_12] [i_12 + 2] [i_12 + 2] [i_11] [i_12])))));
                            var_20 = ((/* implicit */int) min((((((/* implicit */_Bool) (-(arr_37 [i_4] [i_10])))) ? (var_3) : (((/* implicit */unsigned long long int) arr_45 [i_4] [i_4])))), (((/* implicit */unsigned long long int) arr_33 [i_13] [i_12] [i_11] [i_4] [i_4]))));
                        }
                    } 
                } 
            } 
        }
        var_21 += ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) arr_33 [i_4] [i_4] [i_4] [i_4] [i_4]))))), (((long long int) ((((arr_17 [2ULL]) + (9223372036854775807LL))) << (((var_11) - (3248763980U))))))));
        var_22 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_4] [i_4] [i_4])))))) & (max((-6390398566968155378LL), (((/* implicit */long long int) (unsigned short)36174))))));
    }
    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
    {
        arr_50 [i_14] [i_14] = ((/* implicit */unsigned int) var_9);
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((arr_49 [i_14]) % (((/* implicit */int) (unsigned short)36784)))) : (((/* implicit */int) arr_44 [i_14] [i_14])))))));
    }
    var_24 = ((/* implicit */signed char) var_6);
}
