/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = ((!(arr_12 [i_0])));
                                var_21 ^= (-120 > 1645734274);
                            }
                        }
                    }
                    var_22 = (arr_9 [i_0 + 3] [i_0 + 3] [i_1 - 2] [i_1] [11] [11]);
                    var_23 = (min(((((min(var_3, 1))) && (((127 ? -125 : 59367))))), (((var_18 <= 2128809532) && (arr_3 [i_0] [i_1 + 2] [i_2])))));
                }
            }
        }
    }
    var_24 += ((var_19 ? (((var_17 && 13450) ? -var_2 : -1)) : var_18));
    var_25 = (((((((min(54766, var_3))) <= ((max(-24, -1)))))) <= (~52720)));
    #pragma endscop
}
