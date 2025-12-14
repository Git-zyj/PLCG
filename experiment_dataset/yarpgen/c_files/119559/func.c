/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119559
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
    var_12 = ((18122566681547533829ULL) == (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1159392399)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_8))), (((/* implicit */long long int) 81373866))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14U)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31)))));
                    var_14 += ((/* implicit */unsigned long long int) var_2);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4927)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned int) -81373842)) : (arr_8 [i_0] [i_1])))));
                    var_16 *= ((/* implicit */unsigned long long int) ((unsigned short) var_11));
                }
                arr_12 [i_0] [i_0] = ((/* implicit */signed char) -81373869);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((long long int) max((7158793529087981772ULL), (((/* implicit */unsigned long long int) (short)-22352)))));
}
