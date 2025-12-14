/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (min(((min(-10244, 1))), (max((arr_1 [i_1 + 1]), -10239))));
                arr_7 [i_0] [i_0] [i_0] = (max((((var_3 < (arr_3 [i_0] [i_1 - 1])))), (min((arr_1 [i_0]), (arr_1 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_10 = ((~((1 & (arr_5 [i_0] [17] [i_2])))));
                            arr_13 [i_2] [i_2] = (max(10237, (((((-(arr_11 [i_2] [i_2])))) ? (~1) : (arr_4 [i_1 + 2])))));
                            var_11 += (!24701);
                            var_12 &= ((-(arr_11 [i_1] [i_1])));
                            arr_14 [i_0] [i_1 + 1] [i_2] [i_3] [i_2] = ((var_5 ? (arr_0 [i_1 - 1]) : 1));
                        }
                    }
                }
                var_13 &= max((min((16646144 ^ var_5), (arr_10 [1]))), ((((1 || -31214) || (((-2147483647 - 1) && 4294967295))))));
            }
        }
    }
    var_14 = 0;
    #pragma endscop
}
