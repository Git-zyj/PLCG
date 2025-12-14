/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_3);
    var_14 = ((~(((var_0 >= ((min(var_11, var_4))))))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((~(var_10 * var_5))), var_7));
        arr_3 [i_0] [i_0] = (((((-96 ? 120 : 1300)) >= (((arr_1 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_8 [i_1] = ((((((arr_4 [i_1] [i_1]) - (arr_4 [i_1] [i_1])))) ? (((arr_5 [i_1] [i_1]) ? var_4 : (arr_4 [i_1] [i_1]))) : -var_10));
        arr_9 [i_1] = (max((min((max(var_2, (arr_7 [i_1]))), var_9)), (max(var_1, (max(65535, 0))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_16 [i_2] [7] = ((-(+-211)));
                var_15 = (max((max((arr_10 [i_2]), (arr_10 [i_3]))), var_3));
                arr_17 [i_3] [i_2] = (max((((+(((arr_10 [i_2]) ? var_12 : (arr_15 [i_2] [i_3] [i_3])))))), (arr_12 [i_2])));
                var_16 = (max(var_16, ((((~var_0) ? (arr_12 [i_3]) : (min((((var_11 ? var_11 : (arr_13 [i_2])))), ((var_6 ? (arr_13 [i_2]) : (arr_14 [i_3]))))))))));
            }
        }
    }
    #pragma endscop
}
