/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((215461634157851148 ? ((18231282439551700467 ? 215461634157851148 : -263400287)) : ((max(-1, 263400286))))));
    var_18 = (18446744073709551615 * 21354);
    var_19 = 13120;
    var_20 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_21 = ((((max(var_8, -21354))) ? 13112 : ((max(71, 71)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] [i_2] = ((((min(var_8, (arr_10 [i_2 - 1] [i_1] [i_2] [i_1] [i_3 + 4])))) != 56));
                                var_22 = (max(var_4, (max(58144, (max(var_15, var_11))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
