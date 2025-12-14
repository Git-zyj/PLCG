/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (1 ? 32764 : 63169);
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] |= ((!((min(-8814875738541366748, var_11)))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = (max(52279, (min((arr_10 [i_3 + 1] [14] [i_3 - 2] [i_3 - 1]), (min(32755, 0))))));
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_0] = 3227554352;
                arr_14 [i_0] [i_1] = ((~(min(((((arr_4 [i_0] [8] [8]) & 153))), (~-2471921586962574622)))));
            }
        }
    }
    var_20 = var_11;
    #pragma endscop
}
