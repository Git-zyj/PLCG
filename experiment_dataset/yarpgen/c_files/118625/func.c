/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118625
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
    for (short i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 2] = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */unsigned short) (short)32767)), (arr_2 [i_0 + 3] [i_0 + 1] [i_1 + 2]))));
                arr_6 [i_0 + 3] [i_1 + 1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_3 [i_1 + 1])) >> (((((/* implicit */int) arr_4 [i_0 - 1])) - (8093)))))));
                var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((arr_1 [i_0 + 4] [i_1 + 2]), ((+(max((var_0), (((/* implicit */unsigned int) var_16)))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((int) var_13));
}
