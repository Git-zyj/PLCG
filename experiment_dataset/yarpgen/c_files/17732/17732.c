/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((((((var_12 ? -110 : 126))) ? ((min(var_4, var_14))) : var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 3] [i_2] [i_2 - 2] = ((((min((arr_3 [i_0 + 2] [i_0] [i_0]), ((-124 % (arr_4 [i_0] [i_1] [i_2 + 1])))))) ? ((-119 ? (112 % 22) : ((0 ? 111 : 127)))) : (min((((-110 + 2147483647) << (((((arr_2 [15]) + 4)) - 2)))), ((min(var_9, (arr_1 [i_0] [i_1]))))))));
                    var_18 -= 45;
                    arr_8 [i_0] [i_1] [6] &= ((((((arr_0 [i_0 - 2] [i_2 - 2]) + 73))) ? ((var_3 ? (arr_0 [i_0 - 1] [i_2 + 1]) : (arr_2 [i_2 - 1]))) : (((arr_0 [i_0 - 2] [i_2 - 2]) ? (arr_2 [i_2 + 1]) : -1))));
                }
            }
        }
    }
    #pragma endscop
}
