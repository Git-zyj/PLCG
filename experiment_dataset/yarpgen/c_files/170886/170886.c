/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 -= (max((((-1 < ((84 ? -61 : -217476330124070776))))), (~27560)));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    arr_6 [11] [i_1] [i_2] [16] = ((((~(arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) << (((!(arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1]))))));
                    var_12 -= (((arr_3 [i_0] [i_0] [i_2]) > (arr_5 [i_1] [i_2])));
                }
                arr_7 [i_1] = min(((12030386498027924780 ? (arr_2 [2] [2] [i_0 + 1]) : (arr_2 [i_0] [17] [i_0 + 1]))), (((arr_2 [i_1] [i_1] [i_0 - 1]) / (arr_2 [i_0 - 1] [i_1] [i_0 + 1]))));
            }
        }
    }
    var_13 = (((!(var_10 ^ var_7))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_14 &= (~255);
        var_15 = 1;
        var_16 = (((((~(arr_9 [i_3])))) ? (arr_8 [i_3]) : (arr_10 [i_3] [i_3])));
        var_17 -= (arr_8 [i_3]);
        var_18 = ((~(arr_11 [i_3] [i_3])));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_19 = ((((((min(229, 9187343239835811840))) ? 1471219147 : 18446744073709551615)) + 1));
        arr_14 [i_4] = ((-(max(5007739444880228794, 32747))));
    }
    #pragma endscop
}
