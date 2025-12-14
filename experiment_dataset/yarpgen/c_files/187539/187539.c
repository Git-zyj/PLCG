/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_3 ? (max(var_10, var_0)) : 2395807674))) ? 65 : var_5));
    var_16 = var_7;

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        var_17 = (min(var_17, 0));
        arr_4 [i_0] = (min((min(var_1, (var_2 / var_3))), ((min((arr_0 [i_0]), ((-(arr_3 [i_0 - 2]))))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = (45542 <= 1899159621);
            var_18 += ((((((((65533 ? 67778290 : 107))) - (max(-2783251453936208772, 3972))))) ? ((-((2395807663 ? (arr_7 [i_1] [i_1]) : (arr_5 [i_1]))))) : 2395807679));
            arr_9 [i_1] [i_0] = (((arr_6 [i_0 - 3] [i_1]) * ((-(((arr_3 [i_0]) ? (arr_3 [i_0]) : var_0))))));
        }
    }
    var_19 = (((max((56 != var_5), var_4))) ? (~1899159621) : (((((65527 ? 1 : 0)) == var_11))));
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {
                    var_20 = (max(var_20, ((min((arr_12 [i_2]), ((max(var_12, (arr_14 [2])))))))));
                    var_21 -= (min(-28737, (arr_14 [2])));
                    var_22 = (~(((min(2783251453936208771, 7)))));
                }
            }
        }
    }
    #pragma endscop
}
