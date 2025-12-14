/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2 + 1] [i_1] [12] = (min((-127 - 1), -4456511951459788611));

                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            arr_13 [i_4] [i_1] [i_1] [i_1] = ((((((min(var_6, (arr_2 [i_3] [i_4])))))) == ((~(max((arr_0 [i_4]), -1))))));
                            arr_14 [i_0] [i_1] [i_3] [i_3] [i_4 - 1] |= ((-((~(3 || -4456511951459788611)))));
                        }
                        var_13 += var_9;
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_14 = (max(var_14, (arr_1 [1])));
                            var_15 = (max(4456511951459788610, var_2));
                        }

                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            var_16 ^= (min((arr_3 [i_0] [i_0] [i_0]), (max((arr_17 [i_0] [i_0] [i_0] [i_0]), (var_11 <= var_2)))));
                            var_17 ^= ((-(((((4456511951459788610 ? 1 : 588909674))) ? 112 : 3706057622))));
                            var_18 = ((((((4456511951459788611 ? var_3 : (arr_7 [i_0] [i_1] [i_2]))))) ? (arr_12 [16] [i_7] [i_2 + 3] [i_7] [1]) : ((-(arr_1 [i_0])))));
                            arr_25 [1] [i_5] [i_7] [i_5] [i_5] [i_5] [i_5] = (min(((~((((arr_12 [i_0] [i_7] [i_0] [i_5] [i_7]) || 1))))), (arr_2 [i_0] [i_7])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
