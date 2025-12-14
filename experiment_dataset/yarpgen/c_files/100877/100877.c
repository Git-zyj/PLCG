/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 1;
    var_13 = ((max((max(1, 6698465378136507639)), var_6)));
    var_14 = (min(var_14, ((min((max(18446744073709551615, 1)), (((max(1, 0)))))))));
    var_15 = ((min(-123, 122)));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (max((arr_2 [4] [i_0]), 18446744073709551615));
        var_16 = (((max(1, 564259626))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((max(((max((max(0, (arr_0 [i_2]))), ((max(var_4, 0)))))), (max(122, ((max(60, 273353696))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_0 - 1] [i_1] [i_0] [i_3] [i_4] = ((max(122, 1)));
                                var_18 = 115;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
