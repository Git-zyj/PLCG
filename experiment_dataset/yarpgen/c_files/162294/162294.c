/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 22));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_12 += arr_3 [i_1] [0];
                arr_5 [i_0] [i_0] [i_0] = 233;
            }
        }
    }
    var_13 = (((16265182495444350656 ? (!235) : ((max(var_9, var_8))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                var_14 = ((19 ? (min(((84 ? var_8 : var_5)), var_0)) : ((max(((max(var_4, 22))), (max(22, (arr_0 [i_3]))))))));
                arr_12 [i_2] [i_2] [i_3 + 4] = 178;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_15 |= (-41 * 41);
                            var_16 = (237 & 2824153116924398101);
                        }
                    }
                }
                arr_19 [i_3] = 3729224425;
            }
        }
    }
    var_17 = (max(var_17, ((max((var_0 + 222), (max(var_0, (!var_6))))))));
    #pragma endscop
}
