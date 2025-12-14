/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (min(2, -15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                var_12 = (min((+-1), (--84)));
                arr_4 [i_1] [i_1 + 2] = (~9);
                var_13 -= (min((((min(-7, 4319371325042061399)) > ((-13 ? 15701056841069714687 : 18)))), ((!((min(65531, 9223372036854775807)))))));
                var_14 *= 14371012669098634237;
            }
        }
    }
    #pragma endscop
}
