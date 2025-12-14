/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (57027 * 0);
    var_17 = -5049803759657328982;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = ((((min(-101, 181))) < ((((arr_0 [i_0 + 3]) != (arr_2 [i_0 + 1] [i_0 - 1]))))));
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] &= ((((~(0 & 0))) ^ var_12));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_3] [i_2] = ((15221 + ((((((arr_11 [i_1] [i_2] [i_2]) ? 109 : 18446744073709551608))) ? ((-15222 ? (arr_14 [i_4] [i_2] [i_3 - 1] [9] [i_2] [i_1]) : 127)) : (~var_13)))));
                        var_19 ^= ((~(((arr_5 [i_3 - 1] [i_2 + 1]) ? 127 : (24372 || 109)))));
                    }
                    arr_18 [i_1] [i_2] = (max((~var_4), ((((!2967437822) ? ((248 ? (arr_10 [i_1] [i_2] [i_1] [i_1]) : var_4)) : (!64))))));
                }
            }
        }
    }
    #pragma endscop
}
