/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 ^= (((((-(6 != 6)))) ? (((((var_11 ? 0 : 58))) + 22)) : ((((var_3 || (((var_9 ? var_12 : var_6)))))))));
    var_15 = (((((-(-127 - 1)))) != var_1));
    var_16 = var_10;

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        var_17 = (i_0 % 2 == 0) ? (((((!((((arr_0 [i_0]) ? 62 : (arr_0 [i_0])))))) ? (((-(~17415)))) : (((arr_0 [i_0]) << (((-20 + 80) - 59))))))) : (((((!((((arr_0 [i_0]) ? 62 : (arr_0 [i_0])))))) ? (((-(~17415)))) : (((((arr_0 [i_0]) + 9223372036854775807)) << (((-20 + 80) - 59)))))));
        arr_2 [i_0] [i_0] = ((((var_12 ? (arr_1 [i_0] [3]) : (~122))) < ((-3404535276 ? ((((-5009 + 2147483647) >> (((-127 - 1) + 130))))) : (arr_0 [i_0])))));
        arr_3 [i_0] = ((!(((arr_1 [i_0] [i_0 + 2]) > (arr_1 [i_0] [i_0 + 3])))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 = -65535;
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((!((!(arr_14 [i_0] [i_0 + 1] [i_3] [i_0] [i_0] [i_4] [i_4 - 1])))))));
                            var_20 += (((arr_16 [i_3] [i_3] [i_3] [i_3] [i_3]) && (!-var_3)));
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_21 ^= (((((+(((arr_17 [i_5]) ? (arr_18 [i_5]) : (arr_17 [i_5])))))) < (-127 - 1)));
        arr_19 [i_5] [i_5] = ((~(((arr_17 [i_5]) ? (arr_17 [i_5]) : var_8))));
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        var_22 ^= (-17416 % 9738);

        for (int i_7 = 2; i_7 < 20;i_7 += 1) /* same iter space */
        {
            arr_24 [i_6] [i_7] = var_8;
            var_23 = (((var_8 << (-17 + 42))));
        }
        for (int i_8 = 2; i_8 < 20;i_8 += 1) /* same iter space */
        {
            var_24 = (arr_20 [i_8 - 2]);
            arr_28 [i_8] [i_6] = ((1 ? (-9223372036854775807 - 1) : 7993));
        }
        arr_29 [i_6] = (((~var_7) + var_1));
    }
    #pragma endscop
}
