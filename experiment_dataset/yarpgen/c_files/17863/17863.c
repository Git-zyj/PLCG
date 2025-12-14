/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        var_19 = (((((var_12 <= 0) <= (-19537 > 2064384))) ? (((((150 % (arr_2 [i_0])))) ? var_15 : (-42 > 19537))) : (~var_2)));
                        var_20 -= ((((((arr_6 [i_2] [i_1] [i_0]) ? ((((arr_9 [i_1] [i_3]) == (-2147483647 - 1)))) : (~var_2)))) ? (arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]) : (arr_1 [i_1])));
                    }
                }
            }
        }
        var_21 = var_13;
        var_22 -= ((((((arr_5 [8] [8]) ? (arr_10 [i_0 + 1] [i_0] [8] [8] [i_0 + 1] [i_0 - 1]) : (arr_7 [4] [4])))) ? (((arr_5 [12] [12]) ? (arr_10 [i_0 - 1] [i_0] [0] [0] [i_0 + 1] [i_0 + 1]) : (arr_7 [2] [2]))) : (arr_0 [i_0 - 1])));
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    var_23 = (min(var_23, ((~(((19536 <= (arr_6 [i_4] [i_4 - 3] [i_4 - 2]))))))));

                    for (int i_6 = 2; i_6 < 12;i_6 += 1)
                    {
                        var_24 = (min(var_24, (~19530)));
                        var_25 = (((arr_7 [i_0] [i_0]) ^ 687148684));
                    }
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_26 = (((arr_1 [i_4]) > (arr_2 [i_0])));
                        arr_20 [i_0] [i_0] = ((((~((-687148685 ? (arr_19 [1] [i_0] [i_0] [1] [i_0 + 1] [i_0]) : (arr_2 [i_0])))))) ? 65535 : (((arr_7 [i_4 - 1] [i_0]) ^ (arr_7 [i_0 - 1] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        var_27 = (((12796216403803850052 % -62) > ((((var_15 < (arr_7 [i_0] [i_0])))))));
                        var_28 = (~1);
                    }
                }
            }
        }
    }
    var_29 = (min(var_29, -52));
    var_30 |= 1;
    var_31 = var_17;
    var_32 = (max(var_17, var_2));
    #pragma endscop
}
