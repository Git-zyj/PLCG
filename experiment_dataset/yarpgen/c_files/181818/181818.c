/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_15 = (((((((arr_0 [i_0]) || 1904133101)))) ^ ((var_12 ? (arr_1 [i_0]) : var_10))));
        arr_2 [i_0] [i_0] |= (55 % 1014272666);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_13 [i_3] [i_2] [4] [i_3] = (-743003851 ? ((((!(arr_1 [i_3]))))) : (min((max((arr_4 [i_1]), 1550983024)), (~2390834184))));
                        var_16 = (max(var_16, (((min(1609882503, var_5))))));
                    }
                }
            }
        }
        var_17 *= ((!((((~(arr_12 [i_1] [i_1] [0] [i_1])))))));
        var_18 *= var_11;
    }

    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_18 [i_5] |= 21;
        var_19 *= (((var_4 > 1) << ((((((59 ? var_12 : var_6)) % var_9)) - 63))));
        var_20 = (!var_14);
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_23 [i_6] = 2390834187;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    {
                        var_21 = (max(var_21, (arr_28 [i_8 - 3] [i_8 - 3] [i_8 - 4])));
                        arr_33 [i_6] [i_6] [1] [i_7] [1] [i_6] = max(1904133087, (92 && 1));
                    }
                }
            }
        }
        var_22 = (arr_16 [i_6]);
        var_23 = (max(var_23, (((!((((((arr_19 [i_6]) % 2390834194))) || (arr_22 [i_6]))))))));
    }
    #pragma endscop
}
