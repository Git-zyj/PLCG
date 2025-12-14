/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((max(var_11, (min(0, 9830029588301103000)))) >> ((((min(var_9, var_5)) > (((18 >> (var_16 - 19218)))))))));
    var_19 = (((((min(var_13, var_15)))) ? (max((~var_9), (var_14 ^ 255))) : (var_7 || var_4)));
    var_20 = ((!((min(var_12, var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_2 - 1] [i_3] [i_2 - 1] = (((arr_6 [i_2]) ? var_14 : (1405677157 << 0)));
                            arr_11 [i_1] [i_1 - 2] [i_2] [i_3] = ((!(arr_7 [i_0])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_21 -= ((-(max(var_8, ((min(255, 0)))))));
                            var_22 ^= var_17;
                            arr_19 [4] [i_1] [i_1] [i_1] [i_1] [i_1] = (arr_8 [i_4] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 3]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
