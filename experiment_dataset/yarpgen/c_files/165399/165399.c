/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    var_19 = (max(var_19, var_16));
    var_20 = (((var_5 ? 15277163610020628001 : (min(var_13, 9223372036854775808)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_21 |= (min((((-4 ? ((min(250, 1))) : (arr_0 [i_0])))), 2534114664));
                var_22 -= (((((arr_0 [i_1]) ? 2147483641 : (arr_1 [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 17;i_4 += 1)
            {
                {
                    var_23 = 998620747;
                    arr_12 [i_2] = ((min((arr_4 [i_2]), var_14)));
                }
            }
        }
    }
    #pragma endscop
}
