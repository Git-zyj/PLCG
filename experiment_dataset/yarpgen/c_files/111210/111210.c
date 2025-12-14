/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-249 + 2147483647) >> ((min(26854, 0))))) >= ((((((19235 >> (241 - 230)))) >= (max(-6886619818718216328, -55)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = ((5494705862081710708 ? (2047 ^ -83) : 455401959));
                    var_12 = -7274147082143899872;
                    var_13 = 148692702;
                }
            }
        }
    }
    #pragma endscop
}
