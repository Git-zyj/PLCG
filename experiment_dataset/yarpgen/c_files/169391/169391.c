/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169391
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((max(var_18, var_12))) != var_2)))));
    var_20 = ((var_2 ? (((((var_11 ? -85 : 1790483959))))) : ((max(23604, var_12)))));
    var_21 = (((((((max(var_6, -19))) ? (var_4 < 13725) : (max(var_14, var_12))))) % ((((max(5501, (-2147483647 - 1)))) ? ((var_4 ? var_15 : var_9)) : (((var_17 ? var_10 : var_17)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_22 = (min(var_22, (~52019)));
            var_23 += (var_0 == 60024);
        }
        var_24 ^= (((arr_0 [i_0]) & var_1));
        var_25 += ((((((arr_2 [9]) && var_2))) != (!var_6)));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_6 [i_2] [i_2] = ((-(((!(((769535225 ? var_10 : var_14))))))));
        var_26 += (min(((~(arr_5 [6] [i_2]))), (max(var_17, var_2))));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_10 [i_3] = ((-((var_16 ? 1 : 2147483647))));
        var_27 = (min(var_27, ((+((0 ? (arr_1 [i_3]) : (arr_4 [7])))))));
    }
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_18 [12] [i_4] = (9223372036854775807 ? 17709 : 769479319);
            var_28 = ((((((23604 ? -7632661822229086959 : 70392053))) ? ((min(47827, var_9))) : (((arr_11 [i_4]) ? var_1 : 1825416824)))));
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 14;i_8 += 1)
                {
                    {
                        arr_26 [i_4] [i_6] [i_7] [i_4] = 105;
                        var_29 = (max(var_29, ((max((max(((var_16 ? 67 : var_7)), ((min(var_2, var_4))))), ((((2084568535 ? -9223372036854775807 : 1299964737)) / var_3)))))));
                        var_30 ^= (max((!-48), 103));
                    }
                }
            }
        }
    }
    #pragma endscop
}
