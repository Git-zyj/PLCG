/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_15 = ((~(arr_10 [i_0] [i_1] [i_3] [i_3])));
                            arr_13 [i_1] [i_1] [i_2] [i_3] [i_0] [9] = (3144076462 - -var_14);
                        }
                    }
                }
                arr_14 [i_1] = -63383;
            }
        }
    }
    var_16 = (max(var_16, var_12));
    var_17 = (1 < 1);
    var_18 = var_11;

    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        arr_18 [i_4 + 1] = (max((((-12088 + 2147483647) << (((99 < 4294967279) - 1)))), 4));

        for (int i_5 = 4; i_5 < 9;i_5 += 1)
        {
            arr_21 [i_5] = (((arr_8 [i_5 + 3]) ? (max(-32761, -5245014938814361684)) : (((min(var_3, (arr_8 [i_5 - 3])))))));
            var_19 ^= 0;
        }
        var_20 ^= var_14;
    }
    #pragma endscop
}
