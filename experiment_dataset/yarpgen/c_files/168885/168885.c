/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_0 ? (0 ^ var_10) : (max(var_10, 4290979208930474984))))) && ((((var_13 >= 47997) ? var_7 : -111))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [8] [i_1] [i_1] = (18248110434615860970 & -var_15);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = var_11;
                                var_21 = (117 ? 4290979208930474984 : -1);
                            }
                        }
                    }
                    var_22 = (min((arr_14 [i_0] [i_0] [i_1] [i_1] [8]), ((((arr_0 [7] [i_1]) ? -183918057 : var_10)))));
                }
            }
        }
        var_23 = (min(var_23, ((min(0, (((arr_16 [i_0]) >> (((arr_13 [i_0] [i_0] [6] [i_0] [i_0] [i_0]) - 2033491408939141921)))))))));
    }
    var_24 = -0;
    var_25 = -var_7;
    var_26 = (var_15 / var_14);
    #pragma endscop
}
