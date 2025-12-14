/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_6, (~0)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, (arr_11 [0] [0] [4])));
                            var_22 = (arr_12 [i_2 - 1] [i_1] [i_2] [i_3]);

                            for (int i_4 = 0; i_4 < 11;i_4 += 1)
                            {
                                var_23 = (max(var_23, ((((((-(arr_11 [i_2 - 1] [i_3 + 1] [7])))) ? 0 : (((((0 ? 40360 : var_17)) % (arr_14 [i_3 + 2] [i_3] [i_3] [i_3] [i_3] [i_3 - 1])))))))));
                                var_24 = (((((((min(25175, 1196509645))) ? ((var_11 ? 246 : (arr_1 [i_4]))) : ((var_8 >> (var_16 - 2675024190)))))) ? 1196509644 : var_7));
                                var_25 = (min(var_25, (((((((~18105) ? ((1 << (2147483647 - 2147483619))) : ((-2590 ? -9830 : 13524))))) ? 14930 : ((1 - (3098457660 + 1424880238))))))));
                            }
                        }
                    }
                }
                var_26 = (arr_10 [i_0] [i_1] [i_0] [i_0]);
                var_27 = (var_10 / var_7);
            }
        }
    }
    #pragma endscop
}
