/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(var_10, var_7)) & var_11);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_0] = 1;
                    var_15 &= (max((arr_2 [i_0] [i_1] [i_2]), (min((arr_2 [i_0] [i_1] [i_2]), (min(0, 5733209286593014203))))));
                    var_16 ^= (((min((max(12713534787116537398, (arr_5 [i_1] [i_1] [i_1]))), ((((arr_0 [i_0] [i_0]) ? var_9 : 25)))))) ? var_7 : ((((((max((arr_0 [i_0 - 3] [i_0]), (arr_2 [i_0] [i_1] [i_2])))) <= (arr_1 [i_1]))))));
                    arr_7 [1] [i_0] [i_2] = (max(18446744073709551596, ((+(min((arr_1 [i_0]), (arr_4 [i_0] [i_0])))))));
                    arr_8 [i_0] [i_1] [6] [i_0] = (((((~((65535 & (arr_0 [i_0] [i_0 - 1])))))) ? (min((arr_2 [i_0 + 1] [i_0] [i_1 + 2]), (arr_2 [i_0 - 2] [8] [i_1 + 4]))) : (arr_5 [i_0] [i_1] [i_0])));
                }
            }
        }
    }
    #pragma endscop
}
