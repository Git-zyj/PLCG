/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += 27407;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((3331841927 / 3331841927) <= (((((((arr_6 [i_4] [i_0] [6] [i_3]) > (arr_2 [i_0] [i_3])))) * ((108 << (5020519804131602452 - 5020519804131602428)))))))))));
                                var_18 = (((((16 || 3331841927) | (19611 ^ -5020519804131602422))) % ((((max(99, 60180))) ? (var_3 || 438399506884045441) : (((arr_0 [i_0] [i_3]) / (arr_1 [i_0] [i_2])))))));
                                var_19 = (min(var_19, (((99 ? -5020519804131602453 : 960459190)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_0] [i_1] = ((~((-5020519804131602452 % (-1601595941 / 99)))));
                                var_20 = ((((((271918880979047287 | 963125352) / (29247 * 2190610038)))) ? -7406768046827969496 : ((((3334508136 && (15 ^ -9025456228467949550)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_21 = 1024;
                                var_22 = (min(var_22, (2025470760 <= 5366)));
                                arr_25 [i_2] [i_1 - 1] [i_2] [i_7] [i_8] [i_0] = (arr_8 [i_1] [0]);
                                arr_26 [i_2] [i_0] [0] [i_1] [i_2] = ((1568564432 | ((3958046805002143561 * (65535 / 65535)))));
                                var_23 = (((min(-19611, (9223372036854775807 - 49006))) % (arr_22 [i_8] [i_7] [i_2] [i_2] [i_0] [i_0])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (max(1568564432, ((~(1568564420 / var_6)))));
    #pragma endscop
}
