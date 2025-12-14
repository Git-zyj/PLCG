/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= -15936;
    var_13 = ((((((11 == 2016) ? ((38 >> (8535805153661161602 - 8535805153661161577))) : -8819))) ? ((((14791692211563020297 >= (29 != 0))))) : (((max(0, 134217720)) << (var_1 + 87)))));
    var_14 = (((min(-17, 0)) >> 1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_15 = ((min((min(85, 14)), 562881233944576)));
                        var_16 = (max(var_16, ((((max((1023 | 31), -488366716)) - 13279)))));
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_17 = (((((((max(0, 12545690046010376610))) ? 0 : 1599318598))) ? (((18 | 122) - ((max(2045049405, 0))))) : (((min(1, 40458))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [1] = ((-1 | ((((!9) <= (min(1, 7)))))));
                    }
                    arr_16 [i_0] [i_1 - 1] = ((((((((4571364161811710854 ? 17517708650152317589 : 435445193))) ? (118992779 / 14511) : 255))) ? (((min(-32, 2047)))) : 1));
                }
            }
        }
    }
    var_18 = (max(var_18, ((((max(var_5, (max(1819087726, 64984)))) != 1)))));
    #pragma endscop
}
