/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((~var_5) >= ((14 ? 1099511627775 : 58485))));
    var_21 = (min(var_21, ((min((((!(!var_6)))), var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_22 = (max(var_22, (((-397858601 >= (((arr_2 [i_0]) % 65521)))))));
                            var_23 = (min(var_23, 12275958470241589580));
                            var_24 = (max(var_24, ((min((((!var_2) ? (arr_1 [i_0]) : 22216)), 7213)))));
                            var_25 = (min(var_25, 0));
                        }
                    }
                }
                var_26 = (arr_3 [i_1] [i_1] [i_1]);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_27 = ((((((arr_14 [i_0] [i_5 - 1] [i_4] [i_5] [i_6]) >> (((arr_7 [i_0] [i_5 - 1] [i_4] [i_0] [i_6]) - 3845854450820299736))))) ? ((((((arr_12 [i_0] [i_1] [i_6] [i_1]) ? (arr_9 [i_1] [i_4] [i_5]) : 22230))) ? (arr_3 [10] [i_4] [21]) : (((arr_13 [i_1] [3] [i_5] [11]) ? -22217 : (arr_8 [i_0] [i_1]))))) : (((((((arr_9 [i_0] [i_1] [i_0]) ? 3579 : 65535))) ? 22194 : (arr_9 [i_0 + 1] [i_5 - 3] [i_6 + 1]))))));
                                var_28 = (max(var_28, ((min((min((arr_0 [i_5 - 2] [i_0 + 1]), (arr_4 [i_0] [i_1] [i_4]))), (2680380443 > 14))))));
                                var_29 = (min(var_29, var_9));
                            }
                        }
                    }
                }
            }
        }
    }
    var_30 = (min(var_12, ((((3843703111051329814 % var_19) > (((var_12 ? 106 : 65535))))))));
    #pragma endscop
}
