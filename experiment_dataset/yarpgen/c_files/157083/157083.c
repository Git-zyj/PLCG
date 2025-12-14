/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 -= (565365751 && 32767);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 += ((2607339902 <= (arr_2 [i_2] [i_1])));
                    arr_7 [i_0] [18] [19] = 2147483647;
                    var_19 = ((var_3 * ((2156077560 ? (arr_6 [i_0] [i_0] [i_0]) : (arr_4 [i_1] [i_1])))));
                }
            }
        }
        var_20 = ((0 ? (arr_3 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));
        var_21 -= (arr_4 [i_0] [i_0]);
    }
    var_22 = (min(1, 11259));
    var_23 = min(var_16, var_16);
    var_24 = var_4;
    #pragma endscop
}
