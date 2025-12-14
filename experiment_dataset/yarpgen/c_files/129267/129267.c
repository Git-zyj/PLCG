/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129267
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] |= ((!(!-var_7)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_2] [i_0] = (~12763);
                                arr_14 [i_4] [i_0] [i_0] [i_1] [i_0] [i_0] = ((~(--32767)));
                                arr_15 [i_4] [i_3] [i_1] [i_0] = ((-(!var_14)));
                                arr_16 [i_0] [i_1] [i_2] [10] [i_3] [2] = (!12);
                            }
                            for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] = ((~(((!((!(arr_7 [i_5] [i_2] [3]))))))));
                                var_15 = (~13998);
                            }
                            for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                arr_23 [i_6] [i_6] [i_0] [7] [i_6] = -39669;
                                arr_24 [i_0] [i_2] [i_1] [i_2] [i_2] [i_3] [i_0] = (-9223372036854775807 - 1);
                                var_16 = (-32767 - 1);
                            }
                            for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                            {
                                arr_27 [i_0] [i_1] [i_0] [i_7] [i_7] = ((!(!221)));
                                var_17 = (((~((-(arr_17 [4] [i_1] [i_1] [i_1] [7] [i_1] [i_1]))))));
                                var_18 = 0;
                                var_19 = ((~(((!(arr_9 [i_0] [i_0] [i_0] [i_3] [i_3] [i_0]))))));
                            }
                            var_20 = (max(var_20, (((!(arr_9 [i_0] [i_0] [i_2] [i_3] [i_3] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_21 = ((!(((~(!224))))));
    #pragma endscop
}
