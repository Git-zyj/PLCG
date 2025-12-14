/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= ((((((((var_1 ? var_13 : var_13))) / (max(-1823220568812079626, -317352825))))) ? -1823220568812079626 : var_0));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (1823220568812079625 ? var_7 : 5);
        arr_4 [i_0] [i_0] &= (min(var_4, ((((-317352825 & 1823220568812079594) && ((((arr_1 [i_0] [i_0]) ? (arr_2 [i_0]) : var_12))))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_15 = (((-((max(var_12, 5))))));
                    arr_13 [i_1] [i_2] [i_2 - 1] [i_2 - 1] = ((((((arr_12 [i_1] [i_1] [i_2 - 3]) ? var_12 : (max(var_5, 317352803))))) || ((!(((~(arr_5 [i_1] [i_1]))))))));
                }
            }
        }
        var_16 -= ((~(-317352803 && 317352781)));
        var_17 = (arr_9 [i_1]);
        var_18 = (max(var_18, -1823220568812079595));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_19 -= (var_0 / -2010886280);
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_20 += 251;
                    var_21 = 14271719165669282592;
                }
            }
        }
    }
    #pragma endscop
}
