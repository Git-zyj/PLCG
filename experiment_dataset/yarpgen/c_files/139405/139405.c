/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((max(181, var_3)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 = (!var_1);
                            var_22 |= (arr_3 [3] [3] [i_2 + 1]);
                            arr_9 [i_0] [i_0] [18] [18] = (((var_16 ? (min((arr_4 [i_1] [i_2]), 4291408357616303399)) : (max(var_3, var_9)))));
                        }
                    }
                }
                var_23 = ((((((min(var_3, (arr_1 [i_0])))) - ((var_7 ? -9046594003037247014 : 0)))) & var_8));

                for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    arr_12 [i_0] = (min((((!(arr_4 [i_0 + 1] [i_0 + 1])))), 4));
                    arr_13 [i_0] = ((((((((var_15 ? var_9 : 57)) != (((-2 ? 1 : 144))))))) | (max((arr_5 [i_4] [i_0] [i_0] [i_0 + 1]), (min(var_11, var_5))))));
                }
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    var_24 = (31468 * -57);
                    var_25 = var_10;
                    var_26 = var_19;
                }
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    var_27 = (min(var_27, (((max(1, 2371665393825784150)) < (arr_1 [16])))));
                    var_28 = (((((var_19 + var_7) != 5775401929534696550)) ? (((((var_9 >> (var_3 - 1560408694)))))) : (((var_10 ^ var_12) ? (4 > 143552238122434560) : (arr_11 [i_6 + 1] [i_0] [i_0] [i_0])))));
                }
            }
        }
    }
    var_29 = var_5;
    var_30 = ((~(max(var_19, (2447675517636069666 > var_15)))));
    #pragma endscop
}
