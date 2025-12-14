/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (min(((min((arr_0 [i_0]), (arr_1 [i_0])))), ((24576 ? 1196555040 : -10344))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_12 = (((!8191) ? (((arr_1 [i_0]) ? -24590 : (arr_1 [i_0]))) : 8546));
            var_13 = (min((max(46874, (((arr_0 [i_0]) ? (arr_1 [3]) : (arr_1 [i_1]))))), ((max((min(1, 24590)), (min(56, 24559)))))));

            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                var_14 = (min(var_14, ((((((92 << (109 - 89)))))))));
                var_15 = max((-1763287607 / -503772300), 1016808410);
                arr_6 [i_0] [i_0] [i_0] = 7765802338998720841;
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_16 [i_3] [i_5] [i_0] = 14203;
                            var_16 = (~50554);
                        }
                        var_17 -= (max(-8192, 24578));
                    }
                }
            }
        }
    }
    var_18 = var_9;
    #pragma endscop
}
