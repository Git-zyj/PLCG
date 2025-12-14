/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!var_2);

    for (int i_0 = 2; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_16 *= ((-127 != ((((((-127 - 1) ? (arr_1 [2] [2]) : var_5)) != 113)))));
        var_17 = (min(var_17, ((((-56 ? (min(var_13, var_12) : (arr_1 [4] [4]))))))));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_18 = (min(var_18, (((var_4 ? -95 : var_12)))));
        var_19 = 22346;
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_20 = 109;
                    var_21 = ((((min((arr_6 [i_2 + 4] [i_2]), (arr_6 [i_2 + 4] [i_4])))) ? ((((arr_6 [i_2 + 3] [i_2 - 1]) < (arr_6 [i_2 + 1] [i_2 + 1])))) : (((arr_6 [i_2 + 4] [i_4]) ? (arr_6 [i_2 + 3] [i_3]) : var_2))));

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        var_22 = (max(var_22, 31));
                        var_23 = ((min(1, 1843154661)) - 0);
                    }
                    var_24 = (min((4479576238637535638 != -123), 1435289951311723172));
                }
            }
        }
    }
    #pragma endscop
}
