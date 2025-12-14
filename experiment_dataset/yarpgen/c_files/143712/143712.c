/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 4739818684400734276;
    var_15 = (min(var_15, (((((-0 ? var_1 : 65514)) > (max((~65535), 65525)))))));
    var_16 = (((!65523) > (var_13 - -26)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_17 *= (((((1717276599761765202 & 20) & 65515)) != 19));
                                var_18 = ((~((65535 ? 288230367561777152 : 11))));
                                var_19 = ((((max(((288248185 ? 5 : 26)), (!65514)))) ? (min((min(0, 22)), (22 < 131))) : ((max((!65523), ((65514 ? -23 : 65517)))))));
                            }
                        }
                    }
                }
                arr_17 [i_1] [i_0] = -65533;
                var_20 = ((((max(139, (!65520)))) <= (max((~-22), ((39 ? 65514 : 9))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 ^= ((((((min(124, 1039820177840838828)) & 43917))) ? ((((max(-39, 22))) * 22)) : 43));
                            var_22 = (min(var_22, 8));
                            arr_23 [i_0] [i_1] [i_5] [i_5] = (((((34 ? 288230367561777144 : 18158513706147774463))) ? (2 | 28) : ((max(27, 18158513706147774463)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
