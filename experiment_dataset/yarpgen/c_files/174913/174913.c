/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174913
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-0 % (((((1 ? var_8 : var_12))) ? var_8 : var_1))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (((min(((var_2 ? var_1 : var_8)), 1)) * (((1 > 14078) & (arr_3 [11] [i_0])))));
        var_16 = (-(var_6 + 1));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_17 = var_2;
        var_18 = (min(var_18, 0));
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_19 = (arr_6 [i_2]);

        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            var_20 = var_2;
            var_21 = ((1 ? (arr_7 [i_2] [i_2]) : 43));
            var_22 = 212;
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_23 = 1;
            var_24 = var_0;
            var_25 = 13145;
            var_26 = var_12;
            var_27 = (arr_8 [i_2 - 1]);
        }
    }
    for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_28 -= var_8;
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_29 = var_3;
                                var_30 = (((arr_17 [17]) * ((((((126 >> (34593 - 34573)))) ? -49 : 1)))));
                            }
                        }
                    }
                    var_31 = (((((arr_17 [i_5]) != var_6)) ? ((((!var_8) != var_6))) : 1));
                }
            }
        }
        var_32 = (min(var_32, (((+(min((arr_19 [14]), (arr_19 [12]))))))));
    }
    #pragma endscop
}
