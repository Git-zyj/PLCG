/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1] = ((174 ? (((arr_3 [i_0]) ? 6708330001460565491 : (arr_5 [i_1 - 1]))) : 5));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_3] = ((-16306 > ((max(13093, (arr_8 [i_0] [i_2] [i_1 - 1] [i_3]))))));
                            var_12 = (((((arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) + (arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]))) ^ (((arr_6 [i_1 - 1] [i_1 - 1] [i_1]) ? (arr_8 [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]) : (arr_6 [i_1 - 1] [1] [i_1])))));
                            var_13 = ((((-(arr_4 [i_1 - 1] [i_3]))) + ((max((arr_6 [i_0] [i_1] [i_1]), 65532)))));
                            var_14 = (max(var_14, (((~(((arr_4 [i_2] [i_2]) ? (arr_4 [i_3] [i_0]) : (arr_4 [5] [i_2]))))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = ((!((((var_6 >= var_4) - 65535)))));
    #pragma endscop
}
