/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = 243406017;
                var_13 = (min(var_13, (((!((((((arr_2 [i_1] [i_0 - 1]) ? var_0 : (arr_0 [i_1]))) + (((var_6 >> (((arr_0 [i_1]) - 608798491)))))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [8] |= (-41116 < (((arr_12 [i_0] [2]) ? -65 : (min(127, -3618391484747645439)))));
                                var_14 &= -71;
                                var_15 = (((min((arr_0 [i_0]), (arr_0 [i_0 - 1])))) ? (!56) : -3618391484747645439);
                            }
                        }
                    }
                }
                var_16 = (min(-3618391484747645416, ((-(((var_2 == (arr_3 [i_0] [i_0]))))))));
                arr_14 [i_1] [i_0] = var_1;
            }
        }
    }
    var_17 = (min((+-1556053413), (((var_11 / -3618391484747645436) / var_8))));
    #pragma endscop
}
