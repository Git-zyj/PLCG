/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((1346000232145226144 != 15706396296852352959), 17100743841564325471))) ? var_4 : (max(15706396296852352959, 1346000232145226132))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = 15706396296852352959;
                var_17 |= (+-2147483641);
            }
        }
    }
    var_18 = 17100743841564325472;
    #pragma endscop
}
