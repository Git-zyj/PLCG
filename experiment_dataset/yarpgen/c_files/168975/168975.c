/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((var_4 ? var_10 : var_12))) % (max(var_13, 4146619203)))) | (((var_3 ? -972462606437897521 : -1152921504606846976)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((max((((arr_6 [i_1 - 2] [i_1 - 2] [0] [i_1 - 2]) ? ((var_8 ? (arr_5 [i_0] [i_0] [i_2] [i_0]) : 4060205957173026196)) : ((8755 ? 3720 : var_7)))), ((((arr_3 [i_0] [0] [i_0 + 1]) == 2083783658))))))));
                    arr_7 [i_1] [i_2] [i_2 - 1] [i_2] = var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 7;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((min(((((((arr_13 [i_1 - 2] [i_4 - 2]) << (var_6 - 46169)))) % (arr_12 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_3] [i_2 - 1] [i_2 + 1]))), ((((max((arr_1 [i_0]), 56519)) != ((min(var_5, var_9)))))))))));
                                var_18 ^= (min((((9016 != (arr_5 [i_0 + 2] [i_2 + 2] [i_1 - 3] [i_3])))), (arr_5 [i_3] [i_1 - 4] [i_0 + 2] [i_3])));
                            }
                        }
                    }
                    arr_15 [i_1] [i_1 - 4] [i_2] [i_2 + 1] = 4294967295;
                }
            }
        }
    }
    #pragma endscop
}
