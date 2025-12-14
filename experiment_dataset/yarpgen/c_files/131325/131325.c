/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((17179344896 || (1 || 1))) ? (min((var_9 | var_10), var_5)) : ((min(var_8, 1))));
    var_12 = var_0;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_13 = ((43254 ? (((!((min(55266, 1)))))) : (arr_1 [i_0 + 1])));
                    var_14 = max((arr_3 [i_0 + 1] [i_0] [i_0]), (((~(arr_0 [i_0 + 1] [i_2 + 1])))));
                    var_15 = 4735977412347433791;
                    arr_7 [i_0] = (arr_0 [i_0 + 1] [i_0 + 1]);
                }
            }
        }
        var_16 = (min((max(var_8, 1)), (((var_1 ^ (max((arr_0 [4] [4]), (arr_2 [i_0] [i_0 + 1] [i_0 + 1]))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    {
                        var_17 = (~(arr_10 [i_4] [i_4] [i_4]));
                        var_18 = (max((max(((1 ? var_8 : (arr_12 [i_0]))), (min(var_4, (arr_14 [i_0] [i_0] [i_4] [i_4]))))), (((!(arr_8 [i_0 + 1] [i_4 + 2]))))));
                        var_19 = (max((arr_3 [i_4 + 1] [i_4] [i_0 + 1]), (~var_0)));
                    }
                }
            }
        }
    }
    var_20 = ((var_8 ? var_3 : ((~((var_8 ? var_3 : var_9))))));
    #pragma endscop
}
