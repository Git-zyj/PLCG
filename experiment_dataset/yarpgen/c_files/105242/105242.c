/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((((~(min(var_12, (arr_0 [i_0])))))) ? (~var_10) : ((119 ? 2892230805 : (((var_10 ? (arr_0 [i_0]) : var_8)))))));
                var_14 += (max(((0 ? -11 : 70)), ((var_6 ? var_0 : -11))));
                var_15 = ((var_1 ? 1 : 128));
                var_16 = (119 >= 46880);
                var_17 = (((arr_3 [i_1 + 2]) ^ (((((17506 | -38) + 2147483647)) << ((((var_9 << (var_3 - 45762))) - 1520))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 23;i_3 += 1)
        {
            {
                arr_12 [i_2] = (((!var_4) ? 2892230831 : ((var_5 ? (arr_6 [i_2 - 3]) : 128))));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_16 [i_2] = ((((((arr_13 [i_2]) ? (arr_13 [i_2]) : var_6))) ? ((min((arr_13 [i_2]), (arr_13 [i_2])))) : (arr_13 [i_2])));
                    arr_17 [i_2] [6] [i_2] [i_2] = ((var_1 ? (((arr_11 [1] [i_3] [i_4]) ? -11 : ((~(arr_6 [i_2]))))) : ((max(var_2, (((arr_11 [i_2] [i_2] [i_2]) >> (((arr_11 [i_2] [i_3] [i_3]) - 65100)))))))));
                }
            }
        }
    }
    #pragma endscop
}
