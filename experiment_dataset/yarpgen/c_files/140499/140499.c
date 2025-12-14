/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [1]);
        var_10 = var_5;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_11 += 89;

            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_12 = (min(var_12, 2295835499996638312));

                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_11 [i_2] = (min((min(((2915627064 ? 0 : 1780891307)), var_9)), ((((((arr_3 [i_1] [i_3]) ? (arr_3 [i_0] [i_0]) : (arr_9 [i_0] [i_1] [3] [i_3] [4])))) ? ((max(1998560758, (arr_0 [i_0])))) : (min(var_9, 2514076000))))));
                    var_13 ^= -8444646209919983544;
                    arr_12 [i_0] [i_2] [i_2] = var_6;
                    var_14 = var_3;
                }
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_21 [i_5] [i_1] [i_4] [i_5] [i_6] [i_1] = ((-1590 || (arr_4 [i_1] [i_5])));
                            var_15 = (min(var_15, (!18446744073709551615)));
                            var_16 -= ((arr_19 [i_0] [i_1] [i_0] [i_0] [8]) << (((arr_13 [i_0] [i_1] [i_0]) - 19986)));
                        }
                    }
                }
                var_17 = var_3;
                var_18 = (~var_9);
            }
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                var_19 = 71;
                arr_26 [4] = ((max(1786099182, ((8444646209919983546 ? 1780891307 : (arr_20 [8] [i_7] [i_7] [i_0] [i_7]))))));
            }
        }
        arr_27 [9] = -11289;
    }
    var_20 = (max(var_8, (min(var_5, ((min(1741017174, 177)))))));
    #pragma endscop
}
