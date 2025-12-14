/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16737
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 -= ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))));
        var_16 += ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((short) arr_0 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (short)23707))))))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-390)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_6)));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) arr_4 [i_1]))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_5 [i_2])))) ? (((/* implicit */unsigned long long int) arr_5 [i_2 - 2])) : (var_4))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) 958326579));
}
