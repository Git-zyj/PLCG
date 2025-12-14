/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174716
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 *= ((/* implicit */_Bool) -6247322511771831167LL);
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((+(var_1))) != (max((((/* implicit */unsigned long long int) min((var_11), ((_Bool)1)))), (((var_6) + (var_6)))))));
                    var_18 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 2]))) : (arr_2 [i_1 - 1]))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-21041), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (_Bool)1)))));
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_10 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_8)))))) | (((unsigned long long int) var_16))))));
                        var_21 *= ((/* implicit */signed char) ((2860117479U) << ((~((~(((/* implicit */int) (_Bool)1))))))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((((/* implicit */long long int) max(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (_Bool)1))))), (arr_0 [i_2] [i_0]))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 2; i_4 < 9; i_4 += 2) 
                    {
                        var_23 -= ((/* implicit */unsigned long long int) arr_6 [i_0] [i_4]);
                        var_24 += ((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)1))))));
                        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_13))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_15)) ? (arr_9 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) > (var_6))) ? (((/* implicit */int) ((signed char) max((arr_9 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        var_27 *= ((/* implicit */unsigned int) var_8);
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_0))));
                    }
                    for (int i_6 = 1; i_6 < 7; i_6 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))))) ? (((long long int) var_16)) : (((/* implicit */long long int) ((var_16) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11)))))))))));
                        arr_21 [i_6] [10] [10] [i_0] &= ((/* implicit */long long int) var_8);
                        arr_22 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((3850258941555194701ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                    }
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)6])))))), (max((var_2), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_0] [i_0]))))))))))));
                    var_31 = ((/* implicit */int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_9 [i_0] [i_0])))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */long long int) (+(max((((/* implicit */int) (signed char)-26)), ((+(((/* implicit */int) (_Bool)0))))))));
    var_33 += ((/* implicit */unsigned int) (((-((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) var_12)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
}
