/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = ((!(arr_3 [i_0 - 1] [i_0 + 1])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = (-(min(1, (arr_2 [i_0]))));
                                arr_12 [i_0 - 2] [i_1] [i_2] [i_0 + 1] [i_3 + 3] = ((((min(-43, 1))) <= 14884));
                            }
                        }
                    }
                }
                arr_13 [i_0] [i_1] [i_0 - 2] = ((-14874 ? 3074522337 : 6636298780993349433));
                var_17 = 224;
            }
        }
    }
    var_18 = ((!((min(var_5, (-9223372036854775807 - 1))))));
    var_19 = var_5;
    var_20 = ((-((-((6020 ? var_10 : var_7))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            {
                arr_21 [16] [i_6] [i_5] = (((min(5630, 26237))));
                var_21 = (min((((arr_17 [i_5] [i_6]) ^ 9)), -var_14));
            }
        }
    }
    #pragma endscop
}
