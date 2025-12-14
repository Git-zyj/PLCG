/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11636
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((((min(0, 1))) ? ((var_5 ? var_10 : var_4)) : var_1))) ? (min(65528, var_11)) : (!879187084)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = 3415780210;
                var_19 = ((!((((((~(arr_2 [i_0])))) ? 0 : (arr_3 [i_1]))))));
            }
        }
    }
    var_20 = var_0;
    var_21 *= ((!(((-((min(var_2, var_0))))))));
    var_22 = var_5;
    #pragma endscop
}
