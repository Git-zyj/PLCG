/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_16 = (min(var_16, (((17771 ? (!1) : (((var_13 + 9223372036854775807) << (26 - 26))))))));
        var_17 = (min(var_17, 47));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_18 = ((((max((var_3 - var_3), var_9))) ? 47 : ((((min(219, var_4))) ? (arr_1 [i_1] [i_1]) : var_2))));
        var_19 = ((max(938789947, var_14)));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_20 = (max((max(((-32748 ? var_1 : 32748)), (231 ^ 31281))), ((max((arr_0 [i_2]), var_4)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                {
                    arr_14 [i_3] [i_3] = (arr_1 [i_3] [i_3]);
                    var_21 = (((max((((-6885684965928074657 != (arr_7 [i_4])))), 203))) ? var_6 : (((!-6027184227760438614) ? (!var_1) : (arr_1 [i_3] [i_3]))));
                    var_22 = (min(var_22, (((~((((max(1225049709, 52))) | ((var_13 ? var_8 : -27926)))))))));
                }
            }
        }
    }
    var_23 = var_4;
    var_24 = (min(var_24, (((var_1 ? ((min((max(861462801, var_11)), var_6))) : (max(6027184227760438599, (min(var_7, var_9)))))))));
    #pragma endscop
}
