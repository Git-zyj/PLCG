/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 - 1] [i_1 + 2] = 18;
                arr_7 [8] [i_0] [i_0] = (min(-1, 3636383331));
                arr_8 [i_0] [i_0] [i_1 + 1] = -1496905338;
            }
        }
    }
    var_12 = ((((((((18 ? -1496905338 : 1496905337))) ? ((var_10 ? var_5 : 0)) : (min(-1496905350, var_11))))) ? ((min(((min(254, -26489))), ((-1065835202 ? var_5 : -25))))) : (((((0 ? 0 : 1))) ? (((min(32, 6639)))) : ((1360391054141677334 ? var_3 : var_2))))));
    var_13 ^= var_8;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_14 -= ((451818804 ? ((var_3 ? 0 : var_5)) : (((((12207982192737416335 ? 45998 : 1))) ? ((min(11261, 11))) : 10880))));
                    var_15 = -15;
                }
            }
        }
    }
    #pragma endscop
}
