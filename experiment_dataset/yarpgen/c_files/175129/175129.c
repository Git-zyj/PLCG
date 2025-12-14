/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((!((max(var_11, var_5)))))), ((192 ? 192 : var_11))));
    var_13 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_7 [9] [9] [9] = -1531594293;
                var_14 = ((-(((var_3 >= (max(-921819157, var_2)))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((-(arr_1 [i_1]))))));
                            arr_12 [i_0] [i_1] [i_2 - 1] [i_1] = ((((!(arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])))) <= (((!(((arr_2 [i_0]) && (arr_9 [i_1] [7] [i_1])))))));
                            arr_13 [i_1] [10] [10] &= (((arr_9 [1] [3] [0]) < (min((21216 && var_2), -1098680446))));
                        }
                    }
                }
            }
        }
    }
    var_16 *= 519127974;
    var_17 ^= max(((max(var_1, (var_7 <= 0)))), var_6);
    #pragma endscop
}
