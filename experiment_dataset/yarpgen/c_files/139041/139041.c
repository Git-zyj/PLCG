/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_17 -= (~2111207208);
        var_18 = 32757;
        arr_3 [i_0] [i_0] = (max((arr_0 [i_0 + 1] [i_0 - 2]), ((var_11 ? (((-53 ? 1 : var_2))) : (min(18446744073709551615, (arr_2 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 2] = ((-((1 ? (~-38) : (var_14 + 1)))));
                    var_19 |= var_7;
                    var_20 = (min(8502349578465634994, (6327988249616715919 - -var_6)));
                    var_21 = 1;
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_22 = (max((min((max(var_2, -7)), (arr_0 [i_3] [i_3 - 2]))), -61));
        var_23 ^= (arr_6 [i_3 + 1] [i_3] [i_3] [i_3 + 1]);
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_24 = (max(((((arr_10 [i_4] [i_4]) + (arr_11 [i_4 - 1])))), (-var_13 - 32767)));
        var_25 = (!121);
    }
    for (int i_5 = 3; i_5 < 21;i_5 += 1)
    {
        arr_20 [i_5] [i_5 + 2] = ((-(((arr_18 [i_5]) - ((12 ? (arr_18 [i_5 + 2]) : var_0))))));
        var_26 = ((((arr_19 [i_5 - 2] [i_5 + 3]) + (arr_18 [i_5 + 4]))));
        var_27 = (((((min(var_4, var_7)) ^ (((arr_19 [i_5] [i_5]) ? (arr_19 [i_5] [i_5]) : 9)))) * ((-(3840162155 - 9)))));
        var_28 *= (~(min(var_2, (min((arr_19 [i_5] [i_5]), (arr_19 [11] [i_5]))))));
    }
    var_29 = (max(var_1, (~1)));
    var_30 = (min(var_4, var_10));
    var_31 = ((((((var_1 + 2147483647) >> (((-32767 | var_5) - 4294941167))))) ? var_5 : var_6));
    #pragma endscop
}
