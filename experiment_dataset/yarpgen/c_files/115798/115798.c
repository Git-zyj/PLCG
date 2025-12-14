/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115798
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
                arr_4 [14] = (((((var_9 ? (arr_2 [i_1]) : (arr_3 [i_0] [i_0] [i_0])))) ? var_7 : (((((~2425918052347882146) < (arr_1 [i_0])))))));
                arr_5 [i_0] [i_0] = (80 / 2147483647);
                arr_6 [i_1] [i_0] = (min(((7199806542249571837 << ((((arr_1 [i_0]) >= 2147483647))))), ((((arr_1 [i_0]) ? (arr_1 [i_1]) : (arr_1 [i_0]))))));
                var_12 = (min((min(71, 71)), ((((arr_3 [i_1] [i_1] [i_0]) != (arr_3 [i_0] [i_0] [i_0]))))));
                arr_7 [i_0] = (((var_11 % (max(var_2, (-2147483647 - 1))))));
            }
        }
    }
    var_13 = (max((var_4 * var_10), ((~((var_0 << (((var_7 + 8922713480128159034) - 20))))))));
    var_14 = 17582;
    #pragma endscop
}
