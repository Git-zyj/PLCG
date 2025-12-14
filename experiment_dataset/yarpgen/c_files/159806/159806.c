/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = -2692528496899767792;
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = (max((((((min((arr_9 [i_0] [i_0]), var_4))) ? 1 : (min(215, 2047))))), (max(4611686018427387903, var_6))));
                                var_22 = var_8;
                            }
                        }
                    }
                }
                var_23 ^= (((arr_1 [i_0 + 1] [i_0 + 1]) ? (13835058055282163714 != 83) : 4503599627370464));
                var_24 = (min(-2692528496899767792, (max(((21144 ? var_16 : 205)), 1))));
            }
        }
    }
    var_25 = ((var_7 ? var_17 : ((((var_6 ? 1 : 1)) << 1))));
    var_26 = ((var_11 % (max(1, var_13))));
    var_27 = -2692528496899767798;
    #pragma endscop
}
