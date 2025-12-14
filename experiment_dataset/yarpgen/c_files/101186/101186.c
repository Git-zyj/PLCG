/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((1 ? (~65519) : ((var_1 ? 1 : var_4)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = 0;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 23;i_3 += 1)
                {
                    {
                        var_14 ^= (arr_3 [i_3] [i_1]);
                        var_15 = (max(var_15, 17358585511821663730));
                        var_16 &= ((255 ? 17668305651313979799 : var_11));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_17 ^= min((((~((min(1, 102)))))), (((arr_8 [i_4 - 1] [i_4] [i_4 - 1] [i_4]) ? var_4 : (arr_11 [18] [18]))));
        var_18 = (((var_3 % (arr_8 [i_4 - 1] [i_4] [i_4 - 1] [i_4]))));
        var_19 = (min(var_19, (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1])));
        arr_13 [i_4] [i_4] = ((14651665048749939759 != ((((arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))));
        var_20 = -6666485779937552833;
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_18 [i_5] = ((((max((!156), (max(var_2, var_0))))) || (((10242007132918554673 ? 13397757477137166612 : 1)))));
        arr_19 [i_5] = (((((min(255, (arr_1 [i_5])))) ^ (!var_0))));
        var_21 = ((((6 ? 255 : 94)) <= (~102)));
    }
    #pragma endscop
}
