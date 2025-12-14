/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_15 = (1 * 1);
                arr_7 [i_0] = 54921;
            }
        }
    }
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    var_17 = (arr_11 [i_2] [7] [7]);
                    var_18 = (((var_2 + 2147483647) << (54921 - 54921)));
                    var_19 = (arr_11 [i_2] [14] [i_4]);
                    var_20 += (((var_10 != 1) << (((((arr_12 [4] [20] [i_4]) ^ (arr_1 [0]))) + 126))));
                    var_21 -= var_4;
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    arr_18 [i_2] [i_3] [i_3] = 18446744073709551615;
                    var_22 -= (!((1 == (arr_4 [i_2] [i_2] [8]))));
                }
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    arr_21 [i_2] [i_2] = (((arr_6 [i_6]) == (((max(var_12, var_13))))));
                    var_23 = var_5;
                }
                arr_22 [i_2] [i_2] = ((+(max((arr_15 [i_2] [i_3] [i_2]), (arr_17 [i_3] [i_2] [i_2])))));
                var_24 = (max((arr_20 [i_2] [i_2] [i_2] [i_3]), var_7));
            }
        }
    }
    var_25 = (var_0 ^ var_6);
    #pragma endscop
}
