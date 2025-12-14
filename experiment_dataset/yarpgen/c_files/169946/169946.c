/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1 + 2] [i_1 + 2] = (arr_0 [11]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_4] [i_3] [11] = 1;
                                var_10 = (min(var_10, ((min(((((min(1, 341755811534940810)) > (!var_1)))), (min(((min(var_8, 3643442098026230201))), ((1 ? 9712918262850153478 : 1)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_11 = ((((((!var_9) ? (((var_6 ? var_1 : var_4))) : (var_3 + var_2)))) ? var_7 : (min(((min(0, var_1))), (max(var_9, var_5))))));
    #pragma endscop
}
