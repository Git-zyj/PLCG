/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134875
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) (~(min((((arr_0 [i_0]) >> (((((/* implicit */int) var_8)) - (23449))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : ((~(((unsigned long long int) arr_0 [i_0]))))));
        arr_3 [i_0] = (~(arr_0 [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (~(((/* implicit */int) ((short) arr_4 [i_1] [i_1]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_17 = ((/* implicit */short) ((arr_1 [i_2]) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) <= (var_0))))));
            var_18 = ((/* implicit */_Bool) (~(arr_0 [i_2])));
        }
        for (signed char i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        arr_22 [i_1] [i_3] [i_4] |= (~((-((~(((/* implicit */int) var_3)))))));
                        arr_23 [i_5] [i_4] [i_3] = ((/* implicit */int) arr_5 [i_1]);
                        arr_24 [i_1] [i_1] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((((var_11) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) var_14)) : ((-(((arr_9 [i_4]) ? (((/* implicit */int) arr_18 [i_1])) : (((/* implicit */int) arr_4 [i_3] [(short)20]))))))));
                        var_19 = ((/* implicit */_Bool) arr_15 [i_5] [(unsigned short)8] [(unsigned short)8] [i_1]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_6 = 2; i_6 < 20; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    {
                        arr_30 [i_1] [i_3] [i_3] [i_7] [i_1] [i_6] = ((/* implicit */long long int) arr_14 [i_1] [i_3]);
                        var_20 = ((/* implicit */_Bool) arr_25 [i_6] [i_6] [i_6]);
                        var_21 &= ((/* implicit */signed char) ((long long int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2165971760U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_12 [i_1] [18U]) : (((/* implicit */unsigned int) arr_7 [i_1]))))))));
                    }
                } 
            } 
            arr_31 [i_1] = (+(((/* implicit */int) ((unsigned char) (unsigned short)46055))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 4; i_8 < 17; i_8 += 2) 
            {
                var_22 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_8)), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [7LL]))) : (var_13))), (((/* implicit */unsigned long long int) ((var_2) <= (((/* implicit */unsigned long long int) arr_32 [i_1] [i_1] [i_8 + 3] [i_8])))))))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 20; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) ((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((((((/* implicit */_Bool) (signed char)-9)) || (((/* implicit */_Bool) arr_20 [i_1] [i_3] [i_8] [i_9])))), (((arr_32 [i_3] [i_3] [i_8] [i_3]) >= (arr_27 [i_1] [i_3] [i_9] [i_3])))))))));
                            arr_39 [i_1] [i_3] [8ULL] [i_1] [i_1] [i_9] [i_10] = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_1] [i_9 + 1] [i_8 + 2] [11]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_11 = 4; i_11 < 20; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 18; i_12 += 2) 
                    {
                        {
                            arr_45 [i_12 + 1] = ((/* implicit */_Bool) (~(((arr_28 [i_8 - 2] [i_11] [i_8] [i_11 - 2] [i_12] [i_11 - 2]) ? (var_4) : (((/* implicit */int) arr_28 [i_8 + 2] [i_3] [i_1] [i_11] [20U] [i_12]))))));
                            arr_46 [i_1] [i_1] [i_8] [i_11] = ((/* implicit */signed char) arr_44 [i_1] [i_3] [i_8] [i_8 - 3] [i_11] [i_12]);
                        }
                    } 
                } 
                var_24 *= ((/* implicit */unsigned long long int) arr_4 [i_3] [i_3]);
            }
        }
        for (signed char i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
        {
            arr_49 [(unsigned short)19] [i_13] [i_13] = ((((/* implicit */int) (signed char)-17)) == (725844441));
            arr_50 [i_1] [i_13] [(_Bool)1] = ((/* implicit */unsigned short) var_12);
            arr_51 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_13])))))));
        }
        var_25 = ((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1] [i_1]);
    }
    var_26 = ((/* implicit */unsigned short) (-(((max((((/* implicit */unsigned long long int) var_4)), (var_9))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
    var_27 = ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) + ((~(var_4))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
}
