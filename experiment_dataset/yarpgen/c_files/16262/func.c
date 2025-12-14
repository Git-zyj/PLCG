/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16262
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_0 [i_0])))))) : ((+(var_4)))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (6698912340596586975ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_1]))))));
                var_10 = (~(min((11747831733112964633ULL), (((/* implicit */unsigned long long int) min((-1549764585), (((/* implicit */int) (signed char)56))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) (signed char)51);
    var_12 = ((long long int) var_9);
}
