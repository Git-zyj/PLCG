/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((((27556 ? 895659912 : 0))), (9346018227005201872 ^ -1503964208)))) ? (((min(-11471, -5963933473430832800)))) : var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_14 = (((((981885108 ? ((2650060503 ? 1287073872 : 1)) : (-39 + 24)))) || (((1 ? 1 : 675381766)))));
                    arr_9 [i_0] [12] [i_1] [i_2] = ((min((max(1751475893, 36664), 80))));
                    var_15 |= min((((0 / 2766537983) ? (!64) : (max(2588389844, 0)))), -4453588489042668143);
                }
                arr_10 [15] [i_0] = (1 * 4453588489042668143);
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_1] [i_4] [i_4] = (max(-2145906353, (max(((9223372036854775807 ? 1495751476 : 1)), ((max((-127 - 1), 24533)))))));
                                var_16 = 11;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 *= ((min(1, 1)));
    var_18 = var_5;
    #pragma endscop
}
