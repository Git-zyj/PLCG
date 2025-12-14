/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (max(1290966156, ((max((max((arr_0 [i_0] [i_0]), (arr_0 [i_2] [i_2]))), 99)))));
                    var_19 = 65535;
                    arr_8 [i_0] = (((((min((arr_0 [i_0] [i_0]), 4277066851)))) ? (arr_4 [i_0] [i_0] [i_0] [i_0]) : 3));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 &= ((((min((arr_6 [i_0 + 1] [i_1 - 2] [i_0 + 1]), 2170098554))) ? (((arr_6 [i_0 - 1] [i_1 - 2] [i_0 - 1]) ? 80 : (arr_6 [i_1 - 2] [i_1 - 2] [i_0 + 1]))) : ((max((arr_6 [i_0 - 1] [i_1 - 3] [i_0 - 1]), (arr_6 [i_1 + 1] [i_1 + 1] [i_0 + 1]))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = 10;
                                var_21 = (max(var_21, ((((arr_9 [i_0 + 1]) ? (arr_9 [i_0 - 1]) : ((4294967274 ? (arr_9 [i_3 - 1]) : (arr_9 [i_1 + 1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(17733, var_10));
    #pragma endscop
}
