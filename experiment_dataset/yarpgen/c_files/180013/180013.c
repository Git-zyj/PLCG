/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((-(-72 && 254)))) ? 1 : (var_16 == var_1)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_20 = ((((((arr_4 [i_0 - 1] [i_0 + 1]) + 2147483647)) >> (var_12 - 168))) | ((((arr_4 [i_0 + 1] [i_0 + 1]) < 1))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_21 = ((4561728217019940318 ? 18446744073709551592 : 120));
                            var_22 = 4561728217019940339;
                            var_23 = (((arr_9 [i_2]) / (((arr_4 [i_0 - 1] [i_0 + 1]) ? (arr_4 [i_0 - 1] [i_0]) : (arr_4 [i_0 - 1] [i_0 - 1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
