/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [6] = (min(((((3491865902 / var_6) ? var_1 : -3491865902))), (arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = (((-((3074364114 ? 1220603181 : var_12)))));
            var_13 = (arr_0 [i_0]);
            var_14 &= ((((min((arr_1 [i_0]), -32))) && (1220603190 & var_6)));
        }
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            arr_8 [i_0] [i_2] = ((((min((~60328), -29830))) ? ((((min(-711, var_3))) ? 91 : (min(var_8, (arr_0 [i_0]))))) : ((min(((60328 ? var_10 : 1)), (min((-32767 - 1), 239707976)))))));
            arr_9 [1] [i_2] [i_2] = ((((-(arr_3 [i_2 - 1] [2])))) ? -48 : var_3);
            /* LoopNest 3 */
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_15 = ((-((min((arr_7 [16] [i_0] [i_0]), (arr_12 [i_5 - 1] [i_2] [i_2] [i_4]))))));
                            var_16 &= 184;
                            var_17 = (min(((28388 ? (arr_4 [i_5 - 3] [i_2 + 1] [i_3 + 1]) : 7894)), -0));
                            var_18 = (min(var_18, (((min((min(-54854549, 2052773999)), 23225)) % -21132))));
                        }
                    }
                }
            }
            arr_16 [i_2] [i_2] = (1 / 75);
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_19 [i_0] = (min((min(((239707976 ? (arr_10 [i_0] [2] [i_6]) : -29)), 5)), ((((120 % 46) ? 7689 : 124)))));
            var_19 = (((((~(arr_3 [i_0] [i_0])))) ? (((arr_3 [i_6] [i_0]) ? (arr_3 [i_6] [i_0]) : 1220603190)) : (arr_3 [i_0] [i_6])));
            var_20 = ((((((arr_13 [i_6] [i_6] [i_6] [i_0] [i_0]) | (arr_13 [i_0] [i_0] [i_6] [i_0] [i_6])))) ? -2484772309 : (((14384 ? (arr_13 [i_0] [i_0] [i_0] [6] [i_6]) : (arr_13 [1] [i_6] [i_0] [i_0] [i_0]))))));
        }
    }
    var_21 = (min((3156163205 % 872779556), (((var_4 ? var_6 : ((min((-32767 - 1), (-32767 - 1)))))))));
    var_22 = var_11;
    #pragma endscop
}
