/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((min(((max(37, (arr_1 [i_0]))), (min(var_7, var_5))))));
        arr_3 [i_0] = ((!((min(10, var_1)))));
        var_20 = (~var_1);
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((((((var_1 ^ (arr_1 [i_1])))) ? (arr_0 [i_1] [i_1]) : (var_2 | var_17)))) ? (((~(min(-1, (arr_0 [i_1] [2])))))) : ((~(min((arr_5 [i_1]), (arr_6 [i_1] [7]))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 6;i_3 += 1)
            {
                {
                    var_21 = var_11;
                    var_22 = ((min((arr_5 [i_1]), ((1 * (arr_5 [3]))))) >= ((~((~(arr_8 [i_2] [7] [i_3 + 1]))))));
                }
            }
        }
    }
    var_23 ^= (max(((min(var_19, var_8))), var_18));
    var_24 = (~-0);
    #pragma endscop
}
