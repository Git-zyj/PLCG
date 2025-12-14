/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((var_1 ? 0 : var_5))) ? (max(var_3, var_10)) : var_4))) ? ((var_10 ? var_6 : (-6596 < var_4))) : (!var_9)));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_12 = ((((max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1])))) ? ((var_6 ? (((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))) : (max(4294967295, var_1)))) : var_1));
        arr_3 [i_0] = var_6;

        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            var_13 = ((!((((((arr_4 [i_1] [i_1] [i_1]) && var_4)) ? ((((arr_4 [i_1] [i_1 - 1] [i_1]) ? var_4 : 4294967295))) : 14927983295968294701)))));
            var_14 = var_4;
        }
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_10 [i_2] = min((arr_7 [i_2]), (arr_1 [i_2]));
        var_15 = (min(var_15, 0));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    arr_16 [i_2] [i_3] [3] = (((arr_4 [i_3] [i_4 + 1] [i_4 - 1]) ? 76 : ((14531130265855115756 ? ((-71 ? var_5 : var_4)) : (var_3 && var_0)))));
                    var_16 = (((((-1568993577 ? 4294967295 : (arr_13 [i_2])))) <= (max((max(-1553112981, 14531130265855115756)), (((-(arr_5 [i_2]))))))));
                    var_17 = (+(((arr_9 [i_4]) ? var_1 : 1828103861)));
                    var_18 = (max(var_18, 102));
                    var_19 = (max(var_19, ((max(((((arr_14 [i_4 + 2]) ? 9 : (arr_14 [i_2])))), (min(var_0, (arr_14 [i_4 - 1]))))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_20 ^= ((2148645289 << (((((arr_0 [12] [i_5]) ? (arr_4 [i_5] [i_5] [i_5]) : (arr_4 [i_5] [i_5] [i_5]))) - 1633))));
        var_21 = (max(var_21, ((max(121, (((arr_0 [i_5] [i_5]) << (((arr_17 [i_5]) - 124)))))))));
    }
    var_22 = var_3;
    var_23 = ((-((var_6 ? var_6 : 174))));
    #pragma endscop
}
