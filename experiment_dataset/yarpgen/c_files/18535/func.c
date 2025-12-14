/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18535
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
    var_12 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-6950)) ^ (((/* implicit */int) var_10))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (1282734011U))))) - (max((max((0U), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) (+(var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_1]))))) ? ((+(var_4))) : (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) var_6))));
                var_14 = ((/* implicit */_Bool) arr_5 [i_0]);
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_15 = ((/* implicit */_Bool) ((unsigned int) 4294967267U));
                    arr_8 [i_0 - 1] [i_0] [i_1] [i_0 - 1] |= ((/* implicit */unsigned short) arr_2 [i_1]);
                }
            }
        } 
    } 
}
