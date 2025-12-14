/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_14));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = 536805376;
                            arr_13 [3] = -18446744073172746221;
                        }
                    }
                }
                var_17 = (((((-(arr_2 [i_0] [i_1 + 1] [7])))) ? 14812767198430833570 : ((((!(arr_2 [i_0] [i_1 + 1] [i_1 + 1])))))));
                var_18 = 18446744073172746199;
            }
        }
    }

    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        var_19 &= ((((((arr_22 [i_7] [i_6] [15] [15]) != ((var_8 << (17179869168 - 17179869147)))))) << (((((min(8162318994399849469, (arr_16 [i_4] [i_5 - 2] [i_6]))) / var_10)) - 18439671611255927))));
                        arr_23 [i_7] = ((((arr_16 [i_6 - 2] [i_5] [i_5 + 1]) ? (arr_19 [i_6 - 3] [i_6 - 3]) : (arr_16 [i_6 + 1] [i_5] [i_5 - 1]))) != (((min((arr_22 [i_5 - 2] [0] [i_6 - 2] [0]), (arr_22 [i_5 + 1] [i_5 + 1] [i_6 - 2] [i_6]))))));
                    }
                }
            }
        }
        arr_24 [i_4] [i_4] = (~1);
    }
    #pragma endscop
}
