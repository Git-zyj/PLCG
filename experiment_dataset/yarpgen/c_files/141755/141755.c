/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = (~12);
                var_21 -= (((!(((var_2 ? var_1 : 254))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_22 = (min(((~(arr_6 [i_2 + 1] [i_2 + 1] [i_2 - 2]))), (arr_9 [i_1] [i_1])));
                            var_23 += ((((arr_10 [i_0] [i_1] [i_0] [i_2 + 1] [i_0] [i_3]) ? 18446744073709551597 : (arr_10 [19] [i_0] [i_0] [i_1] [i_0] [19]))));
                            var_24 = (~18446744073709551578);
                            arr_12 [i_3] [11] [i_1] [i_0] = ((((max((arr_5 [14] [14]), (arr_2 [i_0] [i_2] [i_2])))) || ((((max((arr_3 [i_0] [i_0] [i_3]), -2605876659308420130)) % 254)))));
                            var_25 = (min(var_25, (((!2777014393011061062) ? (arr_8 [i_1 + 2] [i_3] [i_1 + 2] [i_1 + 2]) : (((min(249, -14506))))))));
                        }
                    }
                }
                var_26 = ((((32750 ? ((65532 ? 237 : 65534)) : 1))) ? ((((min(2862595328743479455, 0))) ? (arr_2 [i_1 - 1] [i_1 - 3] [i_1 + 4]) : (arr_1 [i_0]))) : (((((arr_5 [i_1 + 3] [i_1 + 3]) && (arr_8 [i_1 - 2] [17] [i_0] [i_1 - 2]))))));
                var_27 = (min(24, ((((3041023507 - (arr_1 [i_0]))) + (max(4294967295, 0))))));
            }
        }
    }
    var_28 ^= var_12;
    var_29 = 117;
    #pragma endscop
}
