/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11700
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
    var_10 &= ((/* implicit */short) max((max((var_3), (var_3))), (((long long int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) (short)31642))))) ? (min((((/* implicit */long long int) (short)-31643)), (arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [13LL]) : (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_10 [(short)0] [i_1] [i_0] [13LL] [i_3] = max((((arr_5 [i_0] [i_1] [i_3]) / (min((var_7), (((/* implicit */long long int) var_8)))))), ((+(arr_8 [i_0] [i_0] [i_0]))));
                        arr_11 [i_0] [13LL] [i_0] [i_0] [i_0] = ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (131072U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31643)))))), (((long long int) arr_7 [i_0] [i_0] [10LL])))) / (((((var_1) == (((/* implicit */long long int) ((/* implicit */int) (short)-32766))))) ? (arr_1 [i_0] [19LL]) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)22308))) : (arr_4 [i_0] [i_3]))))));
                        var_11 = ((/* implicit */long long int) ((min((max((var_3), (264241152LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [(short)19] [i_0] [i_2]))))))) == (((((/* implicit */_Bool) ((short) (short)31642))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_0] [i_0] [14LL]), ((short)31641)))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        var_12 = ((/* implicit */long long int) ((unsigned int) var_8));
                        arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (+(var_9)));
                        arr_15 [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_0] [7LL] [i_2])) ? (arr_5 [i_0] [i_2] [i_4]) : (arr_4 [i_0] [i_4]))) ^ (max((arr_4 [i_0] [i_0]), (arr_5 [i_0] [i_2] [i_0])))));
                        /* LoopSeq 4 */
                        for (long long int i_5 = 3; i_5 < 19; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [1LL] [i_0] = ((long long int) var_8);
                            arr_19 [i_0] = ((/* implicit */long long int) arr_9 [i_0] [i_0] [10LL]);
                            arr_20 [16U] [(short)1] [2LL] [i_0] [13LL] [i_2] [16LL] = ((/* implicit */short) arr_17 [13LL] [(short)5] [9LL] [6LL] [18LL] [13LL]);
                        }
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_1] [12U] [12LL] [16LL] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)3505)) ? (-1LL) : (5509497210013002065LL)))))) ? ((~(var_3))) : (var_9));
                            var_13 -= ((/* implicit */short) ((((/* implicit */_Bool) min((126100789566373888LL), (arr_4 [i_6] [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [16U] [i_4] [16U]))) : ((~(arr_5 [i_4] [i_2] [i_6])))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 20; i_7 += 1) 
                        {
                            arr_27 [i_0] [7LL] [17LL] [11LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((min((arr_0 [i_7 - 2]), (arr_21 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 1]))), (var_1)));
                            arr_28 [i_2] [i_0] [16LL] [20LL] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 274877906943LL)) ? (arr_25 [i_0] [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7] [i_7 - 2]) : (max((((/* implicit */long long int) arr_9 [(short)0] [i_0] [(short)0])), (var_5)))))) ? ((+((~(var_4))))) : (((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5)))));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_32 [i_8] [i_0] [(short)0] [(short)12] [i_0] [i_0] = ((long long int) 2096896LL);
                            var_14 = ((/* implicit */short) arr_0 [(short)6]);
                        }
                    }
                    arr_33 [11LL] [i_0] = (~(min((arr_4 [i_0] [10U]), (((/* implicit */long long int) (short)-1)))));
                }
            } 
        } 
    }
}
