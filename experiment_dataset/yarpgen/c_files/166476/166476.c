/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((min((((15 >> (9223372036854775804 - 9223372036854775775)))), var_8)), var_4));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? ((min(((((arr_4 [1] [i_0] [i_0]) << (((max(var_10, (arr_1 [i_0]))) - 505349879))))), (((((min(218, 0)))) ^ ((var_10 ? 5144029653416887287 : (arr_6 [i_0])))))))) : ((min(((((arr_4 [1] [i_0] [i_0]) << (((((max(var_10, (arr_1 [i_0]))) - 505349879)) + 505349894))))), (((((min(218, 0)))) ^ ((var_10 ? 5144029653416887287 : (arr_6 [i_0]))))))));
                arr_9 [i_0 - 1] [18] [i_1] |= (arr_5 [i_0]);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                {
                    arr_17 [i_2] [8] = (((((((arr_10 [i_3 + 2] [i_3]) == (max(var_6, var_6)))))) == (((arr_3 [i_2] [i_3 + 1]) ^ (arr_3 [i_2] [i_3 + 1])))));
                    arr_18 [i_2] [i_2] [i_4] = ((0 ? ((1 ? 1 : 1)) : 0));
                }
            }
        }
    }
    #pragma endscop
}
