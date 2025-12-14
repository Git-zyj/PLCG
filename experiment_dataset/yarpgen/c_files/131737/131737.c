/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 2] = (((((arr_2 [i_1 - 1]) % (max((arr_4 [i_1] [i_0]), 1)))) - (var_13 % var_17)));
                arr_6 [i_0] = (arr_4 [i_0] [i_0]);
                var_20 = (max(var_20, -21));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_21 = (-9223372036854775807 - 1);
                                var_22 = ((!(((255 ? 0 : (((!(arr_4 [i_1 - 1] [i_4])))))))));
                                var_23 *= ((((max((arr_8 [i_1 + 1] [i_3 - 2]), (arr_8 [i_1 + 1] [i_3 - 2])))) ^ ((((0 ? -1862076133 : 60))))));
                                var_24 -= (arr_8 [i_3] [i_1 + 2]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_2;
    #pragma endscop
}
