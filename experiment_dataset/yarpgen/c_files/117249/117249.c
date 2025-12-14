/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (min((((!463615199) ? -79 : (20 | var_9))), var_10));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (min(var_13, (((~(max((225 & var_5), (arr_2 [i_0] [i_0]))))))));
                var_14 = (min(var_14, var_1));
                arr_4 [i_1] [i_1 + 1] [i_1] = ((-(min((arr_2 [i_0 - 1] [i_1 - 3]), ((2472539473737651397 ? 15974204599971900219 : 9158))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {
            {
                var_15 = (max(var_4, 2472539473737651388));
                var_16 = (max(((((min(537880674334003838, 2146435072))) / (min(var_0, (arr_8 [i_2] [i_2]))))), var_2));
                var_17 = 388273979;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                {
                    var_18 = (min(var_18, ((min((var_8 ^ -var_11), (((!((max(-24, var_7)))))))))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_19 += var_8;
                        var_20 = (max(var_20, var_1));
                    }
                }
            }
        }
    }
    #pragma endscop
}
