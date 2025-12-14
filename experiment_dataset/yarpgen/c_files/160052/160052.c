/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_2, var_2));
    var_12 = (max(11973991335574561113, -97));
    var_13 = (max(var_13, var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_2] [i_1] = ((~(arr_2 [i_0])));
                    var_14 = (var_8 / (((arr_5 [i_0] [i_1 + 1] [i_2]) ? (max(9223372036854775807, (arr_0 [i_1] [i_2]))) : (max((arr_4 [i_0] [i_0] [i_0]), -2601703925798319210)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = ((!((min(97, (max(2147483647, 71)))))));
                                var_16 = (min(var_16, var_3));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
