/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_17 *= ((-31805 ? (!-var_3) : ((-((-15532 ? -1726 : -31805))))));
                var_18 = (!-11369);
                var_19 = ((!(~var_6)));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_20 = (~-56);
                        var_21 = ((21467 ? -28431 : 11761858277864344132));
                    }
                    arr_9 [i_0] [i_0] [i_0] = 1284;
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_4] [i_2] = (min(((max(((0 ? 84 : 32764)), var_11))), (((((10927193075141040515 ? 37230 : var_6))) ? var_11 : 17060723365991841400))));
                                arr_17 [i_2] [i_4] = (min(17060723365991841400, (((60 ? (!-256) : (min(-4326653586903412974, var_4)))))));
                                var_22 &= ((min(((var_4 ? 22855 : -1105091359651664639), -14458))));
                                var_23 = (((!9223372036854775807) ? ((3041946048768849534 ? (~6362159195027208658) : -256)) : 31805));
                                var_24 = (~9007199254216704);
                            }
                        }
                    }
                }
                for (int i_6 = 3; i_6 < 22;i_6 += 1)
                {
                    var_25 = (((!-99) ? ((9007199254216704 ? 65 : 19980)) : 2857));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_26 = ((~((-4902001641923587864 ? 40 : 19980))));
                                var_27 = (((max(-871674157003081906, -412721619123825638))) ? ((((((-6445 ? var_13 : var_8))) ? ((49614 ? -1 : var_15)) : -19))) : ((var_16 ? var_14 : ((-9007199254216714 ? var_6 : 635129106857151526)))));
                                var_28 = (max(var_28, (--31805)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = var_6;
    #pragma endscop
}
