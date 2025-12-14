/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (min(((-2027143452 ? 11679906184793093414 : 2475637290577344538)), (11679906184793093414 ^ 5469588539416247360)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = 6766837888916458207;
                var_20 = (min(var_20, (((-var_15 != ((-(~var_7))))))));
                var_21 = 381461484;
            }
        }
    }
    #pragma endscop
}
