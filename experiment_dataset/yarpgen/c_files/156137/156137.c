/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_6;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0 + 1] = (163 == 10013);

        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            var_14 |= (min(((((arr_5 [i_0] [i_1 - 1] [i_1]) > var_9))), 41771));
            arr_7 [i_1 - 4] |= ((((((~32256) == (((arr_1 [i_0]) ? var_4 : var_8))))) < var_6));
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            arr_11 [i_0] [i_2] |= (((arr_5 [i_0 - 1] [i_2] [i_2]) ? ((min((arr_9 [i_0] [i_2]), (min(var_1, var_7))))) : (((((((arr_10 [i_0 + 1] [i_0 + 1] [i_2]) != 1446716220))) < var_5)))));
            var_15 = ((((arr_2 [i_2] [i_0]) != (arr_6 [i_2] [i_2] [i_2]))));
            var_16 = (min(var_16, ((min(1415319960, (min(2935468450688105073, (arr_0 [i_0] [i_2]))))))));
            var_17 = (max(var_17, (arr_8 [i_0 + 1])));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 22;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        var_18 &= (arr_5 [i_3] [i_4] [i_5 - 1]);
                        var_19 *= (((arr_16 [i_0] [i_0]) ? ((32256 ? 75 : (arr_5 [i_0] [i_4] [i_5 - 2]))) : (arr_16 [i_0] [i_3])));
                        var_20 *= (arr_12 [i_0] [i_3]);
                        var_21 -= var_0;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_22 = (min(var_22, var_9));
                        var_23 = var_0;
                        var_24 -= (((((var_6 ? (arr_19 [i_0] [i_3] [i_6] [i_0]) : (arr_20 [i_4])))) ? (((arr_20 [i_0]) ? var_6 : 203)) : var_9));
                        var_25 |= ((!(1 * 10013)));
                    }
                    var_26 *= (((min(var_2, (arr_9 [i_0 + 2] [i_0 + 2])))));
                    var_27 = ((((var_6 && (arr_3 [i_4 + 2]))) ? (min((arr_8 [i_4 + 1]), ((((var_4 + 2147483647) << 0))))) : (!var_3)));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_28 = (min(var_28, 52406));
        var_29 = (min(-2042326021, 0));
    }
    var_30 = 98;
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 1;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {
                var_31 -= 32;
                var_32 -= (((~((16257 & (arr_27 [i_8]))))));
            }
        }
    }
    #pragma endscop
}
