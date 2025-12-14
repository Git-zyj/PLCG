/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179847
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
    var_20 -= var_19;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) var_8);
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((-4149571294859149888LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_2)))))) ? (((/* implicit */int) (short)4024)) : (max((((/* implicit */int) arr_0 [i_1])), ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))));
            }
        } 
    } 
}
