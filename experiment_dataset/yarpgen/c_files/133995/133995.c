/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = (((+-789890279282487353) ? ((236 ? 2199014866944 : 789890279282487353)) : (33716 - -789890279282487350)));
                    arr_7 [i_0] [i_0] [i_0] = (min((((~((234 ? -789890279282487356 : (arr_4 [i_0] [i_1] [i_2] [i_2])))))), ((((min((arr_4 [i_0] [i_1] [0] [i_2]), 10164))) ? ((var_2 ? 1 : (arr_3 [i_0] [i_0]))) : (arr_5 [i_0] [i_2])))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (((!((min(var_1, (arr_5 [i_0] [i_1])))))) ? ((((min(6108829925039737651, var_0))) ? ((44292 ? 147 : 4546759674601256944)) : (11844772463833478545 || 47))) : (121 || 5));
                    var_14 = (-0 != -789890279282487354);
                }
            }
        }
    }
    #pragma endscop
}
