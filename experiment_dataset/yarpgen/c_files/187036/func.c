/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187036
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)29336))) || (((/* implicit */_Bool) -4166699098630292241LL))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-30772)) ? (((/* implicit */unsigned long long int) max((-4166699098630292241LL), (arr_2 [i_0] [i_1] [i_0])))) : (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1]))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (short)14803)))))));
                    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_15))));
}
