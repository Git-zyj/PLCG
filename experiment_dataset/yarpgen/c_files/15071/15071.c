/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (!18);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((18 << ((((~((-14654 ? 15419167817857403164 : 18441)))) - 3027576255852148442))));
                var_16 = (((4294967295 | 1) ? (((arr_2 [i_1]) & (arr_2 [i_0]))) : 2364021017));
                arr_6 [i_0] = 1;
                var_17 = -20591;
            }
        }
    }
    var_18 = var_11;
    #pragma endscop
}
