/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14626
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((((1653527820912260645 << (3730389169 - 3730389168)))) ? 1792 : 127));
        arr_3 [i_0] = ((-127 ? 8157266222485960677 : 1647029682));
        var_16 = (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_17 = (min(var_17, ((((((-5280801510953554485 ? -8157266222485960677 : 1402872011))) ? (((-1464844238 ? -121 : 41091))) : 8157266222485960689)))));
        var_18 = (((max(((min(4226, -8157266222485960683))), ((-4349405416227014498 ? 19981 : var_5)))) > -1827539304094521415));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 23;i_3 += 1)
            {
                {
                    var_19 = ((-20 ? (max((((1 ? -569996530 : 42))), -8157266222485960679)) : (max(((min(var_12, (arr_11 [i_1] [i_2] [i_3] [i_3])))), 8157266222485960677))));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        var_20 = (~1827539304094521414);
                        var_21 = ((59605 && (arr_7 [i_1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
