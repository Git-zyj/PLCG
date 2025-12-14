/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 3961747184;
    var_13 = 4291273837;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_14 -= ((((3693446 / ((63555 ? 14418824954716313 : 4291273855)))) >> ((((~((32748 ? 3693453 : 36)))) - 4291273785))));
                var_15 = 32767;
                var_16 = (6115406669637053063 + 0);
            }
        }
    }
    var_17 = (max(var_17, 920416409));
    #pragma endscop
}
