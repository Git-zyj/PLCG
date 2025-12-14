/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_20 += (((((-9223372036854775807 - 1) ? 9223372036854775807 : (~4398045462528)))) ? (((~var_9) ? (((max(65529, var_17)))) : (max((arr_1 [i_0]), -9223372036854775802)))) : ((~(max(-9223372036854775792, 9223372036854775807)))));
                            var_21 = (((!((((arr_4 [i_0]) ? (arr_7 [i_0] [i_1] [i_2] [i_0 - 1]) : 11))))) || ((!(!-49))));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 15;i_4 += 1)
                {
                    var_22 ^= (arr_5 [i_0] [i_0] [i_1] [i_4 + 1]);
                    var_23 -= (((~(((1 <= (arr_3 [i_1] [i_1])))))));
                }
                var_24 = arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0];
            }
        }
    }
    var_25 = var_14;

    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {
                        var_26 = (arr_7 [i_5] [i_6] [4] [i_8]);
                        arr_25 [i_5] [i_6] [i_6] [i_8 - 1] [0] [i_7] = ((max(32762, ((-1011943312 ? -958100889 : 9223372036854775805)))) > (((((var_9 | (arr_5 [i_5] [1] [1] [i_8 + 1])))))));
                    }
                }
            }
        }
        arr_26 [i_5] = ((~((((1184747908 && 14) && (((255 ? -2147483633 : (arr_7 [i_5] [i_5] [i_5] [i_5])))))))));
    }
    #pragma endscop
}
