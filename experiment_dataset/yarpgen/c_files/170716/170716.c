/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min(1, 1);
    var_21 -= max(235, 6);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_0] = ((((min(-468632081, 32767))) ? (min(18446744073709551615, (((1 ? 0 : 1))))) : (max((((-468632081 ? 46574 : 1073741568))), (min(16972333679576420588, 21132))))));
                    arr_8 [6] [3] = min(606831460, (max(4176747636024579111, 19452)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_14 [1] [i_1 + 1] [i_2] [i_3] [i_4] = ((((min(1, (max(-51, 32212254720))))) ? 0 : 4433230883192832));
                                var_22 ^= min(((min(-1018684150, 120))), (min(10, 0)));
                            }
                        }
                    }
                    var_23 = ((((((max(62, -7117586674520063147))) ? 2923 : 3960810395105549573))) ? (min(-4595362152254126665, ((-4433230883192833 ? 0 : 7117586674520063142)))) : 3970844629);
                }
            }
        }
    }
    var_24 += ((var_11 ? ((((max(-30, -125))) ? 30 : (((65535 ? 0 : 0))))) : var_5));
    #pragma endscop
}
