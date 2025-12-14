/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13777
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] |= ((/* implicit */long long int) var_3);
                var_13 |= ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1 + 1])) / (((/* implicit */int) max((((/* implicit */unsigned short) (short)127)), (arr_1 [i_0]))))))), (arr_4 [i_0] [i_1 - 1])));
            }
        } 
    } 
    var_14 = ((short) ((int) var_11));
}
