/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_16 |= (((arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1]) <= (((!(arr_0 [i_0] [0]))))));
                var_17 = (max(((-26694 ? 26693 : (arr_2 [i_1 + 1] [i_1 - 4] [i_1 + 1]))), ((max((!var_12), (arr_2 [i_0] [i_1 - 2] [10]))))));
                var_18 |= (arr_2 [i_0] [i_0] [9]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                var_19 -= (~var_7);
                var_20 = ((!(((arr_6 [i_2]) <= (arr_8 [i_2])))));
            }
        }
    }
    var_21 |= var_9;
    #pragma endscop
}
