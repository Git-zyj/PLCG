/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (~var_0);
    var_17 = ((((var_7 ? (var_12 + var_7) : var_13)) <= ((min((-2085857078 != var_3), (~50269))))));
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = 0;
                arr_4 [i_1] [i_0] = 18446744073709551615;
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_20 = (32767 * 9);
        var_21 = ((!((((arr_6 [i_2]) ? 65535 : (arr_6 [i_2]))))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_22 = ((!(65535 | -9234)));
                        arr_19 [i_3] [i_3 - 1] [i_3] [i_3] = (arr_7 [i_3 - 1]);
                        var_23 = (arr_11 [i_3] [i_4]);
                        var_24 = (((arr_14 [i_3] [i_3]) >> (-10 + 29)));
                    }
                    var_25 = var_5;
                }
            }
        }
        arr_20 [1] = 86;
        arr_21 [i_3] [i_3] &= ((-(arr_17 [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3] [i_3])));
    }
    #pragma endscop
}
