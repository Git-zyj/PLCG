/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= (max(3676804929540285988, ((max((((125 ? var_3 : var_8))), (max(1, -8910587280873087164)))))));
    var_11 = var_3;

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_12 = (max(var_12, ((max(((((max(var_4, (arr_0 [i_0])))) ? (max(3, var_7)) : (arr_0 [i_0]))), (max((arr_2 [i_0 + 2]), ((var_8 ? (arr_2 [i_0]) : var_7)))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, (max((-32767 - 1), -126))));
                                var_14 = 1198486677;
                                arr_13 [i_0] [i_3] [i_2] [i_1 + 3] [i_0] = (!24);
                                var_15 = max((max(var_3, 142)), ((((arr_5 [i_4 + 1]) ? 1 : 136))));
                                arr_14 [i_0] [i_0] = (arr_11 [i_0] [i_0] [i_0 + 2] [i_1 + 1] [i_4 + 1] [i_4]);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_1] = 128;
                }
            }
        }
    }
    #pragma endscop
}
