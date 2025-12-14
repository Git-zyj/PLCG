/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0 + 3] [i_1] = (((((~(arr_0 [i_0 + 1])))) ^ ((-3107576506809244784 | (arr_0 [i_0 + 1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1 - 1] [8] [i_1 - 1] = (max((((arr_11 [i_2] [i_2] [i_2] [i_0 + 1] [i_1 - 2]) ? (arr_4 [i_0 - 1]) : -348703570)), 0));
                            var_16 = (max(-9102239390481974135, 1));
                            var_17 = (((((!(arr_1 [i_1] [i_2])))) << (((arr_11 [i_3] [i_3] [i_0] [i_1] [i_0]) - 6573004714582264639))));
                            arr_14 [i_0 - 1] [21] = (max(1, ((((min(1, 1))) ^ (~1)))));
                            var_18 = ((!(!-var_9)));
                        }
                    }
                }
            }
        }
    }
    var_19 = (var_0 > -10968805308674933238);
    var_20 = ((-var_8 ? (max(var_0, 12498914710817644039)) : (!var_11)));
    var_21 = (max((max(((max(1, 1))), (var_10 & var_3))), (min((var_11 || var_10), ((var_0 ? 1 : 1))))));
    var_22 = var_11;
    #pragma endscop
}
