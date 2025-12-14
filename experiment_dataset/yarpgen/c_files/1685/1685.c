/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_18 = (((((((var_6 != (arr_1 [i_0 - 1] [i_0 + 2]))) ? (arr_2 [i_0 - 2]) : (arr_2 [i_0])))) ? var_3 : (min((((arr_1 [i_0 + 1] [i_0]) / -820209958)), 86))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_10 [12] = 8185447031474719105;
                        arr_11 [i_1] [13] [20] [18] = -var_7;
                        var_19 = var_5;
                    }
                }
            }
        }
    }
    var_20 ^= (min(-var_6, -80));
    var_21 ^= ((var_13 == (!var_3)));
    var_22 = (max(var_22, ((((-16307 != 55191) != ((min((var_17 >= var_9), var_11))))))));
    var_23 ^= ((-(max(8191, 12047))));
    #pragma endscop
}
