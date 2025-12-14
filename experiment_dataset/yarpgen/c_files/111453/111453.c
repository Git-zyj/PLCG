/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= max(((min(var_6, var_4))), var_17);
    var_19 = var_13;
    var_20 = 4689368923977128334;
    var_21 = (max(((((var_2 | 24720) != 24792))), (min(var_7, (max(var_8, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = var_4;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] = (min((arr_13 [i_0] [i_1] [i_2]), ((-var_16 / ((max(62, var_12)))))));
                            arr_15 [i_1] [9] &= max(((min(1651879722, 1518846851))), var_5);
                            arr_16 [i_0] [i_1] = (max((max(var_3, (1 % var_13))), var_10));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
