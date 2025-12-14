/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (min((((((1958779458 ? -22697 : 5832717947951072838))) ? ((var_16 ? 5832717947951072838 : 22697)) : (1 | var_13))), (((((min(1958779458, -55))) && var_4)))));
    var_19 |= max(((var_13 << (((2147483647 * var_14) - 1504618155)))), (((((min(var_3, var_3))) + (1249486887 != -761)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 *= (12198748010803610422 && -1);
                    arr_9 [i_2] [i_0] [i_0] = (max((min(0, (((arr_4 [i_0] [i_0]) ? (-32767 - 1) : (arr_4 [i_0] [i_0]))))), ((-(((arr_8 [i_1] [i_1] [i_1]) ? (arr_6 [i_0]) : (arr_8 [i_0] [2] [i_0])))))));
                }
            }
        }
    }
    var_21 ^= ((-(((-1 + var_6) ? var_4 : (var_1 == var_10)))));
    #pragma endscop
}
