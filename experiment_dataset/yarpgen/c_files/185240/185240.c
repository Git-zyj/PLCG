/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_3;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 *= ((var_6 >> ((((!2130706432) < -29083)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_12 |= (((!(arr_0 [i_1] [i_0]))));
            var_13 = (max(var_13, ((max(684972678115364582, 1542022157)))));
        }
        var_14 *= (max((939524096 >= 57448), (~var_9)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_15 += (((~(arr_8 [i_2]))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            var_16 = (((arr_11 [i_3 - 1]) ? (arr_11 [i_3 + 1]) : 1));
                            var_17 = 13538092179213463028;
                            var_18 |= ((!(arr_9 [i_3 + 1] [i_3 + 2])));
                        }
                        var_19 = ((1 ? 4602678819172646912 : -4602678819172646912));
                    }
                }
            }
        }
        var_20 = (arr_12 [i_2]);
    }
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        var_21 = (((((min(var_8, 4503530907893760)) >= (((var_2 ? (arr_8 [i_7]) : 3))))) || 6));
        arr_22 [i_7] = -56;
        var_22 = -32;
    }
    #pragma endscop
}
