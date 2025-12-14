/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((!(~45)))));
    var_12 = (min(var_12, (((-(~7073383363226456823))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [15] [i_1] [i_0] [i_3] = (((((~(~191)))) ? (!222) : (((((-22490 ? 17147059675313101673 : 222))) ? 222 : 34))));
                            arr_11 [i_0] [i_3] [i_0] [i_0] = 17147059675313101642;
                            var_13 = 41970;
                            arr_12 [i_1] [i_1] [i_0] [i_3 + 3] = (-32767 - 1);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                arr_22 [i_6] [i_0] [i_4] [i_4] [i_1] [i_0] [i_0] = -1229;
                                var_14 = 1;
                                var_15 = (min(var_15, ((((!4452353695850352015) ? (((!1798893718) ? 0 : 935219949)) : 12445)))));
                                var_16 = (min(var_16, 50));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = -24225;
    #pragma endscop
}
