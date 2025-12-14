/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 28664;
    var_17 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 19;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_1] [i_1] [i_0] = (~0);
                    var_18 = ((((min(-4087287373450246586, 0))) ? 217 : ((min(28664, var_2)))));
                    arr_8 [i_0] [i_0] [i_2] [6] &= 0;
                }
                for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
                {
                    arr_13 [i_1] [i_1] [i_1] [i_1] = (min(-4087287373450246586, -3362355428408195416));
                    var_19 += var_13;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_3] [i_1] [i_5] = ((((max(-1699, (max(1713, var_3))))) ? 1698 : 1));
                                var_20 = var_3;
                                arr_23 [i_5] [i_4] [i_1] [i_1] [i_0] = var_5;
                                arr_24 [i_0] [i_1] [i_1] [1] [1] [i_0] = 19013;
                            }
                        }
                    }
                    arr_25 [i_0] [i_1] [i_3 - 3] = (min(((min((max((arr_1 [i_0]), 10)), ((1713 ? (arr_9 [i_3]) : 2328261846611331561))))), (min(((-1043048967 ? 1683 : 9519255351463325470)), 219))));
                    arr_26 [i_1] [i_0] = ((18264748632288227877 ? var_3 : ((181995441421323739 ? 1698 : ((min(var_12, 1)))))));
                }
                arr_27 [i_1] [i_1] = 2147483647;
                var_21 += ((arr_2 [6]) ? ((((arr_4 [i_0] [i_1] [i_0]) ? ((min(-115, 71))) : ((max(65535, 219)))))) : ((((max(10, (arr_17 [18])))) ? var_14 : -1043048966)));
            }
        }
    }
    #pragma endscop
}
