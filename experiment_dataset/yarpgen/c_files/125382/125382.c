/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (((((!(!-8821677071670239533)))) * ((((((!(arr_3 [i_0])))) < (((arr_1 [i_0] [i_1]) >> 0)))))));
                arr_6 [i_0] [i_1] [i_0] = ((!((max((!var_5), (arr_0 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_19 = ((0 >= (-127 - 1)));
                                var_20 = (min(((min(2, 0))), (((((arr_5 [i_0] [i_1]) && (arr_1 [i_0] [i_0]))) ? var_11 : (((!(arr_7 [i_0] [1] [i_2 - 1] [i_0]))))))));
                                var_21 = (max(var_21, (((~(~var_10))))));
                                var_22 = (min(var_22, ((min((4294967295 && 20), var_10)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
