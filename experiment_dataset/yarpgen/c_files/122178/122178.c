/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((-(var_8 - var_2)))), (((~var_9) % (max(1, 56440739))))));
    var_11 = max((!var_9), (min(var_4, (var_1 * 18))));
    var_12 += var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = 10948423781914917703;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_4] = (arr_5 [i_0]);
                                var_14 = (min(var_14, (((((min((arr_13 [13]), (((var_1 != (arr_1 [20]))))))) + ((max((var_8 == 1), (var_6 || var_0)))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
