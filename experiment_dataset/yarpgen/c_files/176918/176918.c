/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_8 [i_0 + 1] [i_1 - 1] = (max((max(48255019, 3174794005)), ((((-(arr_7 [i_0] [i_0])))))));
                var_19 |= ((-(max((max(var_3, 4246712268)), var_9))));
                var_20 -= (max(((((!(arr_5 [i_0] [17] [i_1 - 2]))) ? (!var_15) : var_15)), (((!4246712285) ? (!var_15) : (((!(arr_0 [i_0] [i_1 + 1]))))))));
            }
        }
    }
    var_21 = (((20264 ? 14053281576450957838 : (((63415 ? 12553 : 1))))));
    #pragma endscop
}
