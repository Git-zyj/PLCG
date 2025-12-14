/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_16 = (((arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) ? (arr_11 [i_4] [i_3] [i_2] [i_1] [i_0]) : var_7));
                            var_17 = (239 < -3948337298657677748);
                        }
                        var_18 -= (-127 - 1);
                        var_19 = (~95);
                        arr_14 [1] [i_0] [1] [i_0] = var_10;
                        var_20 = (5537 - (arr_10 [i_3] [i_0]));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        var_21 = arr_8 [i_5] [i_2];
                        var_22 = ((var_0 % (-2147483647 - 1)));
                        var_23 = 522574526;
                        var_24 = (((arr_2 [i_2] [2]) ? (arr_4 [i_2]) : var_3));
                    }
                    var_25 = (max(var_25, ((+((min((arr_3 [i_0] [i_1]), 155)))))));
                }
            }
        }
    }
    var_26 = (max(var_26, var_14));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            {
                arr_22 [13] [13] = ((-32759 ? -127 : 13628932029431149965));
                var_27 = 3772392756;
            }
        }
    }
    #pragma endscop
}
