/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_12 = ((((max((arr_0 [i_0 - 1]), (arr_1 [i_0 - 1])))) ? ((32 ? -3687030574447481260 : 1589)) : ((((var_5 && (arr_0 [i_0 + 2])))))));
        var_13 = (min(var_13, (((((((var_5 >= var_0) ^ var_5))) && ((((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 4]) : (arr_1 [i_0 + 3])))))))));
        var_14 = ((((~(arr_1 [i_0]))) == ((((((arr_1 [i_0]) < var_3))) * ((var_3 << (arr_1 [i_0 + 2])))))));
        arr_2 [i_0] = ((((((arr_0 [i_0]) | (arr_1 [i_0])))) - ((var_2 ? var_5 : var_2))));
        arr_3 [i_0] [i_0] = ((((((arr_1 [5]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) * (arr_0 [i_0]))));
    }
    var_15 = (min(var_15, var_6));

    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_16 = ((+(((var_3 + 2147483647) >> (var_0 - 847940568)))));
                        var_17 = (((arr_12 [i_1 + 1] [i_2 - 2] [i_3 + 2] [i_3 + 2]) - ((((arr_12 [i_1 + 1] [i_2 + 1] [i_3 + 4] [i_3 - 1]) - (arr_12 [i_1 + 1] [i_2 - 1] [i_3 + 2] [i_3 - 2]))))));
                    }
                }
            }
        }
        arr_15 [i_1] = (63947 & 1);
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 22;i_6 += 1)
        {
            {
                var_18 = ((((((((arr_0 [i_6]) & (arr_0 [i_5]))) << ((((var_9 ? var_3 : var_1)) - 1917))))) ^ var_8));
                arr_22 [i_5] = (((((arr_16 [i_5 - 1]) <= (arr_16 [i_5 + 1]))) || ((((arr_16 [i_5 - 1]) * (arr_16 [i_5 - 1]))))));
            }
        }
    }
    var_19 |= ((((((((51593 << (26 - 22)))) ? ((var_10 >> (var_3 - 1909))) : var_10))) ? (18446744073709551615 / 1609) : (((((var_7 ? var_0 : var_4))) / var_11))));
    #pragma endscop
}
