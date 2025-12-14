/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -7420;

    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        var_15 = ((70 ? (((arr_2 [i_0]) ? 17839 : 16869240283479105228)) : 155597197));
        arr_3 [i_0] = (2663601986 ? ((var_10 ? var_3 : 24630)) : 2663602007);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        arr_7 [13] = ((24612 ? 24630 : -8230525154912980797));
        var_16 = (arr_6 [i_1] [i_1]);
    }
    var_17 = (max(2507405593322237390, var_13));
    var_18 |= 15939338480387314226;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        var_19 *= var_11;
                        var_20 ^= var_13;
                        var_21 |= 51435;
                        arr_19 [8] |= 6859777074726965915;
                        var_22 = var_5;
                    }
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        arr_22 [i_2] [i_4] = 44;
                        arr_23 [i_2] [i_2] [i_4] = var_8;
                    }
                    var_23 += 1492352140;
                }
            }
        }
    }
    #pragma endscop
}
