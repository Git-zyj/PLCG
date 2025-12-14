/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((-((248 ? 4001156786 : 6405830648583508629)))) - 4974526793602362452));
    var_19 = ((((((0 - 65518) ? (45885 + 0) : -var_10))) - (1320730997541070582 / var_0)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (min((max(((0 ? (arr_7 [i_0 + 2] [i_1] [i_3] [i_3]) : 2450854379)), (((var_0 ? 65514 : (arr_6 [i_4 - 1] [i_1] [i_1] [i_0])))))), 172));
                                var_21 ^= (arr_2 [i_0 + 1] [i_3 + 1]);
                                var_22 = (((((arr_6 [i_4 - 1] [i_1 - 2] [i_0 + 1] [i_0 + 1]) % 254)) != (((arr_9 [i_0] [i_1 - 2] [i_4] [i_4] [i_1] [i_3]) ^ (arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0] [i_3])))));
                                var_23 = (min(var_23, ((((!172) * (min((arr_3 [i_0] [i_4 + 1] [i_3 + 1]), (((arr_4 [i_3 + 2] [i_3] [i_3 + 2]) ? (arr_3 [i_0] [i_0] [i_0]) : var_3)))))))));
                                arr_13 [i_3] [i_3] [i_2] [i_4] [i_4] [i_3 + 1] = (((arr_9 [i_1 - 1] [i_3] [i_4 - 1] [i_4] [i_4] [i_3]) >> (var_6 >= 4001156786)));
                            }
                        }
                    }
                }
                var_24 = (min(var_24, ((min((((((1 ? (arr_8 [i_0] [i_1] [i_0 - 1]) : (arr_2 [i_0] [i_0])))) ? (((arr_10 [12]) ? 1885880285 : (arr_1 [i_1] [i_1]))) : (arr_9 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [4]))), (((arr_0 [i_0 + 4] [i_1]) - (arr_10 [10]))))))));
            }
        }
    }
    #pragma endscop
}
