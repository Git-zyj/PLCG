/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((-2347522459526214648 ? (min(((-4543 ? 6051008916933421479 : 8663651156837603879)), var_7)) : 1)))));
                var_12 = (((((-30572 ? (arr_1 [i_1]) : 9783092916871947759))) || (((18367167788060308723 ? (arr_1 [i_0]) : var_3)))));
                var_13 = ((-(min(var_4, (max((arr_3 [i_0]), 26148))))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_14 = ((18367167788060308723 ? (~1) : (((13633368999886481551 | 8663651156837603862) ? 14306967975246455722 : 1))));
                    var_15 = 9783092916871947727;
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_16 = (var_0 != var_2);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((((max((arr_11 [i_4] [14] [i_5 - 2] [i_5 - 3] [20]), (arr_5 [i_5 - 2] [i_5 + 1] [i_5 + 1] [i_5 - 1]))))) + (((arr_11 [i_1] [i_1] [i_5 + 1] [12] [19]) ? 8663651156837603888 : 1)))))));
                                var_18 &= (arr_9 [i_5 - 3] [i_5] [i_5] [i_1]);
                                arr_12 [i_3] [i_1] [i_3] [i_4] [i_5 - 3] = (min((min((arr_11 [i_5 - 1] [i_5 - 4] [i_5 - 3] [i_5 + 1] [i_5 - 4]), (arr_10 [i_5 - 3] [i_5 - 4] [i_5 - 2] [i_5 - 3] [i_5 - 2]))), 8663651156837603878));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, ((((((135 ? ((min(127, 174))) : (min(10414, 714691426))))) ? (!var_1) : ((((max(var_7, 42524))) ? -var_0 : var_5)))))));
    var_20 = (max(var_20, (((-(+-4564431267639027357))))));
    var_21 = var_7;
    var_22 = ((((min(19, ((min(1, 27196)))))) ? ((((218167664 && -1) || (((var_4 ? -14804 : 95)))))) : (!var_4)));
    #pragma endscop
}
