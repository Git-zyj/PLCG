/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~((((-99 + 2147483647) << var_8))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_4 [i_1] [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] = (arr_0 [i_2]);

                            for (int i_4 = 3; i_4 < 24;i_4 += 1)
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_0] [i_4] = (!((((arr_3 [i_2 + 1] [i_3] [i_4 + 1]) >> ((((arr_6 [i_1] [i_1] [i_4]) || var_0)))))));
                                arr_16 [i_0] [i_4] [i_4] [i_0] [i_4] [i_0] [i_1] = (((((((arr_2 [i_0 + 2]) != var_17)))) - (max(1, (arr_2 [i_0 + 1])))));
                                var_20 = ((((((~1) ? 10829267705263333203 : (max(7617476368446218412, 232))))) ? (!var_11) : (((~var_1) + (max(var_13, 10829267705263333214))))));
                            }
                            arr_17 [i_0] [i_1] [i_2] [i_1] [i_3] = (min((arr_1 [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_2] [i_3])));
                            var_21 = (arr_12 [i_0] [i_2] [i_1] [i_0] [i_0]);
                            arr_18 [i_1] [i_3] [i_2] [i_0] = (min((max((min(var_11, (arr_7 [i_3] [i_2] [i_0]))), ((var_10 ? var_16 : (arr_12 [i_0] [i_0] [i_2] [i_2] [i_0]))))), var_17));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_9;
    #pragma endscop
}
