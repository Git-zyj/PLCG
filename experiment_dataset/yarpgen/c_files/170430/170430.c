/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 50219;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 -= ((~((12 ? ((0 ? 65520 : 56933)) : 11))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_16 [8] [i_1] [i_1] [i_3] [i_4] = 19979;
                                var_12 += 15;
                            }
                        }
                    }
                    var_13 = ((((7 ? 5 : -7662452197330815634))));
                    arr_17 [i_0] [i_1] [i_2] [i_1] = (((((895447239 ? 3066995024 : 15))) ? ((2146435072 ? ((895447255 ? 4294967291 : 65535)) : ((((-32767 - 1) ? 1 : 895447239))))) : (~-895447232)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_24 [i_0] [i_1] [i_2] [i_5] [i_5] [i_0] = ((!(((-23 ? 32761 : (-2147483647 - 1))))));
                                var_14 = (-32767 - 1);
                                var_15 = ((3622421534 ? ((255 ? 4294967281 : 895447216)) : (!30)));
                                arr_25 [i_1] [i_2] [i_5] [i_6] = ((-32767 ? ((3066995011 ? 1630815664 : 8176)) : 1));
                            }
                        }
                    }
                }
            }
        }
        arr_26 [i_0] = (-9223372036854775807 - 1);
        var_16 = (~8189);
    }
    #pragma endscop
}
