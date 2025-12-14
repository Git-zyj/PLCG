/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184796
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_12 *= 3486268651;

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    arr_9 [i_0] = (((((max(5044, 2305843009213693951)) ? 3486268651 : (((arr_7 [i_0] [i_1] [i_1]) % 3486268652))))));
                    arr_10 [i_0] [i_0] [i_2] [13] = -1;
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_13 = (min(var_13, (!4294967295)));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_14 = (arr_7 [10] [i_1 + 1] [13]);
                        var_15 *= (!var_1);
                        var_16 += var_10;
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    arr_18 [i_0] [i_0] = 29305;

                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        var_17 &= 1;
                        var_18 |= (max((((~(arr_17 [i_0] [i_0 - 1] [i_1] [i_0])))), ((((min(36211, 29315))) ? ((-8166162360659240627 ? var_0 : var_4)) : -255))));
                        arr_21 [i_0] [i_0 - 2] [i_1] [i_5] [i_0] = 65535;
                        arr_22 [i_0] [i_1] [i_5] [i_0] = ((!((((arr_13 [5] [i_6] [5] [i_6 + 2] [i_0]) ? 36238 : 1)))));
                    }
                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 12;i_7 += 1)
                    {
                        arr_27 [12] [i_0] [i_5] [i_7] = var_6;
                        var_19 = 3486268651;
                        arr_28 [i_0] [i_5] [i_7] = var_9;
                    }
                }
                arr_29 [i_0] = -21938;
            }
        }
    }
    var_20 = var_4;
    var_21 = 1362;
    var_22 = (((((52281 ? var_7 : 829116806427207762))) ? var_8 : 18446744073709551615));
    var_23 = (~-21);
    #pragma endscop
}
