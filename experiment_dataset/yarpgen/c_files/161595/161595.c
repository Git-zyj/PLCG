/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161595
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = (~var_7);
    var_20 = (var_12 <= var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 6;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3] [i_4] &= 34804;
                                var_21 = var_1;
                                var_22 = ((-((((arr_3 [i_0]) >= 13489)))));
                            }
                        }
                    }
                }
                var_23 &= (((arr_7 [1] [i_0] [i_1] [i_1] [i_1] [i_1]) >> (((max(1325621983791252907, 1)) - 1325621983791252882))));
            }
        }
    }
    #pragma endscop
}
