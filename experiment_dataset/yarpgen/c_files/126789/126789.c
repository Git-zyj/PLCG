/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-9022636808406329423 ? 4140018025425554438 : -9022636808406329425));
    var_20 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, ((~(((min(14306726048283997188, (arr_2 [i_0] [i_0])))))))));
                    var_22 = ((9022636808406329422 ^ (((arr_1 [i_0]) | (arr_0 [i_1])))));
                }
            }
        }
    }
    var_23 = (min(43581, (min((min(9022636808406329435, var_8)), (((-11240 ? var_14 : var_11)))))));
    var_24 = (min(var_24, var_2));
    #pragma endscop
}
