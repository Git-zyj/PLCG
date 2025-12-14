/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 1;
    var_17 = (min(var_17, ((min((((!(-115 + 11125)))), var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_18 = 3759748009;
                var_19 = (max((((((-(arr_0 [i_1])))) <= var_13)), (arr_3 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_20 |= 11007289382616537649;
                            var_21 *= (34596 + var_12);
                        }
                    }
                }
                var_22 = ((arr_5 [i_1 - 2] [i_1 + 3] [i_1 + 2]) % (~8035817343722634877));
                var_23 = (arr_2 [i_0] [i_1 - 2] [i_0]);
            }
        }
    }
    var_24 |= ((((max(var_12, 10))) ? ((max(3759748008, var_1))) : ((min(var_11, -7821300642783580636)))));
    #pragma endscop
}
