/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = 60522624;
        var_18 -= ((((1 <= (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_6 [i_1] = (min((arr_1 [i_1]), (127 != 1)));
        var_19 *= (min(1306, ((19238 ? 46298 : 7))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_20 *= (((((!var_3) ? var_11 : (arr_8 [i_3] [i_3] [i_3])))) ? 4294967280 : ((((1306 ? 46277 : (arr_0 [i_1] [i_1]))) ^ (arr_2 [i_1] [i_1]))));
                    var_21 = (min(var_21, var_14));
                    arr_13 [i_1] [i_2] [i_3] = 4294967295;
                    var_22 ^= 2047;
                }
            }
        }
    }
    var_23 = ((var_1 != (var_16 * var_15)));
    var_24 = ((((((min(var_0, 1))))) ? ((((1 <= -62) != 111))) : var_10));
    #pragma endscop
}
