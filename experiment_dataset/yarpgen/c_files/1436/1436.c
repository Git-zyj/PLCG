/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            var_14 = ((((arr_5 [i_0] [i_0] [i_0]) ? ((((!(arr_1 [i_0] [i_0]))))) : ((143 ? 0 : (arr_6 [i_0] [i_0] [i_0]))))));
            var_15 = (((((-((var_2 ? 253 : var_2))))) ? ((((max(65535, (arr_4 [i_1] [i_0]))) & ((~(arr_4 [i_1] [i_0])))))) : ((((max(154, 14063242169269704709))) ? (arr_4 [i_0] [i_1]) : (arr_1 [i_0] [i_0])))));
        }
        var_16 = 11313;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_17 = (~-104);
        var_18 = ((((((~(arr_7 [i_2] [i_2]))) ? var_1 : (arr_5 [i_2] [i_2] [i_2])))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_19 = (0 >= 0);
            arr_12 [i_2] [i_2] [i_3] = (((arr_9 [i_2] [i_3]) == (var_7 | var_2)));
            var_20 = (((arr_2 [i_2]) ? (4294967295 > 0) : (arr_2 [i_2])));
        }
    }
    var_21 = var_13;
    var_22 = var_7;
    var_23 = (min((((1267382722 * var_3) ? var_13 : (11313 & var_2))), (!var_2)));
    #pragma endscop
}
