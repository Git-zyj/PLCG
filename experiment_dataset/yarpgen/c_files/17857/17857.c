/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, 0));
                                var_17 = (max((!1490901559), 1088741852));
                                arr_14 [i_4 - 1] [i_1] [i_0] [i_1] [i_0] = (-124 || 248);
                                arr_15 [i_4] [i_4] [i_0] [i_3] = var_4;
                                arr_16 [i_0] [i_1 + 3] [i_2] [i_3] [i_0] = (!0);
                            }
                        }
                    }
                }
                var_18 |= ((((max((arr_4 [i_1 + 1]), (((!(arr_12 [i_0] [13] [i_0] [i_0 - 1] [i_0]))))))) ? ((var_5 ? (arr_2 [i_0 - 1] [i_1 + 1]) : 1)) : (~10)));
                arr_17 [i_1] [i_1] |= (arr_1 [i_1]);
            }
        }
    }
    var_19 = 2147483647;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            {
                var_20 = ((-var_6 ^ ((((((arr_20 [i_5 - 1] [1]) ? (arr_19 [i_5 + 1] [i_5 + 1]) : var_1))) ? (arr_22 [i_5] [i_5]) : ((min(var_12, (arr_21 [i_5]))))))));
                var_21 = (max(var_21, ((((arr_20 [i_6 - 3] [i_6 - 3]) > 1)))));
            }
        }
    }
    #pragma endscop
}
