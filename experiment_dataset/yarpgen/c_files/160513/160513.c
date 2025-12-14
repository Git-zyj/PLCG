/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_20 = ((-1620811293775958189 / (min(3008478347, -1620811293775958189))));
        arr_3 [i_0] = ((-(((~3) ? 1953128891 : ((var_10 ? 442449298244463116 : -60))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            arr_9 [i_1] = ((var_15 ? -3247516397631247249 : 9551959293465673661));
            var_21 += ((31 ? var_9 : ((1286488948 ? 1620811293775958210 : 1405))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_22 = var_13;
            var_23 = ((24 ? 3295831549 : var_19));
            var_24 = (min(var_24, (~1)));

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_25 -= (6413852956083645194 <= 1286488950);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_20 [i_1] [i_1] [i_1] [i_5] [i_6] |= (var_8 / -2742106129891963474);
                            var_26 = (min(var_26, (((3295831553 ? 9098313420370765577 : var_3)))));
                            arr_21 [i_1] [i_1] [i_4] [i_1] [i_5] [6] = ((181 ? (3587161117 & -113) : 49884));
                            arr_22 [i_1] [i_1] [i_4] = var_11;
                        }
                    }
                }
                arr_23 [i_1] [i_1] [i_4] [i_1] = 49884;
            }
        }
        var_27 -= (~var_19);
        arr_24 [i_1] = ((49904 ? 15652 : ((1 << (707806162 - 707806148)))));
        arr_25 [i_1] [i_1] = -5200;
        arr_26 [i_1] = ((-8442978154185724996 ? 3821111308 : -58));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_28 = (((((-1840887301 ? 1725452440 : 1))) ? 893249338268867307 : -73));
        var_29 = (1 << (457675797 - 457675771));
    }
    var_30 = (max((((!((min(var_13, 2742106129891963481)))))), (max(((min(var_2, 96))), (min(var_17, -84))))));
    #pragma endscop
}
