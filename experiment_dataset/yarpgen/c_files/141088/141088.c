/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (((var_3 / 33781) ? (((((max(var_8, var_5))) ? var_9 : (3205308887 >= var_5)))) : ((-((178615802651009265 ? 0 : var_3))))));
                var_11 = (0 - 233);
                var_12 = (min(var_12, var_3));
            }
        }
    }
    var_13 = (((((max(65535, 0)) ? 120 : 1))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_14 = var_5;
                arr_12 [i_3] = ((((((((120 ? var_5 : 43793))) & (-9223372036854775807 - 1)))) ? ((0 ? (max(var_0, var_1)) : 2391083720)) : var_8));
                var_15 = (+-13);
                arr_13 [i_3] = ((var_6 ? ((var_8 / ((31752 ? (-32767 - 1) : 166)))) : (((19536 > (!var_2))))));
            }
        }
    }
    #pragma endscop
}
