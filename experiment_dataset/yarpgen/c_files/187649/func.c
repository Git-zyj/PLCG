/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187649
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1]);
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((arr_3 [i_0]) > (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) 8701474743895696067LL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4295))))))))));
        }
        arr_7 [(unsigned short)17] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        var_21 |= ((/* implicit */_Bool) arr_0 [(signed char)7]);
    }
    var_22 = ((/* implicit */_Bool) max((((/* implicit */int) var_3)), (max(((+(((/* implicit */int) var_13)))), (((/* implicit */int) min(((short)-4296), (((/* implicit */short) (signed char)95)))))))));
}
