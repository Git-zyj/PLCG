/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 7;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 = 142708794;
                                var_21 += (~((var_1 % (142708811 == 142708811))));
                                arr_13 [8] [4] [i_3] [i_2] [i_3] [7] [i_4] = ((((var_7 - (max(49846, 18446744073709551615))))) ? (((var_0 * var_13) ? var_6 : var_9)) : ((((((-1 ? -1126908808071892441 : var_15))) ? (var_1 - var_11) : -142708811))));
                                var_22 -= ((((!((!(-2147483647 - 1))))) ? var_7 : 142708792));
                            }
                        }
                    }
                }
                arr_14 [i_0] [8] = (((((+((142708806 << (((var_10 + 1690082874) - 22))))))) ? 49846 : ((((14537925260643319280 + var_3) ? (min(3262607065267918491, -1)) : (((var_14 ? -96 : -142708812))))))));
            }
        }
    }
    #pragma endscop
}
