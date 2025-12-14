/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-7059682309091015612 ? (min(32767, 4294967278) : (!-2911005814049514768))));
    var_20 = (max(var_20, 14351602529077638713));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = ((((max(0, (-2147483647 - 1)))) ? ((20142 ? var_15 : 254)) : -4294967287));
                var_22 = (((var_14 ? (arr_0 [i_1]) : 19)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_23 = (((max(20142, var_13))) ? (max(var_18, 1)) : (((var_15 ? var_10 : (arr_12 [i_0] [i_3 + 1] [i_0] [i_3 + 1] [i_3 + 1] [i_3])))));
                            var_24 = (max(var_24, ((((-((var_2 ? var_18 : var_8))))))));
                            var_25 = (~1);
                            arr_13 [i_3] [i_3] [i_2] = ((704588680 ? 14846195465939126467 : 1576767298));
                            var_26 = (~1168366617);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
