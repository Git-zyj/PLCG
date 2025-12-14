/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172677
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (min(var_19, ((((min(var_16, (arr_0 [i_0]))) ^ ((-6860699869867072348 * (((min((arr_0 [1]), var_10)))))))))));
        var_20 = (min((max((arr_1 [i_0] [i_0]), ((max(var_3, -6860699869867072350))))), (((-6860699869867072349 ? 6860699869867072351 : 31100)))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 = ((((((var_15 ? (arr_4 [19]) : var_8)) >= ((max(1, 100))))) ? (min(0, 6860699869867072337)) : ((((((arr_4 [i_1]) + 2147483647)) >> (((arr_2 [i_1]) + 1171063447)))))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 = ((((45 ? var_1 : -46)) * (((67 * 1) / (arr_6 [i_1] [i_1])))));
            var_23 = (min(var_23, (((((((var_17 == var_14) ? (arr_6 [i_1] [i_1]) : (max((arr_3 [17]), (arr_6 [18] [i_2])))))) + (min(45, 1485034124589945828)))))));
            var_24 = ((var_15 ? var_1 : ((~(((arr_5 [17] [i_2]) ? -7 : 0))))));
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            var_25 = (max(var_25, (((var_6 <= (arr_5 [i_3 - 3] [i_3 - 4]))))));
            var_26 *= (((arr_8 [i_3 + 1]) ? (arr_8 [i_3 - 2]) : (arr_8 [i_3 - 4])));
        }
    }
    var_27 = var_18;
    #pragma endscop
}
