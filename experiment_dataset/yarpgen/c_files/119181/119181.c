/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (~var_4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 |= (arr_3 [i_0]);
                    var_21 = ((((-(arr_3 [5])) + (-1262024546 - 1))));
                    var_22 = (((((~(arr_6 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2])))) + ((50968 ? (min(50968, 16694589440704450434)) : -6537))));
                }
            }
        }
    }
    var_23 = (max(var_4, (((var_10 * var_13) * var_8))));
    #pragma endscop
}
