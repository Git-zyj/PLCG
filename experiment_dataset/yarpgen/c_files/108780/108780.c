/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((min(25838, 768))) || 0));
    var_12 = (min((((((15619465827512230836 ? var_1 : 1))) ? 765 : (15619465827512230833 / 16383985371969022795))), 19));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (min((((30937 ? 4 : (arr_0 [i_0])))), ((24456 ? (-5570 / 1312285573614095750) : (((min(var_2, 14113))))))));
        var_14 = 28524;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (!25);
        var_15 = (((min(5578, 16)) >> ((((min((arr_2 [i_1]), var_5)) && ((min(1023, -175876706))))))));
        var_16 = (arr_4 [i_1]);
        var_17 = var_1;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 12;i_4 += 1)
            {
                {
                    arr_15 [i_3] [0] &= (arr_13 [i_2] [i_3 + 1] [i_4]);
                    var_18 = (min((((274877906943 && 1409106717) ? ((203 ? 1 : 64601)) : (1 && var_0))), ((((13 ? -30512 : 229)) | ((min(1, 1)))))));
                }
            }
        }
    }
    #pragma endscop
}
