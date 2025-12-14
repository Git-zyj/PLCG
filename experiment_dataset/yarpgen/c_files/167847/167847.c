/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    var_11 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (min((max(((var_7 ? 4 : (arr_3 [i_1 + 1]))), ((((arr_3 [22]) ? (arr_2 [16]) : (arr_1 [16])))))), (((-1299768288 >= ((((!(arr_3 [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2 - 1] [i_2] [2] [i_3] = ((-((var_7 ? (arr_1 [i_1 - 1]) : var_3))));
                            var_13 = (min(var_13, ((max(((max((arr_4 [i_1 + 1]), (arr_8 [i_2 - 2] [i_2 - 2] [i_1 - 1])))), ((((max((arr_0 [i_0] [i_1 - 2]), -1299768288))) ? (arr_4 [i_0]) : -1299768295)))))));
                        }
                    }
                }
                arr_11 [18] [1] = ((((((var_7 >= (arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 1]))))) <= (((arr_5 [i_0]) ^ (max(-1299768295, var_5))))));
            }
        }
    }
    #pragma endscop
}
