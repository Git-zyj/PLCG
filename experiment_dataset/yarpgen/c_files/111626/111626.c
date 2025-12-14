/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = -2765140598321311891;
    var_13 = -112;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_14 = var_3;
                    var_15 = (arr_5 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2]);
                    var_16 = -11889;
                }
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] [i_4] = (!var_1);

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_17 = (max(-11881, 67));
                            arr_16 [i_0] [i_0] [i_3] [i_0] = var_8;
                            var_18 = 805378874;
                            var_19 = (((~var_7) ? (min(var_10, (arr_13 [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))) : (((((arr_13 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 2] [i_3 + 1] [i_3 - 1]) && (arr_13 [i_3 + 1] [i_3 + 2] [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 2])))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_20 = -15;
                        arr_19 [i_0] [i_0] = ((!((((arr_18 [i_0] [i_1] [i_1] [12] [12]) ^ var_7)))));
                        arr_20 [i_0] [i_1] [i_3 - 1] = var_7;
                        var_21 = (((var_3 ? var_0 : (arr_12 [i_6] [i_6] [i_3] [i_1] [i_0]))));
                    }
                    var_22 = ((min(var_3, -11911)));
                }
                arr_21 [i_0] [i_0] [i_0] = -15;
            }
        }
    }
    #pragma endscop
}
