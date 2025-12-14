/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (min(1235251797, ((((max(255, 13462945001535124881))) ? ((-186455127576559327 ? 186455127576559326 : 76)) : (70368744177663 || var_6)))));
                    var_12 += var_3;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_13 = min(-9279, ((((~var_7) <= ((var_3 ? 12673 : 16547767671522272187))))));
                                var_14 = (min((max((~13462945001535124873), (!-76))), (((!(((-186455127576559320 ? var_5 : -1))))))));
                                var_15 &= ((max(186455127576559312, -799405701281425518)) >= (1 & -51));
                            }
                        }
                    }
                    var_16 += (max((157976035 & 1), ((0 ? var_4 : 4983799072174426729))));
                    var_17 += (((((10113 + ((1 ? -97 : var_3))))) ? (max(var_7, (var_8 & var_9))) : ((((!4983799072174426729) ? 13496752247845442977 : (13462945001535124893 <= var_10))))));
                }
            }
        }
    }
    var_18 &= (((((9223372036854775795 ? (-76 / 482755079) : ((1 ? 8 : 1))))) || (((max(-4699640264318072560, 1)) <= 65534))));
    #pragma endscop
}
