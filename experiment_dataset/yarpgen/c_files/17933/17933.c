/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (max(((-23 ? 12482830412536117866 : -2176057193712669564)), (((!(-4654469153326467646 <= var_0))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_11 = (max(((max(var_4, (arr_2 [i_0])))), ((((((arr_5 [0] [i_2 + 2] [i_3]) - var_2)) * (((arr_8 [i_0] [i_1] [i_1] [i_1]) - var_4)))))));
                            arr_9 [i_1] [i_2] [i_1] [i_1] = ((-(arr_1 [i_0] [i_1 + 2])));
                            var_12 = (((((5963913661173433749 ? -2176057193712669573 : ((((18446744073709551598 < (arr_4 [i_3] [i_1] [i_1])))))))) ? ((max((((arr_6 [i_1] [i_1 - 2]) > var_1)), (((arr_0 [i_2]) == 0))))) : (2163780359164253303 && 1)));
                            arr_10 [i_1] [i_2 + 1] [3] [i_1] = (max((((max((arr_8 [i_0] [i_0] [i_2] [i_1]), (arr_6 [i_1] [i_1]))) < (((max(var_9, 1)))))), ((!(arr_1 [i_1 + 1] [i_1 + 1])))));
                        }
                    }
                }
                var_13 ^= (max(((~(arr_1 [i_1 - 1] [i_1 + 1]))), ((((max(var_5, var_3)) <= var_3)))));
                var_14 = -2176057193712669570;
            }
        }
    }
    var_15 = -var_2;
    var_16 = (((var_0 + var_2) < 1));
    var_17 = var_5;
    var_18 ^= ((((min(var_9, 14481474651007564393))) ? (-var_7 + var_5) : ((((min(var_4, 3965269422701987226))) ? (max(var_5, var_2)) : var_3))));
    #pragma endscop
}
