/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, ((((~var_9) ? var_12 : (~44))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_15));
                var_18 = 2839675201855834948;
                var_19 -= -4621982721105836070;
            }
        }
    }
    var_20 = ((((((!var_7) ? var_9 : -188))) && ((!(((var_10 ? 10368537096143438110 : var_6)))))));
    var_21 = ((~(((var_12 != (min(524287, -1219585142)))))));
    #pragma endscop
}
