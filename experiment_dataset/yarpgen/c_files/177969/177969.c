/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_7 | var_6) << (var_7 - 134)))) ? var_8 : (((((var_6 ? 3036999918743608869 : var_6))) ? var_4 : (var_0 & var_11))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_15 = -4194303;

                            for (int i_4 = 0; i_4 < 15;i_4 += 1)
                            {
                                arr_15 [i_3] [i_3] [i_2] [6] [i_4] [i_1 - 1] = 190;
                                var_16 = (max(var_16, var_0));
                                var_17 = (max(var_17, (((71 ? -67 : 1)))));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                var_18 = (min(var_18, ((((arr_18 [i_3] [i_1 + 1] [i_2] [i_3] [i_5]) ? var_0 : (arr_10 [i_0] [i_1 + 1] [i_2] [3]))))));
                                var_19 = 16792;
                            }
                            var_20 = (max(((var_2 >= ((-(arr_12 [i_0] [i_0] [i_3] [i_3] [14]))))), (1773665535 || 21738)));
                        }
                    }
                }
                arr_19 [i_1] = (((arr_6 [i_0] [i_1]) ? ((min((arr_14 [i_0] [i_0] [0] [i_0] [i_0] [i_0] [6]), var_13))) : (((!(arr_6 [i_0] [i_0]))))));
            }
        }
    }
    var_21 = (((((min(34, var_2))) << ((((var_4 ? 4125774649 : var_12)) - 4125774634)))));
    #pragma endscop
}
