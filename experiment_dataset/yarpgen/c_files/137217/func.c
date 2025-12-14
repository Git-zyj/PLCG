/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137217
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned int) ((4392338644021753208LL) >= (-3306396832724753030LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [2] [i_1]))) : (arr_0 [i_0 - 1] [i_1 + 1]));
                var_19 *= var_18;
            }
        } 
    } 
    var_20 = ((/* implicit */short) (~(((((((/* implicit */int) var_2)) % (((/* implicit */int) var_18)))) / (var_4)))));
    var_21 = ((/* implicit */_Bool) var_16);
}
