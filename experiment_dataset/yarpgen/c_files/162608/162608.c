/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((min(var_13, (((14336 > ((14336 ? 14336 : 0))))))))));

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_16 = (((((var_9 ? ((~(arr_0 [i_0]))) : (arr_2 [i_0])))) && ((((1832940813 ? -689400899 : 1832940831))))));
        var_17 = (~14336);

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_18 = ((32018 ? (((13 ? 4081111294 : -14336))) : -14336));
            var_19 = ((-14336 ? ((-2147483647 ? ((47368 ? 35133 : (arr_5 [17]))) : (((64565 ? 1832940813 : -5765900))))) : (min(13064, 23162))));
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_20 = ((-((((arr_2 [i_2 + 1]) == (arr_2 [i_2 - 1]))))));
            arr_8 [2] [0] [i_2] = ((((10903 && 18446744073709551615) * -1832940813)));
            var_21 = ((-((2147483647 ? 82 : 14335))));
            var_22 = ((((((-23216 ? var_5 : 45696)))) ^ (((arr_0 [i_0 - 1]) ? 19850 : 13064))));
        }
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            var_23 = ((~((var_10 ? (min(-885867820, 1966080)) : 52454))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 19;i_5 += 1)
                {
                    {
                        var_24 = (arr_6 [5] [i_3] [i_3]);
                        arr_17 [i_0 + 2] [i_3 + 3] [i_3] [i_5] = ((!((0 || (1 >= 2609)))));
                    }
                }
            }
        }
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            var_25 = (((((((arr_16 [i_6] [i_6 - 3] [i_6]) ? 5026629987507853674 : -4412))) ? (min((-2147483647 - 1), var_0)) : 1048568)));
            arr_21 [i_6] = 2609;
        }
    }
    var_26 = var_6;
    #pragma endscop
}
