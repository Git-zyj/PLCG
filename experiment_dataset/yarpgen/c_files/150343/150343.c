/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (-var_11 >= var_10);
    var_19 = (min(var_19, var_13));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (min(var_20, ((((((1898328503921387673 ? (min(-7639816648439308245, 65535)) : (63 * 52)))) ? 0 : ((1 ? (3743353886 + 1) : 6164455124457904500)))))));
                    arr_9 [i_1] [i_1] [i_1] = (arr_5 [i_0] [i_1]);
                    var_21 = (((((-(arr_3 [i_2] [7] [i_0])))) ? ((var_8 ? var_2 : ((-1779872810803518051 ? var_15 : var_7)))) : ((((var_15 ? var_14 : var_14))))));
                    arr_10 [i_1] [i_1] = ((((((arr_0 [i_0]) | var_7))) ? ((((!(arr_0 [i_1]))))) : (var_15 * var_17)));
                }
            }
        }
    }
    #pragma endscop
}
