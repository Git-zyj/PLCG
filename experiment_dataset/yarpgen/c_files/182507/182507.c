/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 *= (((min(var_1, (arr_2 [i_0 - 1]))) ? (((~(arr_1 [i_2 - 1] [i_2 + 1])))) : (max(((-2754 ? var_4 : var_7)), ((var_5 ? 26848 : (arr_7 [i_0] [i_0] [i_1] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_16 = max((max(var_13, (max(var_4, (arr_3 [i_2 - 4]))))), (((max(2753, 4511035179509198920)))));
                                var_17 ^= (min(-2753, (2579047776344464036 * -32764)));
                                var_18 = (min(var_18, ((((((~(arr_14 [i_3] [i_3 + 1] [i_2] [1] [i_2])))) ? (((arr_14 [i_4] [i_3 + 1] [i_3] [i_1] [i_1]) - (arr_14 [i_3] [i_3 - 1] [i_2] [20] [i_0]))) : (arr_14 [13] [i_3 + 1] [0] [i_3] [i_0]))))));
                            }
                        }
                    }
                    var_19 |= (~-1233111479);
                }
            }
        }
    }
    #pragma endscop
}
