/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 += 1748988782;
        var_18 = (min(var_18, (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_4 [17] = ((!((((arr_2 [i_1]) << ((((max(var_13, var_12))) - 218)))))));
        var_19 = (min(var_19, ((max((((min(var_8, (arr_2 [i_1]))))), ((((!(arr_3 [i_1]))) ? (((min(-27507, -83)))) : var_4)))))));
        var_20 = var_5;
        var_21 = (min((((max(var_13, var_4)))), (((var_2 - var_7) - var_8))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_22 = ((-(max(64658, -1766168229))));
        var_23 -= ((-((((-114 | -4880922501010970192) && ((max(32749, 1469728060))))))));
        var_24 = var_8;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_11 [i_3] [i_3] = ((~(((16 == (max(var_8, -1)))))));
                arr_12 [2] [10] [2] = (min((arr_8 [i_3]), (max(var_2, var_2))));
                arr_13 [i_3] [i_3] = (((0 | 81) >> ((((-(arr_7 [i_4]))) - 74368365338166400))));
                arr_14 [i_3] [i_4] = ((((-923098207610928581 | (arr_9 [i_3]))) & ((((arr_7 [i_3]) ? 56 : var_13)))));
                var_25 = (min(2267033203, -1549661308));
            }
        }
    }
    #pragma endscop
}
