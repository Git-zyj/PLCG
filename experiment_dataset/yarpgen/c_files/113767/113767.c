/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                var_19 &= ((min(19765, 420125345)));
                var_20 += (max(0, 26));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_21 = (min((((var_11 <= (var_15 <= 1)))), (max(8191, (max(-26, var_8))))));
                            var_22 &= (var_7 / -19582);
                            var_23 += 63;
                        }
                    }
                }
                arr_10 [i_0] [i_1] = ((var_12 ? 4294934528 : ((((19601 || (126 - 32767)))))));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {
            var_24 = ((var_7 ? var_8 : var_15));
            arr_17 [i_4] [i_5] [i_5] = ((103 ? -19741 : 152));
            var_25 = (min(var_25, var_16));
        }
        var_26 = (min(var_26, (68719476608 < 4979188804690014144)));

        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            var_27 = ((var_14 ? 9 : var_16));
            var_28 = -1;
            arr_20 [i_4] [i_4] [i_4] = ((var_18 ? var_0 : var_5));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_29 = 2249546180;

            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_30 += (3525680954169855969 || var_14);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_31 = (max(var_31, var_9));
                            arr_31 [i_10] [i_8] [i_10] = var_2;
                            arr_32 [i_10] = var_3;
                            var_32 = ((var_16 ? var_1 : 15046));
                        }
                    }
                }
            }
        }
        var_33 = (min(var_33, (((var_2 ? var_16 : -27794)))));
    }
    for (int i_11 = 0; i_11 < 10;i_11 += 1)
    {
        arr_37 [i_11] = var_12;
        var_34 = (((max(24, 1959006918)) * ((min((-1 / 47875), (-84 != 217))))));
    }
    var_35 = (max((max(((var_2 ? var_7 : 1)), 47886)), ((((max(-69, var_17)) != (var_17 ^ var_13))))));
    #pragma endscop
}
