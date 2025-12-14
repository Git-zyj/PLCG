/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 -= var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1] = (max(1, 30101));
                            var_18 ^= (((arr_7 [i_2] [i_1] [i_3 - 1] [i_3]) ^ var_2));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(var_13, 2886261164));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 24;i_5 += 1)
        {
            {
                var_20 = (max((max(var_9, -24442674)), ((max(var_11, (arr_15 [i_5 - 1]))))));
                arr_17 [i_4] [i_5 + 1] [i_4] = (max(var_15, ((((arr_13 [i_4]) || ((((arr_12 [11] [i_5 - 1]) ^ 23))))))));
                var_21 = var_8;
                arr_18 [i_4] [i_4] = -24442676;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            {
                arr_23 [i_6 - 1] [i_7] = (((((max((arr_15 [i_6]), var_13)) + -var_13)) & (((1 ? -863838135 : 2886261164)))));
                arr_24 [i_7] [7] [1] = ((~18446744073709551615) ? ((~(min(1023, var_13)))) : ((((-6441289379512555371 && (!255))))));
            }
        }
    }
    #pragma endscop
}
