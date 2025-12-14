/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((~((900385094 ? -16384 : -7248291471853442436))))) && ((!(var_12 & var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_18 = ((((((arr_0 [i_0]) ^ (arr_0 [i_0]))) / ((~(arr_2 [i_0]))))) * (((((((arr_5 [i_0] [i_1] [i_2 + 1]) || (arr_1 [i_0 - 3] [i_0])))) * (((!(arr_1 [i_1] [i_0]))))))));
                    var_19 = (((arr_2 [i_0]) * (((arr_1 [i_0] [i_0]) / (arr_7 [i_0] [i_1] [i_0] [i_2])))));
                    arr_8 [i_0] [i_1] [i_0] = (max(((!(((arr_5 [i_0] [4] [4]) || (arr_5 [i_0 - 3] [10] [i_2 - 1]))))), ((!(~1114824115956635281)))));
                }
            }
        }
    }
    var_20 = ((~(~var_1)));
    var_21 = (((781926022235449103 && 302) * var_5));
    #pragma endscop
}
