/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = ((((((var_8 - var_4) % (~var_4)))) < (min(((8388607 ? var_2 : var_0)), 79))));
                var_12 = ((var_5 ? ((var_5 ? var_4 : ((-(arr_2 [i_0]))))) : ((max(var_7, (~65535))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_13 = (min(var_13, ((((arr_4 [i_0 - 3] [i_2 - 3]) || ((!(3875229210 || var_3))))))));
                            var_14 = ((((((var_7 ? var_9 : (arr_2 [i_0])))) ? var_4 : 171)));
                            arr_9 [i_3] [6] [6] [1] = var_8;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_15 *= 0;
                            var_16 = (min((((var_1 > var_5) ? ((~(arr_5 [8] [i_5]))) : (!var_3))), (arr_14 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 1] [i_0])));
                            var_17 = (((~0) || ((max(var_7, (arr_12 [i_0] [14] [i_0 + 2] [i_5] [i_4]))))));
                            arr_15 [i_0] [i_1] [i_4] [i_0] [i_5] [i_1] = var_1;
                            var_18 += (((arr_13 [i_0] [i_0] [i_0] [13] [i_0] [i_5]) <= (max(((((arr_4 [i_0] [i_4]) < var_7))), (min(var_9, (arr_6 [i_5] [14] [i_4])))))));
                        }
                    }
                }
                var_19 = (min(-11627, (arr_7 [i_1] [10])));
            }
        }
    }
    #pragma endscop
}
