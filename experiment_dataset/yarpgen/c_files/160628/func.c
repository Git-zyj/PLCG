/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160628
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_4)))) / (var_7)))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_11))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((unsigned long long int) ((2985839976U) ^ (max((1073739776U), (((/* implicit */unsigned int) 1237903138))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((9054691901610587853ULL), (((/* implicit */unsigned long long int) var_9))))) ? ((+(15804978875249181907ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_16 ^= ((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3]);
                        var_17 = ((/* implicit */unsigned int) (+((-(1697098969)))));
                        var_18 = ((/* implicit */int) arr_1 [i_2] [i_0]);
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */unsigned long long int) var_1)) : (9392052172098963777ULL)));
                        var_19 = ((/* implicit */unsigned int) ((short) arr_0 [i_0] [i_0]));
                    }
                    var_20 = ((/* implicit */long long int) (unsigned short)29146);
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) > (((unsigned int) (unsigned char)6))))) : (arr_4 [i_2] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
}
