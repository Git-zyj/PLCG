/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (min(10383, 47724));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        {
                            var_13 *= var_9;
                            var_14 &= (!845);
                            var_15 &= (((((1055471687 ? 6395503189536752041 : 838))) ? -7904 : 845));
                        }
                    }
                }
            }
            arr_13 [i_0] [i_1] [i_1] = ((-1 ? 5057835864443565700 : 3758096384));
        }
        var_16 = ((3758096384 ? 14172841186101939494 : -1));
        var_17 = (max(var_17, ((((max(3758096384, 12606311497806614080)) > ((~((-836 ? var_6 : var_11)))))))));
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        arr_24 [i_8] [i_7] [i_6] [i_5] [i_5] [i_5] = (arr_17 [i_5]);
                        var_18 = (max(var_18, ((((0 == -10385) ? (arr_6 [i_8] [i_7] [1] [i_5]) : (-10375 > 54308))))));
                    }
                    arr_25 [i_5] [4] [i_7] [i_7] = (max(-0, 10390));
                    var_19 = ((0 ? 3758096384 : 12));
                }
            }
        }
    }
    var_20 = (min(var_6, var_2));
    #pragma endscop
}
