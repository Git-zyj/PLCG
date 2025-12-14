/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((11299 ? 58183 : -7249599969184699361));
    var_21 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [8] [i_0] = (((arr_3 [i_0]) ? 1985 : (min((arr_3 [i_0]), (arr_1 [i_0])))));
                var_22 -= 0;
                var_23 += (max(10069356101657507749, 63578));
                var_24 |= (((+(((arr_3 [4]) ? (arr_0 [1]) : 63555)))));
            }
        }
    }
    var_25 = var_19;
    var_26 = var_14;
    #pragma endscop
}
