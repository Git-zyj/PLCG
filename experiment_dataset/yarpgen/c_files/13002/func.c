/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13002
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))) ? (((/* implicit */long long int) ((int) (+(((/* implicit */int) var_3)))))) : (var_2)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) % (((/* implicit */int) arr_1 [i_0]))))) == ((-(7716969713705790603LL)))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((int) max((var_2), ((-9223372036854775807LL - 1LL)))));
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) 36028797018963967LL))));
                    }
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2]);
                        var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) (~(var_8)))) ? (-5342838161139326556LL) : (((-2820120845192002542LL) | (((/* implicit */long long int) -8)))))), (((/* implicit */long long int) var_6))));
                        var_23 = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61776)) ? (arr_9 [4LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4])))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max(((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) (unsigned short)65535)))))), (max((arr_2 [i_0]), (arr_2 [i_0]))))))));
                    }
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        arr_14 [i_1] [i_1] = var_13;
                        arr_15 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) (+(6544444213691555749LL))));
                        arr_16 [i_1] = (+(((((/* implicit */_Bool) min((arr_10 [i_0] [i_1]), (-3144264941463046616LL)))) ? (min((4611686018427387903LL), (((/* implicit */long long int) (signed char)-7)))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_5])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_5]))))))));
                    }
                    var_25 -= ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) max((((/* implicit */int) arr_13 [i_0] [i_0] [i_2])), (arr_0 [i_0] [i_1]))))))), ((~(((/* implicit */int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) arr_1 [i_1])))))))));
                }
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    arr_21 [i_1] [i_1] = arr_9 [i_0];
                    arr_22 [i_0] = var_16;
                }
                /* vectorizable */
                for (long long int i_7 = 2; i_7 < 12; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        var_26 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                        arr_27 [i_1] [i_7] [i_7 - 2] [i_7 + 1] &= ((/* implicit */int) ((long long int) arr_25 [i_7] [i_7] [i_7 - 2] [i_7] [i_7 + 1] [i_7 - 2]));
                    }
                    for (signed char i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */long long int) ((unsigned short) (~(var_10))));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 1; i_10 < 11; i_10 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (arr_31 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 1] [i_7 - 2] [i_7 + 1])));
                            arr_33 [i_7] = ((/* implicit */long long int) arr_23 [i_7 - 1] [i_7 - 2]);
                        }
                        arr_34 [i_0] [i_1] [i_7] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (arr_32 [i_1] [i_7] [(unsigned short)7]))))) != (((((/* implicit */_Bool) arr_30 [i_9] [i_7 - 2] [i_7] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9] [i_1] [i_1]))) : (5486842033056749609LL)))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_7 - 1] [(unsigned short)1]) : (arr_10 [i_1] [i_7 - 2])))));
                    }
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_1] [i_7 + 1] [4])) ? (arr_18 [i_0] [i_7 - 1] [i_1]) : (arr_18 [i_7] [i_7 + 1] [i_7 + 1])));
                }
            }
        } 
    } 
}
