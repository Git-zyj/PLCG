/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((!(arr_5 [i_0] [i_1] [i_1])));
                var_15 = ((!((((((-10 ? 1 : 1))) & (~4294967295))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_16 = (((((((!(arr_7 [i_1] [i_1] [i_1]))) ? 1 : (arr_1 [i_0] [i_1])))) ? ((2953623818 | (max(2147481600, 1)))) : ((((~31217) ? var_5 : (arr_2 [i_0]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_4] = ((((0 ? ((1734601105 ? var_9 : var_11)) : (arr_12 [i_0] [i_0] [i_4 + 2] [i_4] [i_4]))) + var_12));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_3] = (((min(((var_10 ? var_0 : 1)), (~-27))) & ((((!(((-884595334627828385 & (arr_12 [i_0] [i_1] [i_2] [i_3] [i_4]))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = -27;
    #pragma endscop
}
