/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (min(var_0, (arr_6 [i_0])));
                var_12 = (arr_3 [i_1]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] [14] |= (arr_7 [i_2 + 1]);
        arr_10 [i_2] = (4294967295 % -20522);
        var_13 = ((-(arr_8 [i_2 - 1])));
        var_14 ^= (((arr_8 [i_2 - 1]) >= (arr_8 [i_2 + 1])));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_14 [i_3] = (arr_7 [i_3]);
        var_15 = (18795 * 974361645038769747);
    }
    #pragma endscop
}
