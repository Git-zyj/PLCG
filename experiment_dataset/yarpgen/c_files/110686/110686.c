/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1 - 1] = ((-4378623266127907276 ? (255 != 27717) : (!252)));
                var_16 = ((var_4 ? ((min(227, (((arr_6 [i_0 + 2] [i_0 + 2]) ? var_10 : (arr_2 [i_1])))))) : (((((4378623266127907275 ? 5671949518567825171 : var_9))) ? (((var_5 + (arr_3 [i_0])))) : (min((arr_5 [i_0]), (arr_4 [i_0] [i_0] [i_1])))))));
            }
        }
    }
    var_17 -= ((var_7 ? 18446744073709551615 : ((max(var_11, var_12)))));

    for (int i_2 = 4; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_18 = var_6;
        var_19 = (~var_8);
    }
    for (int i_3 = 4; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_20 += ((((max(((var_10 | (arr_10 [i_3] [i_3]))), (((arr_10 [i_3] [i_3]) & (arr_11 [i_3])))))) ? (((arr_9 [i_3 - 2]) ? (((~(arr_9 [i_3 - 3])))) : (max(var_15, var_14)))) : (((((((arr_11 [i_3]) > var_1))) >> ((((var_7 ? (arr_8 [i_3]) : var_7)) - 18446744073709551498)))))));
        var_21 = (((((((var_15 ? (arr_11 [i_3 + 1]) : var_15))) ? (max(0, var_13)) : (((var_9 ? var_4 : var_9))))) <= -249));
    }
    var_22 = (min(9177381938639009206, 16));
    #pragma endscop
}
