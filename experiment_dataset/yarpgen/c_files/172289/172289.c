/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_15 = ((+(min((min((-9223372036854775807 - 1), var_6)), (arr_0 [i_0])))));
        var_16 += (min(((-((var_13 / (arr_0 [i_0]))))), -21));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_3] = ((((max((arr_3 [i_2 + 1]), 24))) % (~1)));
                    arr_12 [i_3] = (max(var_1, (((!(arr_6 [i_1]))))));
                }
            }
        }
        var_17 = (max((min(0, (!18752))), var_8));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = (max(1, 0));
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 25;i_7 += 1)
                {
                    {
                        arr_24 [i_4] [i_5] [i_6] [i_4] [i_4] = (min(((!(!var_13))), ((!((min((arr_16 [22] [i_7]), var_10)))))));
                        var_18 -= var_3;
                        var_19 = ((!(4294967295 & var_6)));
                    }
                }
            }
        }
    }
    var_20 += ((+(min((~var_0), var_6))));
    var_21 = var_7;
    var_22 = -1;
    #pragma endscop
}
