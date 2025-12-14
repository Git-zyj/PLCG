/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_5;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = 833459846715362239;
                                var_13 += var_7;
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] = (+(max((arr_6 [i_0] [i_1]), (arr_6 [i_1] [i_2]))));
                    arr_15 [i_0] = (((1073741823 - 11) ? var_5 : 28));
                    var_14 *= (((!(arr_5 [i_0] [1] [i_0]))));
                    var_15 = (((!28320) ? 18446744073709551615 : ((18446744073709551615 >> (65535 - 65532)))));
                }
            }
        }
        var_16 *= (max((2969922097474824125 << 0), (arr_13 [i_0] [i_0] [11])));
        var_17 = ((-((((arr_0 [i_0]) < (arr_0 [i_0]))))));
        var_18 = (((((arr_1 [1] [i_0]) ? var_9 : (arr_1 [i_0] [19]))) / (arr_13 [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
