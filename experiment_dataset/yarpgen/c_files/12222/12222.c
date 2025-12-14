/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= -30633;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 ^= 492008143;
                    var_15 = (min(((((!(arr_0 [i_0] [i_1]))) || (arr_3 [i_1 + 2] [i_1]))), ((((max(1024, var_11))) && -5156379305173415804))));
                    var_16 = (((52629 ? 64343 : 10242)));
                }
            }
        }
    }
    var_17 = 1664405783;
    #pragma endscop
}
