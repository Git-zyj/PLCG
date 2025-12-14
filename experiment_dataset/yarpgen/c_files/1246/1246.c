/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_15;
    var_20 = -2840086017040704616;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_21 = ((!((((((-110 ? 7 : 2840086017040704640))) ? (((!(arr_1 [i_0] [i_0])))) : (arr_1 [i_0] [i_0]))))));
        var_22 ^= 22426;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_23 = ((((((((109 ? 0 : (arr_4 [i_0] [i_1] [i_2])))) ? 1 : (!var_14)))) ? (arr_6 [i_1] [i_1]) : (((2840086017040704640 >> (((arr_3 [i_1] [i_1]) - 1126091802)))))));
                    var_24 = ((-(((!(!var_17))))));
                }
            }
        }
        var_25 = ((18446744073709551613 ? (!-8) : ((((arr_0 [i_0]) <= (arr_0 [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_26 = var_11;

        for (int i_4 = 1; i_4 < 22;i_4 += 1)
        {
            arr_12 [i_3] [i_3] [i_3] = (((((arr_11 [i_3]) ? (5 >> 1) : -6806840748199279512)) & ((((!(arr_11 [i_3])))))));
            var_27 = 43;
            var_28 = ((((2840086017040704616 != (arr_11 [i_4 - 1])))));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_29 += ((+((((arr_2 [i_3] [16] [i_3]) >= var_9)))));
            var_30 ^= (!-30706996);
        }
    }
    var_31 = var_13;
    #pragma endscop
}
