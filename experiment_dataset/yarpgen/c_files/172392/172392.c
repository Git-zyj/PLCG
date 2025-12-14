/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_11 *= ((((((arr_1 [i_0]) ? (((9 ? (arr_1 [i_0]) : var_0))) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : ((max((arr_1 [i_0]), var_6)))));
        var_12 = (min(var_12, (((var_8 ? (((((((~(arr_1 [i_0])))) && var_6)))) : (((arr_1 [i_0]) ? (min(12350135284910590655, (arr_0 [i_0]))) : (((-2147483647 - 1) ? (arr_1 [i_0]) : (arr_0 [i_0]))))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_2] [i_1] [i_0] [i_2] = 1;
                        arr_10 [i_2] = ((~((min((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_1] [i_2] [i_3]))))));
                        var_13 = (min((min((-8615299785307787994 + 536866816), (~8146))), ((((-1 + 2147483647) >> (var_5 - 29990))))));
                    }
                }
            }
            arr_11 [i_0] = (min((((!(arr_5 [i_1] [i_1] [i_1] [i_0])))), ((5828 ? (arr_5 [i_0] [i_0] [i_0] [i_1]) : (arr_0 [i_0])))));
        }
    }
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        arr_15 [i_4] = ((((min((arr_14 [i_4] [i_4 + 2]), ((((arr_12 [i_4] [i_4]) || 3415233364)))))) & (arr_13 [i_4] [i_4])));
        arr_16 [i_4] = (+-1);
        var_14 = (((((!4658220084727654821) ^ (((arr_12 [i_4] [i_4]) ? 0 : 1)))) & ((((arr_12 [i_4] [i_4]) || (arr_14 [i_4] [i_4]))))));
        var_15 = (min(var_15, (208 | 110363809)));
        var_16 = (min(var_16, ((((arr_13 [i_4 - 1] [i_4 + 1]) ? 16482 : var_2)))));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_17 = (min(var_17, (min(((max((arr_13 [i_5] [i_5]), (arr_13 [i_5] [i_5])))), (min(1, var_6))))));
        arr_19 [i_5] = (((arr_14 [i_5] [i_5]) ? ((max((arr_14 [i_5] [i_5]), (arr_14 [i_5] [i_5])))) : ((min(var_8, 32767)))));
    }
    var_18 = (min(var_18, var_10));
    var_19 = (min(var_19, var_1));
    #pragma endscop
}
