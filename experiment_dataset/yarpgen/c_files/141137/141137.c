/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_7;

    for (int i_0 = 3; i_0 < 15;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0] = ((((((!1929939556485201383) ^ (arr_1 [i_0])))) ? 0 : (((-(max(35759, 1838321814)))))));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = (~var_15);
                    arr_8 [i_0 + 2] [i_0] [i_1] [i_2] = 30;
                }
            }
        }
        var_21 = (min((arr_4 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2]), ((-(arr_0 [i_0 - 3])))));
        var_22 = (max(var_22, (35753 | -8192)));
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = (arr_1 [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                {
                    arr_19 [i_4] [i_4] [i_5] |= ((((var_4 ? -1033194391 : var_12)) / 40));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_23 ^= 8171;
                                var_24 = (min(var_24, -4294967295));
                                var_25 = -21;
                            }
                        }
                    }
                    var_26 = (8174 <= var_19);
                }
            }
        }
    }
    #pragma endscop
}
