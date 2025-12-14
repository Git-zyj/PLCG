/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_18 = var_5;
        arr_2 [i_0] = ((2147483647 ? ((-(var_11 < 3))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : 3))));
        var_19 = -94;
        var_20 = ((253 == (((((-4960 <= (arr_0 [i_0])))) / var_15))));
        var_21 = (max(((min((arr_0 [i_0]), (arr_0 [i_0])))), (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_22 = ((((((arr_1 [i_1]) ? (!var_7) : ((~(arr_1 [i_1])))))) + (((arr_3 [i_1] [i_1]) ? 15104094975071554410 : (arr_3 [i_1] [i_1])))));
        arr_6 [i_1] [i_1] = 1;
        var_23 -= ((((((arr_0 [i_1]) != (arr_4 [i_1])))) == var_4));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    var_24 *= (min(-3, (((((239 ? (arr_3 [i_1] [i_2]) : -9223372036854775800)) != (arr_1 [i_3 - 1]))))));
                    arr_12 [i_1] [i_2] [i_3] [i_3] = var_13;
                }
            }
        }
        arr_13 [i_1] = (arr_3 [i_1] [i_1]);
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_25 = ((~46402) * (((((1 ? 1 : (arr_14 [i_4]))) < ((((arr_16 [i_4] [i_4]) < 23)))))));
        var_26 = (((((min((var_2 - 22888), (3342649098637997206 != 27990))) + 2147483647)) << (((min((arr_15 [i_4]), (-23 < 6))) - 1))));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_27 = ((1 && (28 != 18446744073709551615)));
        var_28 = 0;
        var_29 = (115 && 8784189023789478156);
        arr_20 [i_5] = ((((21 ? 37 : var_6)) << (((49 || (arr_11 [i_5] [i_5]))))));
    }
    var_30 = (~(((var_17 != ((1 ? 8416520918878447409 : 1))))));
    #pragma endscop
}
