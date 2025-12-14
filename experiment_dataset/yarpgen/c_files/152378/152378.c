/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((15872 % (((((var_16 ? -67 : var_7))) ? 1 : ((var_9 ? 303245940855311489 : var_1))))));
    var_18 = (min(var_18, ((max(((min(192, (-2096793506 > 2096793505)))), var_10)))));
    var_19 -= ((((-(var_11 || var_16))) * (((!(var_15 < 1729432764))))));
    var_20 += (max(((-2096793506 ? (!-1729432764) : var_0)), var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = (((((~(((288230376151711743 && (arr_3 [i_0] [i_0] [i_0]))))))) ? var_10 : 4294967295));
                var_22 += ((!((((~(arr_3 [i_1] [i_0] [i_0])))))));
            }
        }
    }
    #pragma endscop
}
