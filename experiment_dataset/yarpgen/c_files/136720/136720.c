/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((!((((arr_1 [i_0] [i_0]) ? 576460752303423487 : ((((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])))))))));

        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            arr_5 [i_1] [9] = (arr_0 [i_0] [i_1]);
            var_13 = 0;
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    {
                        var_14 -= (+-1439494376);
                        var_15 = ((-(~0)));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 7;i_4 += 1)
    {
        arr_14 [3] = var_2;
        var_16 = (arr_1 [i_4] [i_4]);
        var_17 *= (((((((var_10 == (arr_0 [i_4] [i_4 + 1])))) == var_9)) ? 1439494376 : (((arr_10 [i_4] [i_4 - 1] [i_4] [i_4] [2] [i_4 + 2]) ? (arr_10 [3] [i_4 + 3] [i_4 + 3] [i_4] [i_4 - 1] [i_4 + 4]) : (arr_10 [i_4] [i_4 + 4] [i_4] [i_4 + 2] [i_4] [i_4])))));
        arr_15 [i_4] = (((var_4 ? (arr_4 [i_4 + 1]) : (arr_13 [i_4 + 1]))) & (((!-1439494376) ? var_5 : ((-(arr_12 [i_4]))))));
    }
    var_18 = 3;
    var_19 = (min(((((((var_11 + 2147483647) << (var_9 - 59)))) ? var_11 : (var_0 / var_4))), var_8));

    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        arr_18 [i_5] = (arr_17 [i_5]);
        arr_19 [i_5] = var_12;
        var_20 *= 1816173487;
        var_21 = (!18);
    }
    #pragma endscop
}
