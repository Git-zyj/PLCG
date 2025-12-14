/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((arr_2 [i_0]) * (arr_2 [i_0])))) ? (arr_2 [i_0]) : (((arr_2 [i_0]) * (arr_2 [i_0])))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] = (+(min((arr_3 [i_0] [i_0] [i_0]), (arr_1 [i_0]))));
                    arr_9 [i_0] [8] [i_0] = (((~1612802243) * ((((((var_8 ? var_3 : (arr_6 [i_0] [i_0] [i_1] [i_2]))) == (arr_7 [i_0] [5] [5])))))));
                    var_15 = ((+(((arr_4 [i_0] [i_2]) - -32596))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_16 = max((arr_14 [3] [3] [3] [i_3 + 1] [i_4] [i_4] [i_4]), (var_8 & var_13));
                                arr_16 [8] [8] [8] [i_0] [i_4] = (!2409124529959271757);
                            }
                        }
                    }
                }
                var_17 += (((((+((((arr_12 [i_0] [i_0] [i_0] [7] [i_0] [i_0]) > (arr_2 [8]))))))) ? (arr_14 [i_0] [i_0] [6] [i_1] [i_1] [i_1] [i_1]) : (((((27826 ? (arr_12 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) : 27624))) ? ((~(arr_1 [i_1]))) : ((((arr_7 [i_0] [i_0] [i_0]) | (arr_0 [2]))))))));
            }
        }
    }
    var_18 = max(34771, 30764);
    var_19 = ((var_13 ? ((((1 == var_9) ? var_3 : var_14))) : (min((var_10 == var_14), (min(var_6, var_8))))));
    #pragma endscop
}
