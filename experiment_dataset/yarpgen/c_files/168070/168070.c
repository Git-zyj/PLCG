/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_0);

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((((min((arr_1 [i_0 + 1]), 9213487693106479655))) ? (-127 - 1) : -1)) + ((((arr_0 [i_0 + 3]) + var_6)))));
        arr_3 [i_0] = var_0;
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    {
                        var_15 = (var_12 && 123);
                        arr_13 [i_1] [i_2] [i_1] [i_4] = (((18 && 4294967280) ? 48078 : -118));
                        var_16 = ((((-(var_9 / var_7))) - (max(var_10, (((arr_0 [i_4]) ? -369999745 : var_9))))));
                    }
                }
            }
        }
        var_17 *= 5610;
        arr_14 [i_1] [i_1] = ((((var_6 << ((504 ? 0 : 122))))) ? (min(var_3, (arr_8 [i_1] [i_1] [i_1]))) : (((max((arr_5 [i_1 + 1]), (arr_5 [i_1 + 4]))))));
        var_18 = (arr_10 [i_1 + 3] [i_1]);
    }
    var_19 = ((((!(((var_0 >> (var_7 - 3348005978))))))));
    var_20 = var_1;
    #pragma endscop
}
