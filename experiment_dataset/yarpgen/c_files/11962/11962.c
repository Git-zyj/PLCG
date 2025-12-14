/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11962
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_13 -= ((!((((((9223372036854775808 ? 35227 : 0))) ? 2 : 11094861365668020678)))));
                                arr_11 [i_4] |= (((max(9361369224051980291, 9361369224051980291)) * (((max(-18216, -18216))))));
                                var_14 ^= ((((18215 >= (arr_9 [i_0] [i_0] [i_4] [i_3] [i_4 - 2]))) ? 255 : ((max((arr_9 [i_1] [i_3] [i_2] [i_2] [i_4 + 4]), (arr_9 [i_0] [10] [i_2] [12] [i_4 + 2]))))));
                                var_15 |= 16466163578647061554;
                            }
                        }
                    }
                    var_16 = 18216;
                    var_17 = (max((min(var_3, (365489231 | 4070911827597775820))), (((~(arr_4 [i_1]))))));
                }
            }
        }
    }
    #pragma endscop
}
