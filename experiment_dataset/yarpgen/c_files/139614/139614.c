/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = (max((min(((-(arr_6 [i_0] [i_1 + 3] [i_2] [i_2]))), (var_8 == 255))), ((((~(arr_0 [i_1])))))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_11 [i_3] [i_1] = ((((((arr_1 [i_3]) ? ((255 - (arr_5 [i_0 - 1] [16] [i_2]))) : (~0)))) || (((var_1 ? (((max((arr_8 [i_0] [i_0] [i_0 - 1] [16] [i_3]), 0)))) : (max(255, (arr_0 [i_0]))))))));
                        arr_12 [i_3] [i_3] [1] [i_3] [i_3] = 197;
                    }
                }
            }
        }
    }
    var_11 = ((((max(var_1, var_6))) >= var_0));
    var_12 &= ((var_2 ? ((((0 >= 12) ^ ((var_6 ? var_3 : var_6))))) : (max((((var_1 ? var_3 : 1))), var_4))));
    var_13 = var_7;
    #pragma endscop
}
