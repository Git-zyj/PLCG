/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131891
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_21 = (min(var_21, (((!(((arr_5 [i_2] [i_1] [i_2]) > 10)))))));
                    arr_7 [i_0] [i_0] [i_0] = (var_15 || var_19);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_22 = ((~(((arr_3 [i_0] [i_1]) ? var_9 : var_11))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = (0 == 27702);
                                var_23 |= 27703;
                                var_24 = (max(var_24, (arr_4 [i_0] [i_2] [i_3])));
                            }
                        }
                    }
                    var_25 = (min(var_25, 27711));
                }
                arr_15 [i_0] [i_1] = 65535;
                var_26 = (max(var_26, ((((((-(-32767 - 1)))) ? (var_19 > 9223372036854775788) : var_6)))));
            }
        }
    }
    var_27 = (max(27703, 4294967285));
    var_28 = (max(var_28, 120));
    var_29 &= var_10;
    #pragma endscop
}
