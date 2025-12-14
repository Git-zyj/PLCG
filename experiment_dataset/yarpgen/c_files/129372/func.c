/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129372
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [5LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_4 [i_0]))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_13 -= ((/* implicit */unsigned int) arr_4 [i_0]);
                            arr_15 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1] [i_2] [22U])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))));
                            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_7 [i_3] [(short)12] [(short)20]))));
                            var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_2] [i_1] [i_4]))));
                        }
                    } 
                } 
                var_16 = ((short) arr_11 [i_0] [i_1] [i_1] [i_2]);
                var_17 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2]))));
            }
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 2) 
            {
                var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */unsigned int) var_1)) : (368206855U)))) / (arr_12 [i_0] [(_Bool)1] [i_5] [i_0])));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (signed char i_7 = 1; i_7 < 23; i_7 += 2) 
                    {
                        {
                            arr_25 [i_7 - 1] [(signed char)15] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_7 + 2] [i_7] [i_7] [14ULL] [i_7 - 1] [i_7 + 1] [(_Bool)1])) ? (((/* implicit */int) arr_20 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7] [(short)24] [i_7 + 2])) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_7 - 1] [i_0] [i_0]))));
                            arr_26 [i_0] [i_7 + 2] [3U] [i_0] [i_1] [23U] [i_1] = ((((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (var_6))) < ((~(var_6))));
                        }
                    } 
                } 
            }
            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_4 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))))));
        }
        for (short i_8 = 3; i_8 < 23; i_8 += 3) 
        {
            var_20 &= ((/* implicit */int) ((_Bool) arr_10 [i_0] [i_8 - 3] [i_8 - 3]));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_8] [i_8 + 2] [(signed char)23])) ? (((/* implicit */int) arr_5 [i_0] [i_8 + 1] [i_8])) : (((/* implicit */int) arr_5 [i_0] [i_8 - 2] [i_8 - 2]))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_36 [(short)22] [i_8] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [(short)13] [i_0]))));
                        arr_37 [i_8] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */int) (~(arr_24 [i_0] [23ULL] [i_9] [i_8 - 3] [(_Bool)1] [23ULL] [i_9])));
                        var_22 = ((/* implicit */unsigned long long int) arr_28 [i_0] [i_8]);
                    }
                } 
            } 
            var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 3926760449U)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [5LL] [i_0]))) / (arr_10 [(_Bool)1] [i_8] [i_8]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_8])))))));
        }
        for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                var_24 = ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_1)) : (2434076733U)));
                var_25 *= arr_14 [i_0] [i_11] [i_12 - 1];
            }
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 878868092)) : (var_6)))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) arr_43 [(_Bool)1] [i_11] [(_Bool)1] [i_13]))));
                arr_47 [i_0] [18LL] [i_0] = ((/* implicit */short) (-(arr_38 [i_13] [i_11] [i_0])));
            }
            var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-76))) & (368206823U)));
        }
        arr_48 [i_0] [i_0] = ((/* implicit */int) (-(var_10)));
        arr_49 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
        var_28 ^= ((/* implicit */long long int) (+(((int) arr_46 [i_0] [23ULL] [i_0]))));
    }
    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            for (short i_16 = 2; i_16 < 17; i_16 += 3) 
            {
                {
                    arr_57 [i_16] [i_16] [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_18 [i_16 + 2] [i_16] [(_Bool)1]))))));
                    var_29 = ((/* implicit */short) 878868109);
                }
            } 
        } 
        arr_58 [i_14] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_14] [i_14])) : (((/* implicit */int) arr_0 [i_14] [(_Bool)1]))))));
    }
    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 3) /* same iter space */
    {
        var_30 -= ((/* implicit */unsigned int) (+(((long long int) arr_13 [i_17] [i_17] [i_17] [(_Bool)1] [2ULL]))));
        arr_63 [(signed char)0] = ((((/* implicit */_Bool) (short)-20811)) ? (((((/* implicit */_Bool) 125829120)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2384290715U)))))));
        var_31 = arr_40 [i_17] [i_17];
    }
    var_32 = ((/* implicit */_Bool) 2384290715U);
}
