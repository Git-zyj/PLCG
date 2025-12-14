/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = var_0;

                /* vectorizable */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    var_21 *= 18063;
                    var_22 *= var_10;
                    var_23 = ((var_14 * (arr_0 [i_1 + 2])));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_24 -= (!2147483647);
                                var_25 = (((arr_10 [1] [1] [i_3]) ? (~32640) : (min(var_1, (arr_10 [i_0] [i_4] [i_3])))));
                            }
                        }
                    }
                }
                var_26 = ((!((min(((max((arr_14 [i_0] [i_1] [i_0] [i_0]), var_10))), (((arr_10 [i_0] [i_0] [i_0]) >> (((arr_2 [i_1]) - 18738)))))))));
            }
        }
    }
    var_27 = (var_13 * var_16);
    var_28 = (((((var_1 ? 2147483647 : ((min(var_13, var_11)))))) ? (((7 * var_15) ? ((min(190, var_12))) : ((max(var_8, 7))))) : ((((min(var_17, var_0)) > ((max(var_13, 65044548))))))));
    var_29 = (((min(var_15, ((511 ? var_14 : var_7)))) / (((var_10 || var_4) / var_15))));
    var_30 = (60692 + var_0);
    #pragma endscop
}
