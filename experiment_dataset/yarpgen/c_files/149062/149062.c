/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((135 ? var_0 : var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, ((((((arr_3 [i_0] [0]) && (arr_3 [11] [i_2]))) ? (arr_3 [i_0] [i_1]) : (max((arr_3 [i_2] [i_0]), (arr_6 [i_0]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_15 = 1;
                                var_16 = (min(var_16, ((min(111, (((-8192 ? 22012 : 1))))))));
                                var_17 -= 1;
                                var_18 = (min(var_18, (~438335313)));
                                var_19 = ((~(arr_1 [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((var_0 >= (((!(-2147483647 - 1)))))));
    var_21 = var_8;
    #pragma endscop
}
