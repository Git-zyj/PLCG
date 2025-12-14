/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((min(var_3, var_0)), var_4));
    var_16 ^= (min(var_5, (((var_5 <= (1 % var_11))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((((((var_13 < (arr_5 [i_0] [i_0 - 1] [i_0]))))) - (min(1, 2280957571))));
                    var_17 += (max((min(1230273752, 3)), (var_9 || 1)));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_18 = (min((max((arr_5 [i_1] [i_2] [i_0]), -11499)), (-4 >= var_3)));
                        arr_10 [i_0] [i_2] [i_1] [i_1] [i_0] [i_0] = (min((727522593 / -9759), (((arr_6 [i_1] [i_1] [i_0 - 1]) % -22))));
                        var_19 = (((((((arr_3 [i_0]) <= var_13)))) >= (min((arr_9 [i_2] [i_0] [i_0 - 1] [i_0]), (arr_4 [i_0])))));
                        var_20 = (max(var_20, ((max(((min((arr_4 [i_1]), 4294967295))), (var_13 / var_10))))));
                    }
                    for (int i_4 = 3; i_4 < 13;i_4 += 1)
                    {
                        var_21 = (min(var_21, ((((min(4, 144115188075855872)) > (min(var_13, (arr_12 [i_4] [i_1] [i_1] [i_1]))))))));
                        arr_14 [i_0] [i_4 - 1] = ((((min(-478366693946008524, (arr_4 [i_0])))) || ((((arr_5 [i_0] [i_0 - 3] [i_0]) * 0)))));
                        var_22 = (min((max((min((arr_5 [i_0] [i_1] [i_0]), var_3)), (arr_2 [i_1] [i_0 - 2]))), ((min((arr_8 [i_4 - 2] [i_2] [i_0 - 1] [i_0]), 1)))));
                    }
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_18 [i_0] = (min(((max(-5, (arr_16 [15] [i_1] [i_0] [i_2] [i_5])))), (min((arr_13 [i_0]), var_11))));
                        var_23 = (min((min((arr_1 [i_1] [i_0 - 2]), (arr_1 [i_1] [i_0 - 2]))), ((max((arr_8 [1] [i_0] [i_0] [i_0 + 1]), ((min((arr_4 [i_0]), (arr_16 [i_0] [i_1] [i_0] [i_2] [i_5])))))))));
                    }
                    for (int i_6 = 1; i_6 < 15;i_6 += 1)
                    {
                        var_24 = (((max(21, 4078149349)) >= (min(-1301190553, 4294967295))));
                        var_25 = ((((min(var_3, (arr_1 [i_0 - 3] [i_0 - 3])))) && (((arr_1 [i_0 - 3] [i_0 - 3]) && (arr_1 [i_0 - 3] [i_0 - 3])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
