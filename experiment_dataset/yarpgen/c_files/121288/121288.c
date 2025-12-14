/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (-9223372036854775807 - 1);
    var_19 ^= ((!((((!19) << 0)))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (min(var_20, ((((65528 != (arr_1 [i_0])))))));
        arr_2 [i_0] [9] = ((0 ? 3 : 0));
        var_21 = ((+(((arr_0 [i_0] [i_0]) * 127))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 7;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_16 [4] [4] = (((((max((arr_15 [i_1] [i_3 + 3] [i_3]), (arr_15 [6] [i_3 + 4] [i_4]))))) == (((((16368 ? (arr_1 [i_1]) : 121))) ? 72048797944905728 : 32767))));
                        var_22 += (((~18446744073709551613) < (((-((max((arr_13 [i_1] [2] [i_4]), -8))))))));
                        arr_17 [i_1] [i_2] [i_3 + 1] [i_2] = (arr_13 [i_1] [4] [i_4]);
                    }
                }
            }
        }
        var_23 = (max(var_23, ((((((((var_17 | (arr_9 [i_1] [i_1])))) ? (((((arr_6 [i_1]) < (arr_5 [i_1] [4]))))) : (max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [2]))))) != (arr_4 [i_1] [i_1]))))));
    }
    var_24 = var_3;
    #pragma endscop
}
