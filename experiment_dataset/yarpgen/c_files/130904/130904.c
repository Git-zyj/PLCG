/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((((arr_3 [12] [12] [9]) ? ((var_2 ? 5454199768658965651 : (arr_5 [i_1] [i_1] [i_0]))) : (((max(var_11, (arr_3 [i_0] [8] [4]))))))))));
                var_14 = var_5;
                arr_6 [22] [i_1] [i_1] = ((!((max((min(213297199, 206)), (~1))))));
                var_15 = ((!(4081670087 / var_8)));
            }
        }
    }
    var_16 = var_12;
    var_17 = ((((-(min(var_5, var_4))))) ? ((min(var_10, 338772588))) : var_3);

    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 12;i_4 += 1)
            {
                {
                    var_18 = var_9;
                    var_19 = (min(var_19, var_6));
                    var_20 = ((((((!(var_1 / var_8))))) != (((~var_0) ? var_3 : var_9))));
                }
            }
        }
        var_21 = ((169 - (var_8 % 17508029320145164829)));
    }
    #pragma endscop
}
