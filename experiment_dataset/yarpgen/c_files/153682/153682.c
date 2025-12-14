/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 *= ((97574146 ? -69 : (((243 < ((254 ? 3016858054 : 87)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        var_20 = (32767 * 61955);
                        var_21 = 12864927623126150676;
                        arr_10 [i_3] [i_1] [i_3 + 2] [i_2] [i_1] [i_0] = 1;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_4] |= (min(-45, 35298));

                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_1] = 1153737697575823322;
                            var_22 = (max(6301731768572935190, 255));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (max(1153737697575823340, 204));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_23 &= (~3016858057);
                            var_24 = 3482026580;
                            var_25 = (min(3482026564, -2007632794));
                        }
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        var_26 = (max(var_26, (4294967289 ^ 1253495202)));
                        var_27 += (1278109242 * 1);
                        var_28 = (max(var_28, ((min(14, 104)))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_28 [i_2] [i_1] [i_2] [i_1] [i_0] = min(28677, 1236015161292970944);
                                var_29 *= (~47581);
                            }
                        }
                    }
                    var_30 = (217 / 891829561022275269);
                    var_31 &= (min((((4 ^ -6956) * 253)), (((((max(28681, 4294967295))) ? 1 : 92)))));
                }
            }
        }
    }
    #pragma endscop
}
