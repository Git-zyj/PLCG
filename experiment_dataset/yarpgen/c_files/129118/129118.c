/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (213 ^ 386635531);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 = (max(17, 1568052253610169663));

                for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_18 = ((386635535 ? ((max(19, (max(6, 32713))))) : ((max((min(28, 43)), ((min(107, 304))))))));
                    var_19 = (34569 ^ 15830);
                    arr_7 [i_0] [i_1] = (((((((32767 ? 1 : 41))) || 32766)) ? -70 : 65517));
                }
                for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    arr_10 [i_0] [i_0] = (max(-88, (((-1 <= 127) + 148))));
                    var_20 = ((3554846900 && ((((8160 & -7349855660655272331) & 40698)))));
                }
                arr_11 [i_1] [i_0] = (((((-4 ? 40 : 304))) || 7728));
                /* LoopNest 3 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_21 = ((((min(4294967286, 2619))) ? (63 & 127) : (max(((min(45, 0))), (max(3219250709, -312))))));
                                var_22 ^= (-2172 - -1);
                                var_23 = (43 > -3000);
                                arr_20 [i_0] [i_0] [i_4] [i_4] [i_4] = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min((max(var_13, (-2710394909479422812 || 18446744073709551615))), 311));
    #pragma endscop
}
