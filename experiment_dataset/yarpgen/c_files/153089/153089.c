/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (((arr_2 [i_0]) ? 65535 : (((arr_2 [i_1 - 1]) & (-2147483647 - 1)))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] = 1;
                    var_13 -= ((var_9 != (max(1, 18446744073709551608))));
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_14 -= (((((72 >> (761430252 - 761430240)))) ? ((((min((arr_2 [i_1]), var_8))) >> (-2027010522 + 2027010532))) : (min((arr_9 [i_1 + 1] [i_1 + 1] [i_1 - 1]), ((-(arr_7 [i_3])))))));
                    arr_13 [i_3] [i_1] [i_0] = ((16818295636614571256 <= (!-26)));
                }
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        var_15 |= 22;
                        var_16 = (min(var_16, (((var_11 * (arr_12 [i_1] [i_1 - 2]))))));
                    }
                    var_17 = 9;
                    arr_18 [i_0] [i_0] = (-4489075280053275180 + -19);
                }
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    arr_21 [i_0] [i_1] [i_6] = ((!(((((min(4556, -6))) ? (arr_0 [i_1 - 2] [i_1 - 2]) : (-5 + 94925421))))));
                    arr_22 [i_6] [i_6] = ((var_2 << ((((min(var_11, (arr_15 [i_0] [i_1] [i_6] [i_6]))) == ((((arr_19 [i_0] [i_0] [i_1] [i_6]) + var_3))))))));
                }
                arr_23 [i_0] [i_1] = (max(-13417, (arr_8 [i_0] [i_1])));
            }
        }
    }
    var_18 -= ((var_5 != (var_4 / var_3)));
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                var_19 = ((370051982274289217 ? -2147483644 : 80344729));
                var_20 = 105;
                arr_30 [i_7] [i_8] = (arr_4 [i_7 + 1] [i_7 - 1]);
            }
        }
    }
    #pragma endscop
}
