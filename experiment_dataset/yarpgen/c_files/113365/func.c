/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113365
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
    var_17 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (min((var_14), (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((var_4) % (var_4)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -2372986473932169255LL))));
                var_19 = ((/* implicit */long long int) var_8);
                var_20 = ((/* implicit */int) min((var_20), ((+(((/* implicit */int) var_16))))));
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 15; i_2 += 1) 
                {
                    arr_10 [i_0] = ((/* implicit */int) arr_9 [i_0 + 1] [i_1]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */int) (+(-2372986473932169248LL)));
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_4))))));
                    }
                    for (long long int i_4 = 1; i_4 < 15; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_14)))) ? (((/* implicit */unsigned long long int) (-(var_5)))) : (((((/* implicit */_Bool) 4294967295U)) ? (1615212193350361979ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_16 [i_0] [i_4] [i_2 + 1] [i_1]), (((/* implicit */unsigned int) arr_15 [i_0 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_4 + 1] [i_4]))))) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_4 [i_4 + 1] [i_4])));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_2] [i_5])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) * (((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
                            var_25 |= ((/* implicit */long long int) var_9);
                        }
                        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_11 [i_0 - 2] [i_0] [i_0 - 2] [i_0 + 1] [i_2 - 2] [i_6 - 1])), ((~(1401570840)))))) | (arr_12 [i_6] [i_2] [i_2] [i_4 - 1] [i_2] [i_6 - 2])));
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0] [i_2 - 1] [i_6 - 2])) ? (arr_12 [i_0] [i_0 - 1] [i_1] [i_2] [i_2 - 3] [i_6 + 1]) : (arr_12 [i_0 - 2] [i_0 - 2] [i_2 - 3] [i_2 - 3] [i_2 - 1] [i_6 - 1]))) & (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) min((var_9), (arr_3 [i_0])))))))));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (var_14))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_0] = ((/* implicit */short) arr_11 [i_0] [i_1] [i_0] [i_4] [i_0] [i_7]);
                            var_29 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) min((var_1), (var_1)))), (min((arr_9 [i_7] [i_1]), (((/* implicit */unsigned long long int) var_5))))))));
                            var_30 = ((/* implicit */unsigned short) var_1);
                        }
                        var_31 = ((/* implicit */unsigned int) arr_22 [i_0 - 2] [i_1] [i_2] [i_2] [i_4]);
                        arr_27 [i_0] = ((min((((/* implicit */unsigned long long int) (+(arr_22 [i_1] [i_1] [i_1] [i_1] [i_1])))), (var_10))) % (((/* implicit */unsigned long long int) var_3)));
                    }
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1401570862)) ? (2860788651U) : (((/* implicit */unsigned int) 1401570838))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_2])), (arr_1 [i_2])))) ? ((+(((/* implicit */int) arr_23 [i_0 - 1] [(short)11] [i_0] [i_0] [i_2])))) : (((((/* implicit */_Bool) 4036869927910292775LL)) ? (var_3) : (((/* implicit */int) (unsigned short)12236)))))) : (var_2));
                }
                for (int i_8 = 1; i_8 < 15; i_8 += 4) 
                {
                    var_32 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_23 [i_0 - 1] [i_1] [i_1] [i_1] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((var_11), (arr_23 [i_0] [i_0] [i_8 - 1] [i_9] [i_10])))), (((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)8] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) var_16)) : (var_4)))) : (min((((/* implicit */long long int) arr_11 [i_0] [4U] [4U] [i_8 + 1] [i_10 + 1] [i_8 + 1])), (arr_8 [i_10] [i_10 - 1])))))));
                                arr_37 [i_0] [i_1] [i_0] [i_8] [i_0] [i_0] [i_10] = ((/* implicit */int) var_1);
                                arr_38 [i_0] [i_9] [i_8] [i_8 + 1] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 4176208612U))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
    var_35 |= ((/* implicit */int) var_16);
    var_36 = ((/* implicit */int) var_1);
}
