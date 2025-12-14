/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_10 = (((-(arr_2 [i_0] [i_0 - 1]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] [i_2] [i_1] [i_0] = arr_0 [i_1] [i_0];
                        var_11 = -5958113476804289842;
                        var_12 = (((arr_9 [i_3] [i_3] [i_2] [i_1] [i_0 - 1] [i_0]) == var_5));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                    {
                        var_13 -= ((min(13209487019983210868, 3)));
                        var_14 |= (!1);
                        var_15 = var_8;
                        var_16 = (-57735 + -3910527825386603037);
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            var_17 = ((~(arr_16 [i_0 + 4] [i_0] [i_0 + 4] [i_0 - 1] [i_5 - 1])));
                            var_18 ^= (-(arr_0 [i_6] [i_1]));
                            var_19 = (min(var_19, 221));
                            arr_18 [i_6] [i_5 + 1] = (((-(arr_1 [i_2]))));
                        }
                        var_20 = (max(var_20, 12345095838537913543));
                        var_21 = 7800;
                    }
                    arr_19 [i_0] [i_0] [i_1] [i_2] = ((((max((min(29, -1)), ((max(-29, (arr_4 [i_2] [i_1] [i_0 + 1]))))))) ? 128 : 895517990));
                    arr_20 [i_1] [i_1] [i_2] [i_2] = 128;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_22 = (max(var_22, (arr_23 [i_7] [i_7])));
        var_23 = (min(var_23, ((57735 ? 16177959527310729265 : (arr_23 [i_7] [16])))));
    }
    for (int i_8 = 2; i_8 < 10;i_8 += 1)
    {
        var_24 = (!103);
        arr_26 [i_8 - 1] = (max(((max(13650693712769543020, 4294959104))), (!120259084288)));
    }
    var_25 = (!-var_2);
    #pragma endscop
}
