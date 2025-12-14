/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((!1296687348), (min((min(var_1, var_3)), (-11 || var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = -30;
                    arr_9 [i_0] [i_0] [i_1] = ((8743 ? ((1781164626 ? 1781164626 : 2513802680)) : 10));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_15 -= (((1781164627 || 2513802669) % 2991331218));
                                var_16 = (max(var_16, (((!(arr_7 [i_3]))))));
                                arr_14 [0] [i_1] [i_2] [3] [i_4] = 27;
                                var_17 -= ((-(((!(arr_4 [i_1 + 1] [i_1] [i_2 + 2]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((43513 / ((((max(1088877502, -126))) ? 2513802670 : 65535))));
    var_19 = (((min(2513802669, 1763631279)) > 3025));
    #pragma endscop
}
