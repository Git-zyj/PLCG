/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_6));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = 1444868351;
                var_20 = (min((((arr_5 [i_0 + 3] [i_1] [9]) & (~var_17))), ((126 ? 1444868351 : 1444868351))));
                var_21 = 14142;
                arr_6 [8] [1] = ((-1444868351 - ((var_2 ? 150 : var_5))));
            }
        }
    }
    var_22 -= (((min(0, 9992))) ? var_10 : ((max(var_5, (min(var_5, var_7))))));
    #pragma endscop
}
