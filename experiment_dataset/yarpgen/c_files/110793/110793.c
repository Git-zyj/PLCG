/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    var_11 -= var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    var_12 = (((!23) ? var_1 : ((~(((arr_0 [i_2]) & 4091447400))))));
                    var_13 = ((((min((3 - -75), (arr_5 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2])))) ? (((-((233 ? 1 : 19))))) : (((min(4091447426, var_6)) - (arr_3 [i_0] [i_1] [i_2 + 1])))));
                }
                arr_7 [i_0] = min(1947380109, (!var_2));
                arr_8 [i_0] = (((((var_5 ? 22 : 2347587186))) ? (arr_0 [i_1]) : (((!203519875) ? ((30720 ? (arr_5 [i_0] [13] [i_1] [i_0]) : 2347587192)) : (arr_5 [i_1] [i_1] [i_1] [i_1])))));
                arr_9 [i_0] [i_0] = (arr_5 [1] [1] [1] [i_1]);
            }
        }
    }
    #pragma endscop
}
