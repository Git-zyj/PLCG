/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (1 & 818994941);
                arr_4 [i_1] [i_1] [i_0] = (max(((((!-32763) || (0 || 1)))), (((~16140901064495857664) ? ((1 ? 3698330633 : 8397296440241392153)) : 1))));
                arr_5 [i_0] &= ((+(((1 * 1) * (1 / 11)))));
                arr_6 [i_1] [i_0] [i_0] = -3115869997;
            }
        }
    }
    var_11 = ((((((((0 ? 1179097299 : 1))) ? -1597214101350034504 : (min(4637044379384706514, 13809699694324845102))))) || (((((1 ? -7 : -2443)) & ((max(1, 1))))))));
    var_12 = (((min(var_7, (!57140)))));
    #pragma endscop
}
