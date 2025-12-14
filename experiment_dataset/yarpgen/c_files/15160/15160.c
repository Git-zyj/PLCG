/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (arr_2 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] &= (max(var_5, 78));
                                var_16 = (((((((-6709567297923719494 ? 32976 : 65524)) * (arr_1 [i_1 + 1])))) ? (min(((~(arr_7 [i_3] [i_3] [i_2] [i_1] [i_3]))), (((arr_6 [i_3]) + var_6)))) : (arr_3 [i_0] [i_4])));
                            }
                        }
                    }
                }
                arr_12 [i_0] = (((min((((2047 ? -2057 : var_11))), ((var_3 ? var_10 : var_0)))) << (((min(var_13, var_9))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            {
                var_17 = (min(var_17, (((3469948886338245371 ? 49 : -5)))));
                var_18 = (max(var_18, (((((((max(-2047, 16553922)) * ((-16553937 / (arr_8 [i_5] [i_6] [i_5] [i_5 - 1] [i_6])))))) * (arr_5 [i_6] [i_5 - 1] [i_5 - 1]))))));
            }
        }
    }
    var_19 = (max(-36, var_12));
    #pragma endscop
}
