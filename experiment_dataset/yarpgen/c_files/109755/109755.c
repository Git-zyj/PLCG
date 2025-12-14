/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_2] = ((~(max(4902306438966412436, (max(-1, 4902306438966412436))))));
                    var_10 += (0 != -9);
                    var_11 = (((1631234613 / (max(-56, 4902306438966412436)))));
                    var_12 = (min(var_12, (((722838245 ? (!-24) : ((34 ? 1 : -4902306438966412415)))))));
                    var_13 *= ((((17382397795213646590 ? ((-30 ? 17382397795213646575 : 5792)) : 13)) >= ((max(-1812796938, 10)))));
                }
            }
        }
    }
    var_14 |= ((((((75 ? 9 : -38)))) ? ((-(!1781240117))) : ((0 ? -24 : 248))));
    var_15 = (~1064346278495905055);
    #pragma endscop
}
