/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 += (~-118);
                                var_14 = (min(var_14, (((~((~(arr_9 [i_3] [4] [i_2] [i_3] [2]))))))));
                                var_15 = ((!((!(!114)))));
                            }
                        }
                    }
                }
                var_16 = ((((!4186721873647044938) & (~var_1))));
                arr_14 [i_1] |= (((~(-309293223 && 3421706085311399258))));
            }
        }
    }
    var_17 = (min(var_17, (((-(~-var_8))))));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                var_18 = (~((~(~var_10))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_19 = ((~(!8160)));
                            var_20 = ((!((!((!(arr_16 [i_8])))))));
                            var_21 = (max(var_21, (!var_7)));
                            var_22 = (-var_6 / -var_2);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
