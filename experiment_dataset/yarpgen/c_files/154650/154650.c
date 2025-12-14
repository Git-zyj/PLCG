/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (0 ? var_17 : (((~var_0) ? ((2415979182667407272 ? 1 : -88)) : (arr_2 [i_1 - 1]))));
                var_19 ^= (min(-32, (arr_2 [i_0])));
                arr_6 [i_0] [10] = (((((~var_12) + 2147483647)) >> (((~511) + 530))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            {
                var_20 = ((var_15 ? ((~(arr_7 [i_3 - 1]))) : (((1464902935 || (arr_9 [i_3 - 2] [i_3 - 3]))))));
                var_21 = 12496830341277551698;
                arr_12 [i_3] = ((31 ? (((!var_8) * 54043195528445952)) : ((((!var_6) & 540)))));
                var_22 = (~-58);
                var_23 += 9221120237041090560;
            }
        }
    }
    #pragma endscop
}
