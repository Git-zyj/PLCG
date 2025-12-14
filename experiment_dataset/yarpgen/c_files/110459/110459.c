/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_1] [i_3] [i_1] [i_3] [i_1] = ((~((~(arr_6 [i_2])))));
                            var_12 = ((arr_0 [i_3] [i_2]) < ((3808834889469700248 ? 670766806 : (arr_0 [i_0] [i_1]))));
                            var_13 = (min(var_13, var_2));
                        }
                    }
                }
                arr_10 [i_0] [i_0] = ((((-(((3624200490 == (arr_6 [i_0])))))) << (-3650543467472626058 + 3650543467472626061)));
                var_14 = 253;
                var_15 += (3624200490 >> ((((19899 ? (~1) : -22720)) + 31)));
                arr_11 [i_0] [i_1] [i_1] |= ((((max(((min(325089682, 3330063184))), (arr_4 [i_1])))) ? var_9 : (arr_3 [i_0] [i_1])));
            }
        }
    }
    var_16 += (((!1) ? var_11 : ((((-22745 ^ 3969877626) ? var_8 : (2738543516 < var_3))))));
    var_17 = (min(-3650543467472626061, 10995518317126867862));
    #pragma endscop
}
