/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155762
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [(unsigned char)4])) : (((/* implicit */int) var_14))))) ^ (arr_0 [i_2 - 1] [i_0 - 1])))));
                            arr_11 [i_0] [i_0] [i_2] [18LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(2524928515U))))))) : (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_8))))) == (((long long int) var_13)))))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((unsigned long long int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [19])))))))) : ((+(-8116208743683299150LL)))));
                            var_16 = ((/* implicit */unsigned char) arr_7 [(unsigned char)20] [(unsigned char)20] [(unsigned char)20] [i_3]);
                            var_17 *= ((/* implicit */signed char) arr_9 [8ULL] [i_1] [i_1]);
                        }
                    } 
                } 
                var_18 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((signed char) 124U))), ((~(var_2)))));
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_19 *= var_14;
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (+((+(4089132550U))))))));
                }
                for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                {
                    arr_17 [i_5] [i_5] = ((/* implicit */short) 2524928515U);
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5] [12U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0 + 1] [i_1]))))));
                    var_22 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 12826662696012407957ULL)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_1))))) ? ((-(var_0))) : (((arr_0 [i_1] [i_5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
                    var_23 += (-(((/* implicit */int) (short)-14697)));
                    arr_18 [i_0] [i_5] [(unsigned short)7] [i_5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 + 3] [i_0 - 1])) ? (arr_8 [4U] [i_1] [i_0 + 3] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (short i_6 = 1; i_6 < 20; i_6 += 3) 
                {
                    arr_22 [i_6] = ((/* implicit */short) arr_20 [i_0 + 1] [i_1] [i_6 + 1]);
                    arr_23 [i_0] [i_0] [i_6 + 3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0 + 1]))))) ? (min((2524928515U), (((/* implicit */unsigned int) var_11)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-8192)))))));
                }
                for (signed char i_7 = 4; i_7 < 23; i_7 += 3) 
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_2 [i_7 + 1] [i_7 - 4])))) ? (((((/* implicit */_Bool) var_4)) ? (var_3) : (1906585670475045171LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_24 [(short)2] [i_7 - 4] [i_0 + 2])) : (((/* implicit */int) arr_24 [i_7] [i_7 - 2] [i_0 - 1])))))));
                    /* LoopSeq 3 */
                    for (int i_8 = 2; i_8 < 22; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_1] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(var_7)))) ? ((+(var_3))) : ((~(-1906585670475045171LL))))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))), (min((var_7), (((/* implicit */unsigned int) (signed char)-9)))))))));
                        var_25 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */unsigned long long int) arr_8 [i_0 + 3] [i_1] [i_1] [i_8])) : (1244920596639008871ULL))));
                    }
                    for (short i_9 = 2; i_9 < 23; i_9 += 3) 
                    {
                        arr_32 [i_7] = ((/* implicit */short) (~(var_2)));
                        arr_33 [i_0] [i_1] [i_0] [i_7] [(unsigned char)18] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(arr_4 [i_9])))) ? ((~(((/* implicit */int) (short)-17765)))) : (((/* implicit */int) (unsigned short)2627))))));
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~(963660892U))))));
                    }
                    for (int i_10 = 1; i_10 < 23; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (1548119729U))))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) arr_15 [i_0] [22ULL] [i_7] [i_10 - 1]))));
                        arr_38 [23LL] [i_7] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) ((arr_19 [15ULL] [(unsigned short)0] [i_10]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)20219)))))) + ((~(((/* implicit */int) (unsigned char)36)))))) == (((/* implicit */int) var_6))));
                    }
                    var_29 += ((/* implicit */unsigned long long int) (~(max((((arr_20 [i_7] [i_0] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)113)))), (((/* implicit */int) var_12))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) var_13);
    var_31 = ((/* implicit */long long int) var_6);
}
