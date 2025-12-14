/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((538738481 ? 23 : 23));
    var_12 = (max(((~((var_2 ? var_1 : 701296914)))), 701296916));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_13 = -var_8;
                    var_14 = (max(var_14, (!var_10)));
                    arr_6 [i_0] [i_1] [i_2 + 2] = (18446744073709551615 ? 3593670382 : -22333);
                    arr_7 [i_0] [i_0] [i_2 + 2] [i_0] = var_10;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_2 - 2] [i_3 + 2] [i_4] = (((var_1 / 2147483647) ? (((arr_5 [i_0] [i_4] [i_2 + 1] [i_3 + 1]) ? var_6 : 0)) : -98));
                                arr_16 [i_0] = var_6;
                            }
                        }
                    }
                }
                var_15 = 11944397911910285747;
            }
        }
    }
    #pragma endscop
}
