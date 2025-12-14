/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 4095;
    var_16 = ((((((!(6529248004031946532 && var_7))))) + (((max(var_2, 1)) * (1261206555037896506 < 6529248004031946532)))));
    var_17 &= (((((-(18446744073709547521 / var_13)))) && (~4080)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_18 = (min(var_18, 4095));
                var_19 = (arr_2 [i_0 + 4] [i_1 + 2] [i_1]);
            }
        }
    }
    #pragma endscop
}
