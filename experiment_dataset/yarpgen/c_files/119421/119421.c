/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 = (((arr_1 [i_0 - 1]) ? var_10 : (arr_2 [i_0 - 1] [i_0])));
        var_18 ^= (~3308687516993503265);
        arr_3 [i_0] [5] = min(8453816541253790495, (max((arr_0 [i_0 + 1]), ((20 ? (arr_1 [i_0]) : 9223372036854775807)))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    {
                        var_19 = ((-((~(arr_5 [i_1] [9])))));
                        var_20 *= ((max((arr_10 [i_4 - 1] [10] [i_4] [i_4 - 1] [i_4]), -3225035038703644835)));
                        var_21 ^= (min(3225035038703644835, 8453816541253790495));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    {
                        var_22 = (!3308687516993503265);
                        arr_20 [i_5] [i_5] [i_5] = ((~((((arr_16 [i_5] [i_6] [i_5] [i_5]) <= -var_6)))));
                        var_23 -= ((~(((max(4696661335297775634, -4696661335297775651))))));
                    }
                }
            }
        }
    }
    var_24 = (!var_6);
    var_25 = var_14;
    #pragma endscop
}
