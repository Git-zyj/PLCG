/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_17 = (max(var_17, ((((((var_15 ^ var_11) ? (2006 ^ var_1) : ((0 ? 105 : var_3)))) | (~148))))));
        var_18 = (min((((!(arr_2 [i_0])))), (((29696 >> (var_1 - 1238674522))))));
    }
    for (int i_1 = 3; i_1 < 8;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_14 [i_1] [i_1] [i_3] [i_3] [i_3] [i_3] = var_1;
                        var_19 = 148;
                        var_20 = ((105 ? 150 : 105));
                    }
                }
            }
        }
        var_21 = var_9;
        var_22 = 18628;
        var_23 ^= ((((max((arr_5 [i_1 - 2] [i_1] [i_1]), (arr_2 [i_1 + 1])))) && ((min(var_11, 13426701487147631527)))));
        var_24 *= ((-6703 ? var_15 : ((((!var_11) != ((var_16 ? var_0 : var_3)))))));
    }
    var_25 = ((((-622171889 + 5020042586561920089) ? (11332267077773521290 || 33990) : (min(var_13, var_13)))));
    var_26 = var_13;
    #pragma endscop
}
