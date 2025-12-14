/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, 10));
                            arr_11 [i_2] [1] [i_2] [i_3] = ((31 ? (~5544614656717450794) : (arr_5 [i_2] [i_2] [i_2] [i_2 + 1])));
                        }
                    }
                }
                var_14 = ((-((var_1 ? (arr_8 [i_1] [i_1] [i_0] [i_0]) : (-9223372036854775807 - 1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 12;i_5 += 1)
        {
            {
                var_15 = (max((!5544614656717450802), -14258));
                var_16 = ((var_9 ? ((~(arr_5 [i_4] [i_5] [i_5] [4]))) : 31832));
                var_17 -= ((((((var_10 ? var_8 : 10)) ? 4398046511103 : var_5))));
                arr_16 [i_4] [i_5] = 0;
            }
        }
    }
    #pragma endscop
}
