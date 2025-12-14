/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_15 += (-(((((min((arr_1 [i_1 + 1] [i_0 + 2]), var_2)))) * 2251799545249792)));
                arr_6 [i_0] [i_0] = (((((((((arr_0 [i_0] [i_1]) * var_7))) ? (arr_4 [i_1] [i_0] [i_0]) : (((((arr_1 [i_0] [i_0]) <= (-127 - 1)))))))) ? ((1 / (arr_4 [i_1 + 2] [i_1] [i_1]))) : ((((arr_0 [i_0 + 2] [i_0 + 2]) >> (((arr_3 [i_1 + 2]) + 5553172712301362722)))))));
                arr_7 [i_0 - 1] = (-65517 * 27);
                arr_8 [i_1] [i_1] = (((((arr_0 [i_0] [i_0]) & 115)) - 2147483636));
                arr_9 [i_0] [i_0] [i_1] = ((var_10 <= (min(2251799545249773, 253))));
            }
        }
    }
    var_16 = (min((var_1 + var_1), ((((min(var_11, -2147483627))) ? ((var_4 ? var_8 : var_8)) : var_14))));
    #pragma endscop
}
