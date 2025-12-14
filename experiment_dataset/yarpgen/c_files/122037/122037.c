/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_6));
    var_18 = ((((((var_11 >= ((min(var_2, -30986))))))) != ((var_6 ? 14336 : var_4))));

    for (int i_0 = 4; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_4 [2] = ((+(((((min((arr_3 [i_0]), var_15))) && ((max(var_2, (arr_2 [i_0])))))))));
        arr_5 [i_0] = ((var_1 + (((var_10 - (arr_0 [i_0] [6]))))));
        arr_6 [i_0] &= (arr_2 [i_0]);
    }
    for (int i_1 = 4; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_19 = (((((var_6 - (min(1807391503, 14336))))) ? (max((arr_0 [i_1] [i_1]), var_10)) : (!-3205883015208533369)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    var_20 = ((!(((-35 ? var_1 : (arr_9 [i_1 - 1] [i_2 + 2]))))));
                    var_21 = (((((min((max(var_0, var_6)), -12)))) < (min(var_15, (var_10 && var_11)))));
                    arr_14 [6] [6] [i_1] &= 1879237474777903758;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        arr_18 [i_4] = ((1 >> (14336 - 14321)));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 17;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_22 = (!var_14);
                    var_23 = (min(var_23, (((((var_2 ? var_2 : (arr_15 [i_5] [1]))) > var_2)))));
                }
            }
        }
    }
    var_24 &= -2952876137102239641;
    var_25 = (((!0) ? ((((-763384450658538367 != var_7) ? var_6 : (!var_11)))) : (max(4731281902217504996, 21510))));
    #pragma endscop
}
