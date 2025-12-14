/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166006
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = (!-8685406329077953894);
                var_13 = (arr_1 [i_1 + 1]);
                var_14 = var_2;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_15 = var_10;
                                var_16 -= 419263460;
                                arr_15 [i_0] [i_3] [i_2] [i_3] [i_3] = (((8685406329077953884 ? (((8685406329077953919 ? 5203 : -8685406329077953920))) : (10647484927053743532 / 2040950841))));
                                arr_16 [i_3] [i_1] = (arr_11 [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 -= (min(((var_5 ? -44 : ((10647484927053743530 ? 6325866276080175231 : 27946)))), var_10));
    var_18 = 7799259146655808086;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            {
                var_19 = ((((min(7799259146655808083, 25890))) ? (((arr_3 [i_6] [i_6 + 1]) % var_11)) : (((((arr_3 [i_6 - 1] [i_6 - 1]) || (arr_3 [i_6] [i_6 - 1])))))));
                var_20 ^= (((min((min((arr_9 [15] [i_5]), var_9)), (min(var_6, var_10))))) ? (!8685406329077953928) : ((-628245836595679273 ? (arr_0 [i_6 - 1] [i_6]) : (arr_0 [i_6 - 1] [i_6 + 1]))));
                var_21 = ((var_4 ? (min((arr_5 [i_5] [i_5]), var_3)) : (((var_5 && (arr_0 [i_6 - 1] [i_5]))))));
            }
        }
    }
    #pragma endscop
}
