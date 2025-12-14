/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((((max(182, (3373926063263507316 > 53))))) <= 0));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] = (~-53);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 = (min(var_16, ((max(((~(arr_6 [i_2] [i_2 - 1]))), ((5582 ? -51 : 65516)))))));
                        arr_14 [i_2] [i_1] [i_2] [i_3] = (min(var_13, -2393974384254561676));
                        var_17 -= (max(0, 55536));
                        var_18 -= 6342807549079649939;
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            arr_17 [i_0] [1] = 12166;
            var_19 &= ((((((min(0, -53)))) & -4294967293)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            var_20 = (!198);
            arr_21 [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0]);
            arr_22 [i_0] [i_0] = 4294967293;

            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                arr_25 [i_6] = var_13;
                var_21 ^= (arr_13 [i_5] [i_6 - 1] [8] [i_6] [i_6 - 1]);
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 4; i_7 < 9;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 11;i_8 += 1)
            {
                {
                    var_22 = (max(var_22, ((max(-63, (arr_9 [i_8 - 2] [1] [i_8 - 2] [i_7 - 2]))))));
                    var_23 = (max((481814439 || 198), (~-63)));
                }
            }
        }
    }
    for (int i_9 = 3; i_9 < 20;i_9 += 1)
    {
        arr_34 [i_9] = (min(0, (4294967272 / 79934694036148276)));
        var_24 = ((min(45147, 1)));
    }
    var_25 = max((((97 ? 5582 : -1))), (~8044516829260547238));
    var_26 = var_4;
    #pragma endscop
}
