/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172920
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) (signed char)21))))), ((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14592))) : (var_2)))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (short)-21407))));
                    var_21 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (8596266462078981670LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) var_7);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_0])) ? (-14) : (((/* implicit */int) (signed char)-1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2)) ? (9) : (var_13)))) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))) : (((var_11) - (((((/* implicit */_Bool) arr_11 [i_1] [i_4])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) (short)4238))))))));
                            var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0] [5] [i_2] [i_3] [i_4]))));
                            var_25 = ((/* implicit */unsigned short) ((((int) (short)15518)) > (((/* implicit */int) arr_8 [i_0] [i_0]))));
                            arr_17 [i_2] [i_1] [i_2] [i_3] [i_0] [i_0] = ((/* implicit */signed char) min(((+(((/* implicit */int) (signed char)21)))), (((/* implicit */int) arr_15 [i_3] [i_0] [i_0]))));
                            var_26 = ((/* implicit */signed char) (unsigned char)2);
                        }
                        arr_18 [i_0] [(signed char)0] [(signed char)0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) (~(((unsigned int) var_15))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        arr_21 [i_0] [i_0] [i_1] [i_2] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) && ((_Bool)1)))) : ((~(-1))))) : ((+(-478842996)))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            arr_26 [i_0] [i_1] [(short)1] [(unsigned short)2] [i_1] = ((/* implicit */unsigned char) (+((~(arr_22 [i_1 - 1] [i_1 - 2] [i_6 + 1] [(short)7] [i_1 - 2] [(_Bool)1])))));
                            var_27 = ((unsigned int) -8377440856259648950LL);
                            arr_27 [i_6] [i_5] [i_1] [i_0] = ((/* implicit */int) min((((unsigned long long int) arr_15 [i_6 + 1] [i_2] [i_2])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4470)) << (((arr_12 [i_0] [i_1] [i_2]) - (8714653845310846912LL))))))));
                            var_28 = ((/* implicit */unsigned short) var_9);
                        }
                        var_29 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)21))))), (((unsigned long long int) arr_9 [i_5])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 2])))))));
                    }
                    var_30 = ((/* implicit */short) max((((/* implicit */int) (signed char)21)), (((((int) var_15)) - (min((((/* implicit */int) (short)32767)), (12)))))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned int) (-(var_13))))))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) : (8431456542654403566ULL)))));
}
