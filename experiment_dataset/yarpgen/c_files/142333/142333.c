/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_17 = ((+(max((arr_1 [i_0]), (min(23657, -1))))));
        arr_3 [i_0] = max((((max((arr_2 [i_0]), -17)) * -9)), (+-9));
        arr_4 [i_0] = (max(((~(min((arr_0 [i_0]), 146)))), (arr_2 [12])));
        var_18 = (min(var_18, (~1477330301)));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_19 += ((max((arr_6 [i_1 - 1]), (arr_6 [i_1 - 1]))));
        arr_8 [i_1 - 1] = 1;

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_11 [9] [i_1 - 1] = (max((!-2), (arr_0 [i_1 - 1])));
            var_20 = (min(var_20, (((~(~-1723111227))))));
            var_21 = (max((((arr_6 [i_1]) ? ((32231 ? 110 : 64526)) : (min(-1488257993, 1723111227)))), 1));
            var_22 = (min(var_22, (((((max((arr_0 [i_1 - 1]), (arr_0 [i_1 - 1])))) + (((arr_10 [i_1] [13]) ? ((852965262186654774 ? 852965262186654774 : -6)) : (arr_9 [i_2]))))))));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 0;i_5 += 1)
                {
                    {
                        var_23 = (((arr_7 [i_1] [i_4]) > ((((!(((49 ? 18446744073709551615 : 16913723575885572860)))))))));
                        var_24 = -1488258001;
                        var_25 = ((((min((arr_17 [i_1 - 1] [i_1 - 1] [i_5 + 1] [i_5]), (arr_17 [i_1] [i_1 - 1] [i_5 + 1] [i_5])))) || (((~(arr_19 [i_1] [7] [7] [i_1 - 1] [i_5] [i_1]))))));
                        var_26 = ((+((min((arr_5 [i_1 - 1]), (!-572778150))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
