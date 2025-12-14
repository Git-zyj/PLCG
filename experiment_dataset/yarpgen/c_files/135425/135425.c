/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 = ((2086077761 ? 9 : 1873435212));
                    arr_11 [i_1] [i_0] [i_0] [i_1] = ((~((72 ? 9175 : 16868515080680264786))));
                    var_17 ^= ((0 ? 2 : (!2199023255552)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, (((-((4632190758847968170 ? -0 : (((81 ? -2199023255552 : 1))))))))));
                                var_19 = (min(var_19, ((((((23 ? -1587834464 : 65535))) ? ((0 ? -1 : 3)) : (-127 - 1))))));
                            }
                        }
                    }
                    var_20 -= ((((-28607 ? (~1) : 32759))) ? ((-1719576904 ? -56 : 7120570934243169033)) : 114);
                }
            }
        }
    }
    var_21 = var_4;
    var_22 = var_1;
    #pragma endscop
}
