/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (arr_0 [i_0]);
        var_14 = ((-6220743 ? ((var_12 ? var_3 : var_12)) : ((max(343779771, 6220743)))));
        var_15 = ((((8192 ? 4294967295 : 3670972536)) + ((8192 ? var_8 : var_3))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_16 = ((((((3583488343 ? 623994758 : 6220743)))) ? (max(var_12, ((((arr_5 [3]) ? 590639737 : var_2))))) : (((((((arr_4 [i_1 + 1] [i_1]) ? (arr_5 [i_1]) : 3670972536)) != (((var_9 ? -6220741 : var_11)))))))));
        var_17 = (min(var_17, ((((max(((6220743 ? var_7 : (-2147483647 - 1))), var_7)) != (arr_3 [i_1] [i_1]))))));
        var_18 = (((((var_7 ? (max(var_7, var_10)) : var_9))) ? ((-1560366957 ? var_6 : 3941937712)) : (((-(((arr_5 [i_1 + 1]) % var_4)))))));
        var_19 = (max(var_0, ((138537717 ? var_11 : var_3))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_20 = (max((max(var_12, (max((arr_4 [i_2] [i_2]), var_9)))), var_1));
                var_21 = (min(var_21, ((((((var_9 ? var_8 : var_12))) ? (((arr_7 [i_2]) ? 623994758 : var_1)) : 623994758)))));
            }
        }
    }
    var_22 = ((((min(var_0, var_7)))) ? var_5 : -var_12);
    #pragma endscop
}
