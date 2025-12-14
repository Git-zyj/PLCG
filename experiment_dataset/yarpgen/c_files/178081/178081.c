/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 ^= ((-32767 - 1) ? (((1 && (((32759 ? -46 : 2147483647)))))) : var_8);
                    var_18 += 32766;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 ^= (!26995);
                                var_20 += ((((~(arr_5 [i_0])))) ? (min(((min(var_4, var_9))), var_6)) : ((min((arr_2 [i_1] [i_2] [i_4]), var_5))));
                                var_21 = ((((min((arr_10 [i_0] [i_0] [i_3] [i_3] [i_4] [i_4] [i_3]), (arr_10 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0] [i_0])))) ? (min(1, -8)) : ((0 ? 56864 : 494012845))));
                                var_22 = (((!((min(var_2, (arr_7 [i_0] [i_0] [i_2] [10] [i_4])))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] = ((29966 ? -494012844 : (3756624042 % 16911482019287657492)));
                                arr_18 [i_0] [10] [i_0] [i_5] [i_6] = (((~-100) < ((var_4 ? (arr_5 [i_5 + 2]) : var_6))));
                                var_23 = var_1;
                                var_24 = ((6361427101620476092 ? ((3823942155181814498 ? 0 : (((arr_0 [i_6]) ? 16911482019287657492 : 150)))) : var_9));
                                arr_19 [i_2] [i_2] [i_1] = (!268435448);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
