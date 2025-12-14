/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = ((min(2147483647, -514941303)));
                var_19 = (((((-255 | (-32764 * -26129)))) ? (min((max(3882, 3018426742457823053)), 10035)) : ((((((-514941308 ? 10024 : -13248))) ? ((1649235484 ? 26129 : 0)) : -233967991)))));
            }
        }
    }
    var_20 = var_16;
    #pragma endscop
}
