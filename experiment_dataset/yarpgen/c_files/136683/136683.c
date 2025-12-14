/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_16 = 144115188075855871;
                    var_17 = (((((29679 >> 1) ? 35882 : -30)) & ((((1 & 35894) >> (((((-31701 + 2147483647) << (35894 - 35894))) - 2147451934)))))));
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_18 = ((1 - ((255 >> (6690 - 6665)))));
                                var_19 -= 46033;
                            }
                        }
                    }
                    var_20 = (15 / 3);
                    var_21 = (((17 ^ -4248789137136402851) != 2016));
                }
                /* vectorizable */
                for (int i_6 = 1; i_6 < 18;i_6 += 1)
                {
                    var_22 = 8923750227760751706;
                    var_23 = -8519635540858441275;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            {
                                var_24 = ((29653 % (0 | 29639)));
                                var_25 = 5;
                            }
                        }
                    }
                    var_26 = ((((1 ? -6474256893415561344 : -1)) + 3164086253));
                }
                var_27 = ((62 ? (((((842392392 ? 7351400821915612695 : 29654))) ? (4939187741413093268 * 0) : 128)) : (((2048 | 16681405384259829090) ^ ((-16053 ? 12844295230557728256 : 12434461265518033172))))));
                var_28 ^= (((((0 >> (96 - 76)))) ? (((0 % 17987842601216530663) % 1266768880)) : ((((0 == ((6012282808191518445 << (119 - 113)))))))));
            }
        }
    }
    #pragma endscop
}
