/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [12] [i_1] = (arr_1 [i_0]);
                arr_5 [0] [i_1] = (((~(arr_1 [2]))));

                for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = (((max((arr_14 [1] [1] [i_2] [1] [i_2]), var_4))));
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_3] = ((+(((~90) ? 2492587705 : 1802379591))));
                            }
                        }
                    }
                    var_12 = (4294967295 * var_6);
                    arr_16 [i_2] [i_1 + 1] [5] = (((min(var_2, (arr_13 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1]))) / var_9));
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    var_13 = (min(var_13, ((max(((max((arr_2 [i_0]), var_6))), (max((arr_8 [i_5]), ((var_9 >> (var_3 - 46))))))))));
                    var_14 = (((((-4928 ? 6 : -1802379591))) ? ((((~4914) ? 170 : 6909615503858050256))) : var_7));
                }
            }
        }
    }
    var_15 = (((~60621) ^ ((~((min(var_6, var_4)))))));
    #pragma endscop
}
