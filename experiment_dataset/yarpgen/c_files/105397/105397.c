/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = ((((((((33124462 ? 1 : -2097196506))) ? var_5 : 0))) || ((min(var_15, (arr_4 [6] [i_0] [i_2] [6]))))));
                    arr_7 [i_0] = (((arr_3 [12]) ? ((((min(1, 1124715532)) % 164))) : ((var_11 ? ((min(1421582051, var_5))) : (min(1, var_4))))));
                    arr_8 [1] [i_0] [11] = ((min(((min(var_15, var_3))), 9223372036854775807)));
                }
            }
        }
    }
    var_18 = -1708250178;
    #pragma endscop
}
