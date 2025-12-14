/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 126;
    var_18 ^= ((128 ? 126 : ((((var_2 < -106) < -6891)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, (((max(((-106 ? 126 : 6)), (arr_1 [i_1])))))));
                    var_20 = ((var_11 ? (((((var_9 ? 10 : 1))) ? 5217 : ((((arr_1 [i_1]) != 6915))))) : 126));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 -= ((((min(15539527322077161685, var_12)) <= (6878 == 18446744073709551615))) ? ((((5796811676323799565 * 0) - (((max(1, 1))))))) : ((7 ? 15194388170333701663 : (arr_5 [i_0]))));
                                var_22 -= ((~(var_11 > 4)));
                            }
                        }
                    }
                    var_23 = (((((!106) ? (6891 % 18446744073709551615) : (-106 + 2436222782506766750))) - (((((max(-6890, 42796))) ? (((min(-1958, 39451)))) : ((18446744073709551615 ? 1 : (arr_5 [i_0]))))))));
                    var_24 = 1;
                }
            }
        }
    }
    var_25 -= var_4;
    var_26 = (max(var_26, (((((((-18439 ? 1 : 39451)))) % (((26104 ^ 7412) + 11190312747173324689)))))));
    #pragma endscop
}
