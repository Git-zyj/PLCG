/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114804
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
    var_12 = ((/* implicit */unsigned long long int) var_1);
    var_13 ^= ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((unsigned int) ((signed char) arr_2 [5])));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            var_15 ^= ((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)));
            arr_7 [(short)4] [i_1 - 2] [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        }
        arr_8 [i_0] = ((/* implicit */long long int) max((((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) (_Bool)0))));
    }
    var_16 = ((_Bool) (short)-26561);
}
