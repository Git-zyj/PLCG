/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = ((var_2 >= (((min(var_1, -1)) * (((min((arr_2 [6]), (arr_2 [5])))))))));
                arr_5 [6] [2] [i_0] |= ((((((((arr_2 [4]) < (arr_2 [7])))) <= (((arr_0 [1] [6]) ? 31 : var_7)))) ? (18446744073709551606 != 1) : (max(8971276433955794435, (arr_4 [6])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [1] [i_3] = var_12;
                            arr_11 [i_1] = ((!(((1048524134 << (29355 - 29333))))));
                            var_16 |= 1804294693;
                            var_17 &= 9223372036854775786;
                        }
                    }
                }
                var_18 = ((((var_6 ? (arr_6 [i_0] [i_1] [i_1] [i_1]) : 15149109920230411516))) ? (arr_1 [i_0]) : ((~(arr_4 [i_1]))));
                arr_12 [i_1] = (arr_9 [i_1] [8] [i_0]);
            }
        }
    }
    #pragma endscop
}
