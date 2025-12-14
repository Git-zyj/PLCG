/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = var_14;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, ((max(((!(arr_0 [i_0]))), ((!(arr_0 [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_20 = var_12;
                        var_21 ^= (((-2147483647 - 1) ? 2147483647 : -2147483626));
                        arr_10 [0] [i_1] [i_1] [i_1] = (((arr_2 [i_1] [i_3] [i_2]) > (~var_10)));
                        var_22 = (max(-2147483626, var_14));
                        arr_11 [i_2 - 1] [i_1] [i_2] [i_1] [i_1] [i_0] = (((((((-2147483647 - 1) && 2147483625)))) + (arr_1 [3])));
                    }
                }
            }
        }
        var_23 *= (!2147483647);
    }
    var_24 = ((((((var_8 ? 56626 : var_10))) && (var_0 + -2147483627))) ? var_12 : var_13);
    #pragma endscop
}
