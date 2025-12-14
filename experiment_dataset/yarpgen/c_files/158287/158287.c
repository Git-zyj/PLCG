/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 = ((((-9483 & -26009) ^ ((~(arr_0 [i_0]))))));
                                var_12 *= ((((91 ? -27 : var_1)) % ((-(0 >= -15)))));
                                var_13 = (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            }
                        }
                    }
                }
                var_14 = -74;
            }
        }
    }
    var_15 = ((((~(14012 < 144115119356379136)))) >= 9170918446238001448);
    var_16 = (max(var_16, 120));
    var_17 &= ((((((9170918446238001448 != var_7) | 0))) >= (max(18302628954353172480, -96))));
    #pragma endscop
}
