/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((186 / (119 - 141))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (213 <= -6033956160166514794);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = (((((-117 + 2147483647) << (((18446744073709551615 != -1046895450) - 1)))) <= ((((124 >= 34359738367) >= (max(839800602, 1003869665249523760)))))));
                                var_21 |= (((((-120 ? 18446744073709551615 : -3796))) ? 4 : ((-1 ? 4503599627370495 : -419523846))));
                                arr_16 [i_1] [i_3] [i_0] = ((((max(-6033956160166514818, (((131071 ? 183 : -1)))))) ? 2520450788 : ((min(-27621, 1106800539)))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [0] = (max((min((114 << 1), ((31 ? -28225 : -16462)))), (!-1693910362)));
                                var_22 |= ((~((-1 << (((536870911 * 18446744073709551615) - 18446744073172680702))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (~3901681091);
    var_24 = ((((((3818 > (4095 > 16212739046434804111))))) < ((-1402522263043024481 * (65535 || 35363)))));
    #pragma endscop
}
