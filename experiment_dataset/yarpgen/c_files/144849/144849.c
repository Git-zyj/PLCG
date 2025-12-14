/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = (((min(1, var_2)) == var_15));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_2] = max(var_2, (arr_4 [i_0] [i_1] [i_1 + 1] [i_2]));
                    arr_8 [3] [i_1] = (((((var_2 + (arr_2 [i_0] [i_0] [i_0])))) + (((0 + 1) - (var_14 - var_5)))));
                    var_20 = (max(var_20, (arr_3 [i_0] [i_0])));
                    var_21 = 18446744073709551615;
                }
            }
        }
    }
    #pragma endscop
}
