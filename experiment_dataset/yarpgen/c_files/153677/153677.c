/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (((((((!var_12) % 1))) > (min(-var_12, var_14)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 -= (((((max((arr_0 [i_0] [i_0]), 78))) ? ((max(1, (arr_1 [i_0])))) : (arr_1 [i_0]))));
        var_19 = (((arr_0 [i_0] [i_0]) || ((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : var_7)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [1] = var_2;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 19;i_3 += 1)
            {
                {
                    var_20 ^= 16870309413240360278;
                    arr_12 [i_1] [i_2] [i_1] [i_3] = ((~177) <= var_8);
                    var_21 = 11077537314547872129;
                }
            }
        }
        var_22 = (max(1, var_7));
        var_23 = (arr_7 [i_1] [i_1] [i_1]);
    }
    #pragma endscop
}
