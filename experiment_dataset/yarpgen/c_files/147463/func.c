/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147463
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
    var_13 = ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((2216527627U) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))) >= (var_5))))))))));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 2078439673U))));
        }
        for (unsigned int i_2 = 3; i_2 < 8; i_2 += 3) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned int) arr_2 [i_0] [i_2]);
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 4] [i_2 + 4])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32083)) ? (((/* implicit */int) arr_2 [2ULL] [i_2 + 4])) : (((/* implicit */int) var_2))))) : (((974573100U) << (((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 4]))))));
        }
        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((long long int) var_10));
        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_8 [i_0]), ((!(((/* implicit */_Bool) 1325036233)))))))));
    }
}
