/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((max((arr_1 [i_0] [5]), ((((arr_0 [i_1]) != -499628953179362158))))) % var_9));
                var_21 = ((((~((var_16 | (arr_3 [i_1] [i_0] [i_0]))))) > ((((!(arr_3 [i_0] [i_1] [i_1])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {

                /* vectorizable */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    var_22 -= (var_1 <= 0);
                    arr_13 [i_2] [i_2] [i_2] = (arr_7 [i_3]);
                }
                var_23 = 134216704;
                arr_14 [i_2] [i_2] [i_2] = 246;
                var_24 += var_17;
            }
        }
    }
    #pragma endscop
}
