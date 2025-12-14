/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((((max(-7415553273763345873, 34)) + 2596671514)))));
    var_15 = 1670677963;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] &= 0;
                            var_16 = (((((var_1 / (arr_6 [i_0 - 2] [i_1] [i_2 - 1])))) ? (max((arr_6 [i_0 - 2] [i_2] [i_2 - 4]), (arr_6 [i_0 - 1] [i_0 - 3] [i_2 - 3]))) : ((~(arr_6 [i_0 - 2] [i_1] [i_2 - 2])))));
                            var_17 = (~240);
                            var_18 = (((~8596620484121278766) ? 240 : 7));
                            var_19 *= (((((70368744177152 ? 1378350925 : 0))) ? (!var_3) : (((!(((var_9 ? var_5 : 22192))))))));
                        }
                    }
                }
                var_20 = (max((var_1 != -5254154569857856346), (var_8 * var_8)));
                arr_11 [i_1] = ((arr_8 [i_0 - 2] [i_0] [i_0] [i_0 - 3] [i_0]) ? (((arr_8 [i_0 - 3] [i_0] [i_0] [10] [i_0]) ? 3513629214360478722 : (arr_8 [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2]))) : 0);
                var_21 = (arr_5 [i_1] [10] [10]);
            }
        }
    }
    #pragma endscop
}
