/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 11158;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [1] [1]) ? (arr_0 [i_0]) : var_5));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 += (arr_8 [i_0] [2] [i_2]);
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((84 ? 90 : 1073741824));
                    arr_10 [i_0] [i_0] [0] = ((-(arr_6 [i_1])));
                    arr_11 [i_0] [10] = 83;
                    arr_12 [i_1 + 1] [5] = arr_8 [i_2] [i_1 + 1] [i_1 + 1];
                }
            }
        }
        var_17 *= -1811690274;
        var_18 = (-85 ? var_1 : -1073741833);
    }
    #pragma endscop
}
