/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_7 [i_1] = var_2;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 += (max((min((((~(arr_6 [i_1] [4] [i_1])))), (min((arr_4 [1]), (arr_3 [i_1]))))), (~var_5)));
                        arr_11 [i_0] [i_1] [i_2 + 1] [i_3] = ((min(51, 0)));
                        var_13 *= arr_2 [i_2 - 1] [i_3] [i_2 - 1];
                    }
                }
            }
        }
    }
    var_14 ^= min(var_0, ((~(0 & var_3))));
    var_15 = var_8;
    var_16 = var_6;
    var_17 += (((var_9 >= -var_9) != ((((var_0 ? var_8 : var_10))))));
    #pragma endscop
}
