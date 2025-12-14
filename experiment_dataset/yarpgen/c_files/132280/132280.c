/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 *= (2017680005 / -2798148372384916356);
                            var_15 = (max(var_15, (((~15222) - (1061 % 50314)))));
                            var_16 -= ((-0 ? (~5) : (0 >= 0)));
                            arr_11 [i_0] [i_0] [i_0] [i_0] [6] &= (((33488896 / 50313) > ((-(151 + 0)))));
                        }
                    }
                }
                var_17 |= ((((((30 + 4) + -15222))) ? ((-((4294443008 ? 0 : 151)))) : 0));
            }
        }
    }
    var_18 -= (((min(((min(50314, 0))), ((50314 ? 57344 : 370433738)))) <= (((((0 ? 1 : -1))) ? (50314 >= 190172338376245164) : (-9 <= 75)))));
    #pragma endscop
}
