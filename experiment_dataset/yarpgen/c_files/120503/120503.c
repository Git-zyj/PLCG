/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((((max(12444443973154531390, ((6002300100555020237 / (arr_0 [i_0] [i_0])))))) ? (((var_5 ? 12444443973154531390 : var_2))) : ((((12444443973154531379 ? (arr_5 [i_1]) : (arr_2 [i_1]))) / var_1))));

                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        arr_11 [i_1] = ((!((!(arr_4 [i_1] [i_1 - 1])))));
                        arr_12 [i_0] [i_3] |= 12444443973154531406;
                        arr_13 [i_3] [i_1] [i_1] [i_0] = (arr_3 [i_1]);
                        var_18 = (max(var_18, (((!(((1 ? ((-6054 ? var_0 : (arr_3 [i_2]))) : -var_17))))))));
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, ((((+-476877796) ? var_16 : ((var_1 ? -var_0 : var_9)))))));
    #pragma endscop
}
