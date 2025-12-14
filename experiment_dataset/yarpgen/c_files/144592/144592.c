/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144592
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_11, (((~((var_0 ? var_6 : 243)))))));
    var_13 = var_9;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_14 -= ((((var_0 || ((max((arr_2 [0]), var_2))))) || ((min((arr_0 [i_0]), (!4294967282))))));
        var_15 += (min(var_10, var_1));
        var_16 |= (max((arr_0 [i_0 + 1]), 13388537973368191483));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_1 + 2] [i_0] = (((3817607341376816292 && 0) > ((min(32767, (arr_3 [i_0] [i_2]))))));
                    arr_11 [i_0] [3] [i_2] [8] = (((((var_11 * 14629136732332735346) ? (var_6 < 14629136732332735324) : ((var_11 ? var_5 : var_10)))) == (~-2257945794436080754)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 = (((((-9 ? 4194288 : 2257945794436080752)))) ? 2257945794436080763 : (arr_17 [5] [i_3] [i_3 + 1] [i_1] [i_1] [i_1] [i_1]));
                                var_18 ^= (min((min(14522844259885390816, 184)), (((64 ? 4237978539230122772 : 2433903125)))));
                                var_19 = (min(-var_6, -10));
                            }
                        }
                    }
                    var_20 = 0;
                }
            }
        }
    }
    #pragma endscop
}
