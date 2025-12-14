/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [2] [i_0] = ((!((min(7377023213024740933, 1)))));
                var_18 = (min(var_18, (((!(((((-249863504 ? 91 : 61065))) || 103)))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_19 = ((((min(1028300522, -6945987806544008211))) ? (1 > 1) : ((min(94, 56529)))));
        var_20 = ((923285123 ? (!59) : 18446744073709551615));
    }
    #pragma endscop
}
