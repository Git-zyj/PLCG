/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167986
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
    var_11 = ((/* implicit */unsigned int) ((signed char) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) (short)22169))))))) : (((((/* implicit */_Bool) 2646127760459182181LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-2646127760459182175LL))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */int) var_0);
            arr_5 [i_0] [i_1 - 1] [8] = ((/* implicit */long long int) arr_2 [0LL]);
            arr_6 [i_0] = (~(((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */long long int) arr_4 [i_1 - 1])) : (-3823004035887899892LL))));
        }
        /* vectorizable */
        for (short i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            var_13 = ((/* implicit */signed char) ((((-4952746571428794859LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_4)) - (85)))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_14 = ((/* implicit */long long int) arr_4 [i_0]);
                var_15 = ((/* implicit */signed char) arr_8 [i_0] [i_0]);
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
                {
                    arr_15 [i_2] = ((/* implicit */signed char) (-(arr_11 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 + 1])));
                    var_16 = ((/* implicit */long long int) var_2);
                    arr_16 [(unsigned short)2] [(unsigned short)2] [(unsigned short)5] [i_3] [i_4] = ((/* implicit */long long int) (+(3U)));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 2; i_5 < 9; i_5 += 4) /* same iter space */
                    {
                        var_17 = (signed char)13;
                        arr_19 [(signed char)6] [i_4] [i_3] [i_2] [i_0] = ((/* implicit */_Bool) var_5);
                    }
                    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (short)-1)) * (((/* implicit */int) arr_3 [4U] [i_4])))));
                        arr_22 [i_0] [i_2 + 2] [(unsigned char)7] [i_4] [i_6 - 2] = ((/* implicit */int) arr_10 [i_6 + 2] [i_4] [(unsigned short)0] [i_2]);
                    }
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (signed char)-30))));
                }
                for (long long int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */short) (!((!(((/* implicit */_Bool) 2646127760459182183LL))))));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) 4294967295U)) : (9223372036854775807LL)))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) arr_8 [i_3] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_18 [i_7] [i_2 + 2] [i_3] [i_7] [i_2]))))));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 3; i_8 < 10; i_8 += 4) /* same iter space */
                    {
                        arr_27 [i_0] [i_0] [i_3] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-102))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (_Bool)1))))));
                        var_22 = ((/* implicit */short) max((var_22), ((short)-13574)));
                        arr_28 [i_0] [0] = ((/* implicit */signed char) ((((/* implicit */int) var_2)) * (((/* implicit */int) (signed char)-80))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [4LL] [i_8 + 1] [i_7] [i_7] [(unsigned char)3] [i_0])) ? (arr_20 [i_8] [i_8 + 1] [8LL] [i_8] [i_8] [i_8]) : (arr_20 [i_8] [i_8 + 1] [9U] [i_8] [i_7] [i_7])));
                        arr_29 [i_0] [i_0] [i_0] [i_0] [(short)5] = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 - 1] [i_3] [i_7] [2U]))) - (var_9))));
                    }
                    for (signed char i_9 = 3; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) var_7);
                        arr_33 [i_9] = ((/* implicit */unsigned short) 128);
                        var_25 = arr_0 [10LL];
                        var_26 = ((/* implicit */signed char) (+(((/* implicit */int) var_3))));
                    }
                    for (signed char i_10 = 3; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(((/* implicit */int) (signed char)127)))))));
                    }
                    var_29 = ((/* implicit */int) -6812009315008509957LL);
                }
                for (unsigned int i_11 = 2; i_11 < 7; i_11 += 4) 
                {
                    arr_39 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_0] [i_2 + 1] [i_11 - 1] [i_11 - 2])) ? (arr_11 [7LL] [i_2 + 1] [7LL] [i_11 + 1]) : (arr_11 [i_2] [i_2 + 1] [i_2] [i_11 + 2])));
                    var_30 = ((/* implicit */long long int) (signed char)(-127 - 1));
                }
                arr_40 [i_3] [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)119))));
            }
            var_31 = ((/* implicit */signed char) (+(arr_32 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 2])));
        }
        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_4))))) : (var_6))), (((((/* implicit */_Bool) -9223372036854775807LL)) ? (1121045204U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)511))))))))));
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) max((((/* implicit */long long int) (signed char)(-127 - 1))), (((long long int) (unsigned char)7)))))));
    }
    var_34 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65514))));
}
