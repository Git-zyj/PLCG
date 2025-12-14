/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -27;
    var_16 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_0] [1] = (((((min(var_1, 65535)))) * (((((~(arr_5 [7] [0] [i_1]))) >= 4294967295)))));
                    arr_9 [i_0] [i_1] [i_2] [i_1] = (((min(16231497379293794831, 56))));
                    arr_10 [i_0] [0] |= (arr_2 [i_2]);
                    var_17 = (max(var_17, ((((((-((~(arr_0 [i_0])))))) ? 330458049 : (((arr_4 [i_1 - 1] [i_1] [i_1]) ? (arr_5 [i_1] [i_1 - 1] [i_1 + 1]) : ((-(arr_5 [i_0] [i_1] [i_2]))))))))));
                }
            }
        }
    }
    var_18 -= ((((!(~var_3))) ? ((min(((1 ? var_10 : var_7)), 28123))) : ((max(var_13, 2454386289)))));
    #pragma endscop
}
