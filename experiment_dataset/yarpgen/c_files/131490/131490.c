/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131490
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_1] = (arr_5 [i_0] [6] [i_1]);
                arr_7 [i_1] [i_1] = 8776867501120643086;
            }
        }
    }
    var_12 = (((((-8776867501120643087 ? -26921 : (var_6 > var_10)))) - ((1489649219 ? (!8776867501120643094) : ((21680 ? 4294967291 : var_2))))));
    #pragma endscop
}
