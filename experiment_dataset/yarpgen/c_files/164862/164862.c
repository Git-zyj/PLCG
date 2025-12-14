/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_15 &= (((((var_3 ? 5619 : var_11))) || (((-(arr_0 [i_0 - 2]))))));
        arr_2 [12] = var_12;
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_16 = (max(var_16, var_12));
                    arr_10 [i_1] [i_2 - 1] [i_3] = ((2941021399 ? var_0 : (((var_7 + 2147483647) >> ((var_11 >> (2941021401 - 2941021399)))))));
                    var_17 = (max(var_4, ((-2941021399 - (var_12 - 510556899)))));
                }
            }
        }
    }
    var_18 = (max(var_13, (((var_4 & 1) ? var_10 : var_11))));
    var_19 = ((((max((7777 ^ 0), ((min(var_11, 57759)))))) ? 57755 : (~1)));
    #pragma endscop
}
