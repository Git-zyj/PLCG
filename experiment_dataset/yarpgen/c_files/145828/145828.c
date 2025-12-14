/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_4));
    var_12 = ((!((max(-5272279776740767536, (max(63, var_8)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_2] &= ((((((arr_5 [i_0]) ? 59402 : (arr_0 [i_1])))) == ((687344166 ? ((min(var_2, 1086434922))) : (arr_7 [i_0] [i_1])))));
                    arr_12 [i_0] [i_1] [i_1] [i_1] = var_6;
                }
            }
        }
    }
    var_13 = 65535;
    #pragma endscop
}
