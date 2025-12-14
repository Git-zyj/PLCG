/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((min((((min(-29883, 17321101943350289295)) >> ((((min((-32767 - 1), 0))) + 32824)))), ((max((min(30046, 120)), (254 <= 0)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((max(-846652250, 524287)))));
                var_12 = 3714631560883154476;
                var_13 = (((min((max(846652250, 846652250)), ((min(0, 37041))))) | ((max((max(-54, 255)), (6 != 253))))));
            }
        }
    }
    #pragma endscop
}
