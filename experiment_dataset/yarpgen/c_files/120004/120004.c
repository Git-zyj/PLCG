/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = (max(var_20, ((((((min(var_16, var_17)) >> ((((var_0 ? 2254441697811918223 : var_18)) - 2254441697811918175)))) * (((2092800221 >> (17464517865940269163 - 17464517865940269132)))))))));
                arr_7 [i_0] = 62563;
            }
        }
    }
    #pragma endscop
}
