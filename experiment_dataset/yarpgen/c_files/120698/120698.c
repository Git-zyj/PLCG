/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (((min((arr_2 [i_1 + 1] [i_0 - 2]), -1942655943)) > (~-1942655934)));
                    var_16 = (max(var_16, (((~((((9689572078789340573 - 262143) < (arr_4 [i_2] [1])))))))));

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_17 |= (-1942655947 == 6786);
                        var_18 = ((((max(6786, 44912)))) - 2228174403489974902);
                        var_19 = (max((((arr_9 [i_0 - 4] [i_2]) | (arr_1 [i_0 - 4] [i_0 - 3]))), (max((arr_9 [i_0 - 1] [i_2]), (arr_1 [i_0 - 1] [1])))));
                        var_20 = (((262143 && (arr_2 [i_3 - 1] [i_0 - 2]))));
                    }
                    /* vectorizable */
                    for (int i_4 = 4; i_4 < 12;i_4 += 1)
                    {
                        var_21 = ((((6786 << (170 - 169))) & ((((arr_5 [i_2] [i_2] [i_2] [0]) <= 44905)))));
                        var_22 = -1942655928;

                        for (int i_5 = 2; i_5 < 15;i_5 += 1)
                        {
                            var_23 &= 262151;
                            var_24 = (-1804722595 == 18198211499982734178);
                            var_25 ^= (arr_3 [i_4]);
                        }
                        var_26 &= (arr_1 [i_4 + 2] [i_2]);
                    }
                    var_27 &= (((((arr_0 [i_0 + 1]) <= ((max((arr_3 [i_2]), (arr_13 [i_0] [i_1] [i_2] [i_0] [i_2])))))) || (0 >= -6618679339429824750)));
                }
            }
        }
    }
    var_28 |= var_2;
    #pragma endscop
}
