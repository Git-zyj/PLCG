/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((!((((0 != 123) >> (((255 + 1663526517) - 1663526751)))))));
    var_15 = ((+(((-60 + 0) | 2147483647))));
    var_16 = ((-4994937001861936854 < (((((-1 + 9223372036854775807) >> 0)) - (-918353383 / -918353374)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (((((-3209787049141008453 - 200) && (-2147483647 - 1))) && (127 % -1005955665)));
                var_18 = 2293869833;
            }
        }
    }
    #pragma endscop
}
