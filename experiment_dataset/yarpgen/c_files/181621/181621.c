/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0 + 1] = (((1318265778013995983 / -595515040) ? (-387393756 | 1318265778013995983) : var_10));
        var_19 = ((-(min((arr_0 [i_0 + 1] [i_0 + 1]), (arr_0 [i_0] [i_0])))));
        var_20 = (4095 * var_7);
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            {
                var_21 = (max((arr_6 [i_2 - 1] [i_2 - 2] [i_2 - 1]), ((max(var_2, var_17)))));
                var_22 *= ((((((arr_5 [i_2 - 1] [6]) ? var_12 : var_10))) ? ((((-1820270678 * 1) > 149))) : ((min((-502544919 != -387393757), (arr_3 [i_2 - 2]))))));
                var_23 = 149;
                var_24 = ((((37949 ? (max(54971, -387393757)) : (-2147483647 - 1))) & var_11));
            }
        }
    }
    var_25 = (max(var_3, (((((4149560107912306187 ? -387393757 : 9223372036854775807))) ? var_13 : var_7))));
    #pragma endscop
}
