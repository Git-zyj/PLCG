/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((min(8593820027014797208, -915581483401338106))) % ((-573159378 ? -2147483638 : 8609287823679431509)))), -var_5));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_15 = (arr_2 [i_0 + 2]);
        arr_3 [i_0 + 2] [i_0 + 1] |= (((arr_1 [i_0]) ? ((max(4294967269, (4294967276 != 6530760001325117841)))) : ((((min(var_5, (arr_1 [i_0 + 1])))) ? (arr_2 [i_0 + 2]) : (((arr_2 [i_0]) ? 8593820027014797213 : 4294967292))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_16 = (((((-29028 ? (arr_5 [i_1]) : (arr_5 [i_1])))) && ((min(var_2, (arr_5 [i_1]))))));
        var_17 -= (arr_4 [i_1]);
        var_18 = ((var_0 ? (arr_4 [i_1]) : ((min((min((arr_4 [i_1]), (arr_4 [i_1]))), (arr_4 [i_1]))))));
        var_19 = ((-((((arr_5 [i_1]) >= (arr_5 [i_1]))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_20 = ((((min(((-6530760001325117841 ? var_5 : (arr_4 [i_2]))), -5947064750775663059))) - (((arr_6 [i_2]) ? ((4294967280 ? var_12 : (arr_2 [i_2]))) : ((min(var_9, (arr_7 [i_2] [i_2]))))))));
        var_21 = ((((((arr_1 [i_2]) ? (arr_1 [i_2]) : var_8))) ? (((arr_2 [i_2]) / ((var_1 ? (arr_0 [i_2]) : (arr_2 [i_2]))))) : 0));
        var_22 = (arr_6 [i_2]);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {
                var_23 = ((min(var_5, ((var_4 ? (arr_14 [i_3] [i_3]) : var_9)))));
                var_24 = (min(1, (((var_6 < var_1) ? (max((arr_12 [i_3] [i_4] [i_3]), 6530760001325117850)) : ((((arr_10 [i_3]) ? (arr_9 [i_3]) : (arr_11 [i_3] [i_4]))))))));
                arr_16 [i_3] [i_4] [i_4] = (arr_15 [i_3]);

                /* vectorizable */
                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    arr_20 [i_3] [i_4] [i_4] &= ((((((arr_17 [i_3] [i_5]) ? 1 : (arr_9 [i_5])))) ? (((!(arr_8 [i_3])))) : -52027));
                    var_25 = (min(var_25, ((((arr_18 [i_5 - 1] [i_5 + 1] [i_5]) ? (arr_18 [i_5] [i_5 + 2] [i_5]) : (arr_18 [i_5] [i_5 + 2] [i_5]))))));
                }
            }
        }
    }
    var_26 = var_13;
    var_27 = ((-var_10 ? (min((((var_6 ? var_12 : var_6))), (min(18475, 0)))) : ((((((min(var_6, var_12))) || var_4))))));
    #pragma endscop
}
