/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_4, ((((min(var_14, -1421835841)) != (max(6414966811772362393, var_12)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = max(((((arr_4 [i_0] [i_1]) ? var_11 : (arr_3 [i_0] [8])))), ((((((arr_3 [i_0] [i_1]) / (arr_3 [i_0] [i_0])))) - (var_0 / -6414966811772362401))));
                arr_6 [i_1] [i_1] [i_0] = (((-627835541930600726 != -1988082420) - ((((arr_1 [i_0] [3]) || var_18)))));
            }
        }
    }
    var_21 = (~var_9);
    #pragma endscop
}
