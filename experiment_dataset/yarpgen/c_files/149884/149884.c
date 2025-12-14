/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((((arr_0 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) != var_1));
        var_17 = (((arr_1 [i_0]) != (4186159972434094237 != -4186159972434094237)));
        var_18 = ((0 >= ((-(arr_1 [i_0])))));
        var_19 = ((4186159972434094237 != ((-4186159972434094237 & (arr_0 [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                var_20 += 5321924947931531007;
                arr_11 [i_1] [i_2] = (min(-7662403553318077416, ((12795 ? (8924443372488150953 != 7745721032247221903) : 6472319857237190664))));
            }
        }
    }
    var_21 = var_1;
    #pragma endscop
}
