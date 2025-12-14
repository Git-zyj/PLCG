/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166512
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, ((max((((2575576651 || var_14) ? var_15 : ((2575576650 ? var_10 : 2575576659)))), (((!(18446744073709551611 >= 1719390636)))))))));
    var_17 = (max(var_5, (+-1719390656)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 *= (max(((-((-(arr_1 [i_3]))))), (max(207, (((arr_0 [i_0] [i_0]) ? -14 : 50))))));
                            arr_10 [i_2] [i_2] [i_1] [i_0] = ((((((~(arr_2 [i_3] [i_2])) >= ((1719390645 ? (arr_3 [i_0] [6] [i_3]) : (arr_5 [i_2]))))))));
                            var_19 += ((-(((max(var_0, 21730))))));
                            var_20 |= ((!((((arr_9 [i_1 - 4] [i_1 - 3] [i_1 - 3] [i_1 - 4]) ? (arr_9 [i_1 - 2] [i_1 - 3] [i_1 - 4] [i_1 - 3]) : 6161)))));
                        }
                    }
                }
                var_21 ^= (((((arr_3 [i_1 + 1] [i_1 + 1] [i_1]) ? (arr_3 [i_1 - 2] [i_1 - 4] [i_1]) : 2034408248)) ^ ((((!(arr_5 [16])))))));
            }
        }
    }
    var_22 = (((~1719390625) >= 6168));
    var_23 = (((((-var_11 << (32757 - 32757)))) ? 483129405 : (((var_10 ? (!17028700903395175901) : ((1719390642 ? -908 : 202)))))));
    #pragma endscop
}
