/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (1004355846 * var_1)));
                arr_4 [i_0] [14] = 1549371256;
            }
        }
    }
    var_19 |= (((min(2745596038, 89)) >> (((min(var_13, (178 == var_2))) + 616756459))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 19;i_3 += 1)
        {
            {
                arr_10 [i_2] [i_2] = (((((19506 ? 15147912119680914904 : 1))) ? (((3370635503 ? ((6509 ? 166 : var_11)) : -2058296129))) : 3065139388));
                arr_11 [i_2] = -3;
            }
        }
    }
    var_20 += (min(46057, 2656450603049889087));
    #pragma endscop
}
