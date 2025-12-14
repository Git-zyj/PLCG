/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_13 ? (((!112) ? (!var_4) : var_15)) : var_7));
    var_17 = ((min((-7872928269689534787 | var_13), -7872928269689534773)) & (~var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = (min(((-(arr_1 [i_0] [i_1]))), ((57160 ? (arr_1 [i_0] [i_1]) : (arr_1 [i_0] [i_1])))));
                                var_19 += (((arr_6 [i_0] [i_1] [8] [5] [6]) <= (((((7872928269689534778 ? -7872928269689534773 : (arr_1 [i_3] [i_1])))) ? var_12 : (((var_15 ? var_6 : (arr_11 [i_0] [0] [i_0] [i_0] [i_4] [i_0]))))))));
                                var_20 = (arr_11 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4]);
                            }
                        }
                    }
                    var_21 &= 8257465938755092517;
                    arr_12 [i_0] [i_0] [i_0] [6] = -244236456;
                    arr_13 [i_0] [i_1] = (min(((((((-112 ? var_6 : 0))) ? (arr_6 [i_2] [i_2] [i_1] [6] [i_0]) : 10189278134954459109))), var_11));
                }
            }
        }
    }
    var_22 *= ((-var_3 ? var_11 : ((2101517544 ? 1363598105 : 135))));
    #pragma endscop
}
