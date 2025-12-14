/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 9127181171147083145;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((6858945002239585118 - ((((!(~var_16)))))));
        arr_3 [i_0] [i_0] = ((~(((((arr_1 [i_0]) & var_0)) ^ (((max((arr_0 [i_0] [11]), var_12))))))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 = 10458041979359311934;
            var_19 = ((-(max(7399453683010455857, (arr_0 [i_0] [i_1])))));
            var_20 = max((arr_1 [i_1]), ((((arr_1 [i_1]) && (arr_1 [i_1])))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_9 [i_0] [1] [i_1] [i_2] = (0 ^ (arr_1 [i_0]));
                var_21 &= 18589;
                var_22 += 18609;
                arr_10 [i_0] [i_2] [i_2] = -18589;
                var_23 |= ((18570 ? -var_8 : 4358));
            }
            for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
            {
                var_24 = (((23675 + -1) | (min(var_16, ((~(arr_4 [i_0] [i_1])))))));
                var_25 = ((+(((arr_0 [i_0] [i_3]) ? -18606 : 1))));
            }
            for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
            {
                arr_18 [i_0] [i_1] [i_1] [i_0] = ((((+(((arr_17 [i_0] [8] [i_4] [8]) ? (arr_13 [i_0]) : (arr_8 [i_0] [i_1] [i_4 - 1])))))) ? (((((-18611 ? 1 : 1583733599))) ? (arr_11 [14]) : ((min(var_10, var_5))))) : ((min(1, 23675))));
                arr_19 [i_4] [i_0] [i_0] = ((!(arr_8 [i_0] [i_0] [i_0])));
                var_26 = 1583733599;
                var_27 |= 1;
                var_28 ^= var_12;
            }
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 16;i_5 += 1)
        {
            arr_23 [i_0] = -18576;
            arr_24 [i_0] = 137;
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            {
                var_29 = var_4;
                var_30 |= ((((min(var_6, (!23665)))) ? var_4 : 861758377));
                var_31 = (max((arr_28 [15]), (((~(arr_25 [i_6] [i_6]))))));
            }
        }
    }
    #pragma endscop
}
