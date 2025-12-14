/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] = var_5;
                    var_11 = (max(var_11, (((!((((((arr_5 [i_1]) ? 25 : -2174491639507780062)) + ((-26 ? (arr_7 [2] [i_1] [i_2]) : 1999923066))))))))));

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_12 = (arr_8 [i_0] [i_1 - 1] [i_0]);
                        arr_14 [5] [1] [i_0] [i_2] [i_2] [1] = (arr_5 [i_0]);
                    }
                    var_13 += (max(1999923066, (arr_2 [i_1] [6])));
                    var_14 = -var_3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            {
                arr_20 [6] [4] &= 2216370756;
                var_15 = ((((arr_16 [i_4]) % 18446744073709551595)));
                arr_21 [i_4] [i_5] = (min(var_3, -1));
            }
        }
    }
    #pragma endscop
}
