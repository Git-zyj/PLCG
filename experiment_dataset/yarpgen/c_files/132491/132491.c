/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((var_12 | var_17), var_2));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_20 = (max(2956154850, ((min((arr_4 [i_0 - 2] [i_1] [i_0 - 2]), (1519796619667060376 && 16926947454042491239))))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_2] [11] = ((-((((var_18 ? var_5 : (arr_5 [20] [3])))))));
                        var_21 = (min((min((arr_9 [i_2 + 1] [i_2 + 2] [i_0 + 2] [i_0 - 2]), 79)), ((~((-(arr_5 [i_0 + 2] [i_1])))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_19 [i_5] [i_5] = 109;
                        var_22 = ((72 == ((min(4294967295, var_15)))));
                        arr_20 [i_5] [i_5] [i_4] [i_5] = ((((min((arr_7 [i_0] [i_4] [i_5 - 1] [18]), ((0 ? var_7 : 520002075))))) ? (arr_14 [i_6]) : ((min(22575, 129)))));
                    }
                }
            }
        }
        var_23 = (min(var_23, (((~(max((~var_3), (15 * 8598968307298538037))))))));
    }
    var_24 = var_9;
    #pragma endscop
}
