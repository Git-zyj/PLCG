/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (max(var_15, 72));
                var_16 = (max(var_16, ((((32767 || var_1) ? -4824998625586480452 : (arr_3 [i_0 + 1] [i_0 + 1] [5]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            {
                arr_11 [i_3] = ((~(arr_7 [i_2 + 2])));
                var_17 = (((~var_4) ? (max((arr_9 [i_2 + 3]), var_4)) : var_10));
                arr_12 [i_2] = 240;
                var_18 = -32767;
            }
        }
    }
    var_19 = var_8;
    var_20 ^= var_0;
    #pragma endscop
}
