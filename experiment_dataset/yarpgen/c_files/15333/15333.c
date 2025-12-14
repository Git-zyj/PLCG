/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = 1426346;
                var_17 |= ((((((((10078907986674648188 ? 1772088754 : (arr_1 [i_1])))) ? ((106 ? -91 : 1776182265)) : (arr_3 [i_1] [i_1])))) | (((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_1]) : (2316204642 >= -470478852)))));
            }
        }
    }
    var_18 = (min(var_18, (((((((((7367103561241584355 << (var_10 - 46))) <= (~var_11))))) == var_11)))));
    #pragma endscop
}
