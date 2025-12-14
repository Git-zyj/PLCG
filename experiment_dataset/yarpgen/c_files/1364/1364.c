/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_1, (((var_11 ? ((min(var_3, var_0))) : ((min(var_3, var_9))))))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            var_17 = max((arr_2 [9]), (min((arr_3 [i_1] [i_1 - 1]), -17516)));
            var_18 = (min(var_18, ((((arr_2 [i_0]) ? ((min((arr_1 [i_0] [i_1 - 1]), (arr_1 [i_0] [i_1 + 1])))) : (min((arr_0 [i_1 + 1]), (arr_1 [i_0] [i_0]))))))));
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_19 ^= (!124);
            var_20 = 17517;
            arr_7 [i_2] [i_2] [i_0] = (arr_3 [i_0] [i_2]);
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            var_21 &= (max(((min(0, (arr_10 [i_0] [i_0] [i_0])))), (min(58230, (arr_4 [i_0])))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    {
                        var_22 = (((((((arr_3 [i_0] [i_3]) | (arr_1 [i_0] [i_5]))) & ((min(3194186161, (arr_12 [i_0] [i_0] [i_0])))))) | (arr_3 [i_0] [i_4])));
                        var_23 |= (((((~(((arr_5 [i_0] [i_0]) ? (arr_8 [i_4]) : (arr_8 [i_0])))))) ? (min((arr_0 [i_0]), 10819782967483443847)) : (min((((!(arr_15 [i_0] [i_3] [11] [i_5] [i_5])))), (arr_0 [i_3])))));
                    }
                }
            }
            var_24 = (arr_12 [8] [8] [1]);
        }
        var_25 = (max(var_25, (arr_2 [i_0])));
    }
    var_26 = 2771334431;
    #pragma endscop
}
