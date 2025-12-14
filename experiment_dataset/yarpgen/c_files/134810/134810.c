/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        var_19 = min(var_17, (((arr_0 [i_0] [i_0]) - (((max(-20, -39)))))));
                        var_20 = (min(27428, (((max((arr_4 [i_3 + 1]), var_5)) % -120))));
                        var_21 = (~var_5);
                    }
                }
            }
            arr_12 [i_0] [i_0] = (((!1006632960) ? 2258116983280655979 : 29));
            arr_13 [i_0] = -6748670576667305322;
            var_22 = var_11;
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_23 = (~((((max(26853, var_3))) ? var_3 : (arr_10 [i_4] [i_4] [i_0] [i_0]))));
            var_24 = (max(var_24, -3799448863063786296));
            var_25 = ((((max(var_10, (arr_2 [i_0] [i_0])))) | (max((-127 - 1), var_17))));
            var_26 = var_15;
            var_27 *= (2551 ? 0 : 1067087537605016190);
        }
        var_28 = var_14;
        var_29 = ((min(var_11, var_16)) >> ((((1 ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) : (var_2 + 0))) + 42)));
        var_30 = 307785652;
    }
    var_31 = (max(var_31, ((((((8053 ? var_1 : var_7))) >= var_17)))));
    #pragma endscop
}
