/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_14 = (+(((((24 ? (arr_0 [i_2]) : -2046179544))) + ((127 ? (arr_4 [i_0] [i_0] [i_0 + 2] [i_0]) : (arr_2 [i_0] [i_0 + 3] [i_0]))))));
                    var_15 = (min((((arr_3 [i_0] [i_0 + 2]) / (arr_3 [i_0] [i_0 + 2]))), ((var_1 ? (((!(arr_3 [i_0] [i_0])))) : -31949))));
                    var_16 = (((arr_2 [i_2] [i_1] [i_2]) ? ((~((max(127, 141))))) : (((var_3 % (arr_0 [i_2]))))));
                    arr_6 [i_0] [i_1] [i_0] [i_0] = 48;
                }
            }
        }
    }
    #pragma endscop
}
