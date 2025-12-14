/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_17 &= (arr_4 [10]);
                var_18 += ((((((((arr_0 [i_0] [i_1]) | (arr_0 [i_0] [i_1])))) % (((arr_5 [2]) ? 15574810445758804529 : -89)))) <= ((min(192, (((arr_0 [i_0] [i_1]) ? 192 : 810585998)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 24;i_3 += 1)
        {
            {

                for (int i_4 = 4; i_4 < 24;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_15 [4] [i_3] [i_4] [4] &= ((max(((~(arr_9 [i_2] [12] [i_5]))), 88)));
                        var_19 *= ((((min(-60, ((-(arr_11 [12] [12])))))) ? (((((min((arr_14 [18] [1] [i_4] [i_5]), (arr_13 [i_2] [i_4] [i_4 - 4] [i_5])))) <= (9223372036854775807 >= 2871933627950747086)))) : (((-1931373007494681205 || 3180694797) << (-7287872283030999835 + 7287872283030999848)))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_19 [i_2] [i_3] [i_4] [i_6] = (arr_16 [i_3 - 2] [i_4 + 1] [i_4 - 3] [i_3]);
                        arr_20 [i_2] [i_2 + 2] [i_3] [i_3] = 35246;
                    }
                    arr_21 [i_2 + 1] [i_3] = (((arr_13 [i_2] [i_3] [i_4 - 1] [i_4 - 2]) ? ((min(((((arr_17 [i_3] [i_2] [i_4] [i_4] [i_4 - 3] [i_2]) <= var_14))), (arr_12 [2] [i_3] [i_4 - 2] [i_4])))) : -1458009196));
                }
                var_20 = (min(var_20, -5603576087885842021));
                var_21 = (((max((arr_11 [i_3] [i_3]), (((-(arr_8 [i_2] [i_3])))))) < (max((18233135316899777516 % 810585998), -30014))));
                arr_22 [i_3] = ((-(30013 * 0)));
            }
        }
    }
    var_22 = 894379118;
    #pragma endscop
}
