/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((var_1 * (((var_10 << (((~var_10) + 31)))))));
    var_14 = ((var_3 - (((((min(var_12, var_11))) || var_5)))));
    var_15 = var_2;
    var_16 += (max((((((95 ? 63488 : var_10))) ? 101 : ((max(var_5, var_9))))), (89 != 4294967268)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (min((min(-51, 95)), var_7));
                var_17 = (((max(((173 ? 166 : (arr_0 [i_0] [i_0]))), ((96 ? 255 : 164)))) - (((!((((arr_0 [i_0] [i_1]) >> (var_11 + 31368)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (((((arr_11 [i_0 - 1] [i_1] [i_2] [i_0 - 1] [i_4]) ? ((max((arr_5 [i_0] [i_0] [i_3] [i_4]), 209))) : (arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) / ((((89 % var_12) || 89)))));
                                var_19 = (max(4294967268, 0));
                                var_20 = (((-(max(89, 14)))));
                            }
                        }
                    }
                }
                var_21 = (max(var_21, ((max((max((arr_7 [i_0] [i_1] [1] [i_1]), var_1)), ((-((-(arr_12 [i_0 - 1] [i_0] [i_1] [i_1]))))))))));
                var_22 = -234881024;
            }
        }
    }
    #pragma endscop
}
