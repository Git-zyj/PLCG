/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_3, 3370006872));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 -= (((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (~90)));
        var_13 = (max(var_13, (((+((((arr_0 [i_0] [i_0]) < var_6))))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_14 = (max(((min((arr_3 [i_1 - 1]), (arr_3 [i_1 + 1])))), (((arr_3 [i_1 - 1]) + (arr_3 [i_1 - 1])))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_15 = ((((max(10649, 9223372036854775807) & 11168))));
                        var_16 = (min((((-(arr_11 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))), ((64 ? ((var_1 ? var_5 : 1005494968)) : ((max(var_5, var_0)))))));
                    }
                }
            }
        }
        arr_13 [i_1] = (21 > var_5);
        var_17 *= ((var_9 >> (12234624892582515577 - 2592625508)));
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        var_18 = var_0;
        var_19 = (min(127, ((((~24) && var_6)))));
        var_20 -= var_2;
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_21 ^= ((((((arr_11 [17] [2] [i_6] [i_6] [i_6] [i_6]) ? var_0 : (arr_18 [i_6])))) ? (((-11168 / 1) ? 65514 : ((226 ? (arr_16 [i_6] [13]) : var_7)))) : (arr_4 [i_6] [i_6])));
        var_22 = (-117 ? (arr_19 [i_6]) : (((50891 + 142) + var_6)));
        var_23 = (max(var_23, ((((arr_1 [i_6]) ^ ((((~(arr_14 [i_6]))) ^ var_5)))))));
    }
    var_24 = (min(var_24, ((((!var_4) * (min(var_8, 2060143619)))))));
    #pragma endscop
}
