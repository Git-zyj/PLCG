/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_11 ^= (((arr_4 [i_0 + 1]) ? (arr_4 [i_0 - 2]) : (((arr_2 [i_0 + 1]) ? (arr_4 [i_0 - 3]) : (arr_4 [i_0 - 3])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_12 = 10451116647961912435;
                    var_13 ^= 0;
                }
                var_14 = var_5;
                arr_10 [i_1] [i_0] [19] = (arr_9 [i_1 + 2]);
                arr_11 [i_0] = (((arr_1 [i_1 + 2]) ? (max((arr_2 [i_0 - 1]), ((12575667848867121027 ? 7995627425747639180 : 0)))) : (((~7995627425747639181) ? (((-39 ? 1048214133 : 19))) : ((3887665644 - (arr_4 [i_0])))))));
            }
        }
    }
    var_15 = var_5;
    #pragma endscop
}
