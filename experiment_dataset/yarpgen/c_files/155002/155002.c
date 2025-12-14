/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 20176;
    var_13 = ((((~(max(10717980604227827042, 14304460870542060110))))) ? var_10 : ((((min(2849518603686494710, 12490))) ? (max(var_8, 15591984375159154497)) : 1279640875)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1 + 2] [i_2] [i_3] = (var_11 + 12462);
                            arr_12 [i_0 + 2] [i_1] [i_1] [i_1] = ((-4296896498464631116 >= ((((-68 * (arr_0 [i_2] [i_3]))) / 9740934282948386663))));
                            var_14 = 25;
                            var_15 = (max(14750235510535187994, (max((((arr_0 [i_0] [i_0 - 2]) * 4605351604016276046)), var_9))));
                        }
                    }
                }
                var_16 = min((18446744073709551615 % 10117728460703214973), (-1379477472 + -13584981116137527930));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            {
                arr_17 [i_4] = (min((arr_14 [i_4]), 11397910439593790406));
                var_17 = min(((-20176 ? ((1972109650 ? 8725517398469888173 : (arr_16 [i_4]))) : -79)), 1906857354606261542);
            }
        }
    }
    #pragma endscop
}
