/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133649
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (1337401579 && 27882);
        arr_3 [i_0] [12] = ((-21599 ? -var_10 : (arr_0 [i_0 + 3] [i_0 + 3])));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                {
                    var_18 |= (arr_5 [i_3]);
                    arr_13 [i_1 + 2] [i_1 + 2] = (~-13557);
                    var_19 *= ((!(((-(!var_17))))));

                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_16 [i_4] [12] [i_3] [i_2] [i_1] [i_1] = (((10114501569563252354 <= var_16) >= (min(-3277025520, (arr_0 [i_2] [i_2])))));
                        arr_17 [i_3 + 1] [0] = var_7;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            {
                var_20 = (((((43920 / 44482) ? (arr_20 [i_5] [17] [i_6 + 2]) : 1337401575)) + ((min((arr_20 [i_6 + 1] [i_6] [i_6 - 1]), 39044)))));
                arr_22 [10] = (((arr_18 [i_6]) <= (arr_18 [i_6 - 1])));
            }
        }
    }
    #pragma endscop
}
