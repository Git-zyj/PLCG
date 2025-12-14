/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    var_11 = (!var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (min((((-32767 - 1) ? (!-32759) : ((4294967295 ? -1460537621 : -1)))), (((32751 == (max((arr_5 [i_0] [i_1] [i_1]), (arr_4 [i_2]))))))));
                    arr_10 [i_2] [i_1] [i_0] [i_0] = (((((527609502 ? 761997225 : (arr_3 [i_2] [i_0] [i_0])))) ? ((max((34245 ^ 110598917), 141))) : (316201330 - -20215)));
                }
            }
        }
    }
    var_12 = var_3;

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_13 = ((-(arr_13 [i_3])));
            var_14 = 47;
        }
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            arr_18 [i_3] [i_3] = ((~(arr_14 [i_5] [i_5 - 2] [i_5 - 1])));
            var_15 = ((~(arr_16 [i_3])));
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            var_16 *= (arr_12 [i_6]);
            arr_23 [i_3] [i_3] = 796842182;
        }
        arr_24 [i_3] = (arr_12 [i_3]);
        var_17 = (101 / 13517568619315129830);
    }
    #pragma endscop
}
