/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((min(var_12, (var_15 / 3644486269))) >= ((((0 >= ((260601101 << (49152 - 49127)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    arr_8 [i_0 - 1] [i_0] [i_1] [3] = ((var_1 ? ((((1 ? (arr_2 [i_0]) : var_4)) - ((min((arr_4 [i_0] [i_0] [i_2]), 1))))) : (arr_4 [16] [i_0] [6])));
                    var_17 = (arr_3 [i_1]);
                    arr_9 [i_0] [i_0] = (((((var_1 % (arr_2 [i_0]))) % (arr_4 [i_0 + 1] [i_0] [9]))));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_18 = ((((((arr_5 [i_0] [i_1]) ? (min((arr_2 [i_0]), var_4)) : var_13))) ? var_9 : (0 / -1)));
                    arr_13 [i_0] [i_1] [i_0] [i_3] = ((((min(var_8, 3965634237))) & (((2151 != 1) ? ((min((arr_0 [5]), (arr_6 [i_0])))) : 17645547864070771628))));
                }
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    var_19 = ((var_12 ? (((1539398435 - 1) ? (var_5 - 85) : (6583685978325213076 - 3644486284))) : (((29669 - (min(1, 0)))))));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        arr_18 [i_0] [i_4] [i_1] [i_0] = ((511 != ((~(var_14 ^ var_5)))));
                        arr_19 [i_0] [i_1] [i_0] [i_5] = (min((max(((102326996 ? var_6 : (arr_7 [i_0]))), (-113 < 1))), (1 % 27)));
                        var_20 = (min(var_20, (((((~(arr_2 [i_1])))) << (((((((var_12 ? (arr_6 [i_1]) : -1539398436))) ? ((1536801050 ? (arr_17 [i_1] [i_4] [i_1] [i_1]) : (arr_10 [i_1] [i_4] [7]))) : (arr_10 [i_0] [i_1] [i_4 + 2]))) - 2108768811))))));
                        var_21 = (((((var_0 / (((arr_0 [i_1]) * (arr_2 [i_0])))))) ? (((~(max(-410230532, 2147483637))))) : ((55632 ? 1476999964 : 0))));
                    }
                    arr_20 [i_0] = (min(((1531362823 ? var_0 : (-127 - 1))), var_5));
                    arr_21 [i_0] [i_1] = (!1456985011);
                    var_22 = var_2;
                }
                arr_22 [i_0] = (((max(var_3, var_1))));
            }
        }
    }
    var_23 = (((((var_3 ? ((-1690368731 ? var_12 : 47268741)) : (max(3746785430, 2002569438))))) ? (((min(var_6, var_4)) * (238 <= 235))) : ((max((max(-1808795270, 4095)), (~1456985024))))));
    var_24 = 60484;
    #pragma endscop
}
