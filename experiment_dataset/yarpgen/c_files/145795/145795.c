/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_6 [i_1] [i_0] = min((arr_0 [3]), (((arr_4 [i_1]) ? (arr_4 [i_0]) : (arr_4 [i_1]))));
            arr_7 [i_1] = 1;
            var_15 = (max(var_11, ((((max((arr_2 [1] [i_1]), 27))) ? (!var_6) : (min(var_7, var_13))))));
            var_16 = (max(var_16, ((min(((~(var_5 ^ var_2))), ((max((((arr_1 [i_1]) ? var_13 : 1824194615)), 1))))))));
            arr_8 [i_1] [i_0] = ((min((arr_0 [i_1]), var_3)));
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_11 [i_2] [i_0] [i_0] = (min(((~(arr_1 [8]))), (max((arr_2 [i_2] [i_0]), (arr_2 [i_0] [i_2])))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_2] [i_2] [i_2] = ((!((min((arr_2 [i_2] [i_2]), (arr_2 [i_4] [i_0]))))));
                        arr_17 [i_0] [i_0] [i_2] [9] [i_4] = 1;
                    }
                }
            }
            arr_18 [i_0] [i_0] = (arr_0 [i_0]);
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] = (~(((arr_12 [i_0] [i_0] [i_5]) ? (~var_1) : ((1327601679 ? 952010855 : var_3)))));
            arr_22 [i_0] [i_5] = (min((max((((!(arr_20 [i_5] [i_5] [i_0])))), (arr_15 [i_0] [i_0] [i_0] [i_0]))), 2471052392869346302));
        }
        arr_23 [i_0] = ((((max((min((arr_13 [i_0]), (arr_3 [14] [i_0] [i_0]))), var_13))) ? (min(var_7, ((min(1, var_12))))) : ((min((arr_20 [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_17 = (((((arr_20 [i_0] [i_0] [i_0]) >> (((~var_7) + 4948007494522965694)))) > ((min(var_3, var_5)))));
    }
    var_18 = var_6;
    var_19 -= (max(((((((var_10 ? var_1 : 37952))) ? (~var_0) : var_2))), ((var_4 ? var_6 : ((min(952010876, 1)))))));
    #pragma endscop
}
