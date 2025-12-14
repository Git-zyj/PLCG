/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (min(((384 ? var_11 : (399 != var_11))), 38));
                arr_7 [i_1] = (((~(-9223372036854775807 - 1))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_3] &= min(13779718451235784835, 8621);
                var_13 = ((4206956430887477713 % (-9223372036854775807 - 1)));
            }
        }
    }
    var_14 = (--8621);
    var_15 &= var_6;
    #pragma endscop
}
