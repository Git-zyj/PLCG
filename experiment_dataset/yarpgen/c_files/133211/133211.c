/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133211
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_11 ^= (arr_1 [i_1] [i_3 + 1]);
                                var_12 = (min(var_12, (((((((((arr_10 [i_0] [i_1] [i_1]) ? 0 : (arr_7 [i_3] [i_3])))) ? ((var_9 ? (arr_12 [i_0] [i_1] [i_2] [i_1] [i_2 + 1] [i_2]) : var_0)) : ((var_2 ? 0 : 0)))) << (min(0, (arr_4 [i_0] [i_0]))))))));
                                var_13 = (min(((-8757081563733360572 ? ((8 ? (arr_3 [i_1] [i_1]) : 1323648166)) : (((-9223372036854775787 ? -8757081563733360572 : -8757081563733360571))))), var_6));
                            }
                        }
                    }
                    var_14 = (max(var_14, 9));
                }
            }
        }
    }
    var_15 = (min((max(0, -345618426)), var_8));
    #pragma endscop
}
