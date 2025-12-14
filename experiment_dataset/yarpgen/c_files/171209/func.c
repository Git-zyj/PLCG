/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171209
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(arr_7 [i_0]))))));
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((max((arr_1 [i_0]), (arr_5 [2]))) + (((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned short)8]))))));
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((unsigned long long int) (+(-4978404415711260989LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_7 [i_2]) / (((/* implicit */long long int) var_14)))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (~(var_4)));
                                arr_15 [i_0] [i_4] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [(short)4]))) : (arr_11 [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 20; i_5 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) arr_16 [i_5]))));
        arr_20 [i_5] = ((/* implicit */int) (!(((2675612463U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-15380)))))));
    }
}
