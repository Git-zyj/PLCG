/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 *= (((-127 - 1) ? 31 : 0));
        arr_3 [i_0] = 44;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = 224;
        arr_9 [i_1] [i_1] = 194;
        arr_10 [i_1] = ((((215 ? 31 : 224))) ? 1 : (((((224 ? 223 : 31))) ? ((1 ? 229376 : 31)) : 30)));
        var_15 ^= (((((430295624 ? 124 : 8))) ? 226 : 0));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        arr_14 [i_2] = 225;
        arr_15 [i_2] [3] = 224;
    }
    var_16 = 3864671668;
    var_17 = 225;
    var_18 = ((1 ? 30 : (((((16256 ? 229 : 2964566644759571889))) ? ((16384 ? -13145 : 224)) : var_11))));
    #pragma endscop
}
