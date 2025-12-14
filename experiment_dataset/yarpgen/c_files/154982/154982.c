/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] = (((((((var_12 << (1910145622 - 1910145605))) && (arr_7 [9] [i_0] [i_2] [i_3]))))));
                                var_19 = (max(var_19, ((((((var_8 <= (((7573496527202036500 ? var_17 : var_11)))))) >= 1)))));
                            }
                        }
                    }
                }
                var_20 = (max((min((min(101, 1910145601)), (!var_18))), -var_8));
            }
        }
    }
    var_21 -= var_6;
    #pragma endscop
}
