/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125523
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_15))));
                                var_18 = ((/* implicit */unsigned int) 3437118838514129154LL);
                                arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((_Bool) arr_1 [i_0 + 1])) ? (min((9939771343867715417ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) 11U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) var_9))))) : (((unsigned int) var_6))));
                            }
                        } 
                    } 
                } 
                var_19 -= ((/* implicit */short) (unsigned short)59266);
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) / (((int) arr_9 [i_1 - 1] [i_1 - 1] [i_5] [i_0 + 1]))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2903149408U))))) : (((/* implicit */int) (_Bool)1)))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1 + 1] [i_6] [i_1 + 1])) || (((/* implicit */_Bool) arr_3 [i_1 + 1])))))));
                    /* LoopSeq 1 */
                    for (int i_7 = 2; i_7 < 17; i_7 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (+(arr_7 [i_0 - 1] [i_7 + 3] [i_0 + 1]))))));
                        var_24 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) arr_20 [i_0] [i_0] [i_6] [i_7 + 1])))) < (((/* implicit */int) (_Bool)1)))))));
                        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0)))))));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_8 = 4; i_8 < 19; i_8 += 2) 
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 1908453825426417983ULL)) ? (arr_23 [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) 2045221995U)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_1)), (arr_21 [i_0] [i_8 - 4] [i_0] [i_8] [i_1 + 1]))))))))));
                        var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_23 [i_0 + 1] [i_8 - 3])))));
                        /* LoopSeq 4 */
                        for (short i_9 = 3; i_9 < 18; i_9 += 3) 
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) == (((/* implicit */int) var_7))))) : ((+(((/* implicit */int) arr_26 [i_0] [i_1] [i_6] [i_1] [i_0] [i_8] [i_9 + 2])))))))));
                            var_29 |= ((/* implicit */long long int) min((((/* implicit */int) var_7)), (var_5)));
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_9 - 1] [i_8 - 3] [i_6] [i_0 + 1] [i_9] [i_0 + 1])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_1] [i_6] [i_8 + 1] [i_9 + 1] [i_8] [i_0 + 1]))) * (arr_23 [i_1 - 1] [i_9 - 3]))) : (((/* implicit */long long int) ((int) max((2249745300U), (1391817865U))))))))));
                        }
                        for (long long int i_10 = 2; i_10 < 18; i_10 += 2) 
                        {
                            arr_31 [i_0 - 1] [i_10 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_10] [i_0 - 1])) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8 - 4] [i_10] [i_10] [i_10 + 1] [i_10 - 2] [i_1 + 1])) ? (arr_13 [i_0 + 1] [i_0 + 1] [i_6]) : (((/* implicit */long long int) 209867941U))))) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) (_Bool)1))))));
                            var_31 -= ((/* implicit */long long int) ((_Bool) (!(((((/* implicit */_Bool) arr_19 [i_0] [i_1 - 1] [i_1 + 1] [i_8] [i_10])) && (arr_30 [i_0 - 1] [i_1] [i_6] [i_8] [i_10 - 1]))))));
                        }
                        for (unsigned short i_11 = 3; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            arr_35 [i_0] = ((/* implicit */unsigned short) ((unsigned int) (+(2903149408U))));
                            var_32 &= ((/* implicit */long long int) (-(13452561398748444212ULL)));
                        }
                        for (unsigned short i_12 = 3; i_12 < 18; i_12 += 2) /* same iter space */
                        {
                            arr_39 [i_0] [i_8 - 4] [i_0 - 1] [i_8 + 1] [i_12] = ((/* implicit */long long int) var_5);
                            var_33 = ((/* implicit */unsigned int) min((var_33), ((+(((((/* implicit */_Bool) -2004849775)) ? (209867934U) : (209867948U)))))));
                        }
                    }
                    arr_40 [i_0 - 1] [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) arr_1 [i_0]);
                }
                for (unsigned long long int i_13 = 2; i_13 < 18; i_13 += 2) 
                {
                    var_34 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_1 - 1])))) > (((arr_4 [i_13 - 1] [i_1 + 1]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248)))))));
                    var_35 -= arr_5 [i_0 - 1] [i_1 - 1];
                }
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) > (var_6)));
    var_37 = ((/* implicit */_Bool) ((unsigned short) var_5));
}
