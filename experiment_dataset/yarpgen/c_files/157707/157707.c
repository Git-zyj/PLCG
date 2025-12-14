/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_12));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [8] = (((((+(min((arr_1 [i_0]), 19))))) ? (3704838300 | var_16) : (arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 = (min(var_21, (((((((-205 + 2147483647) >> (((max(421741948, (arr_5 [i_3] [14]))) - 2592872068))))) ? (((((!var_4) || (-7170181650488278257 && 3873225367))))) : (~3873225348))))));
                        arr_10 [i_1] [i_1] [i_2] [i_1] [i_0] = arr_6 [i_2] [i_2] [i_0] [i_0];
                        var_22 = (!8815013487836107719);
                        arr_11 [i_0] [i_1 - 1] [i_1 - 4] [i_2] [i_1 - 4] = ((!((!(arr_3 [i_1 + 3])))));
                    }
                }
            }
        }
        var_23 = (min(var_23, ((((((-(421741905 - 421741944)))) ? (((var_16 <= var_11) ? (((9 ? 3873225366 : 884019560))) : (8152657688262199783 / 8152657688262199783))) : ((min(91, (arr_5 [0] [i_0])))))))));
    }
    var_24 -= (min((max(var_6, 18446744073709551615)), var_11));
    var_25 = (min(-1589214447, (!1)));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            {
                arr_19 [i_4] [i_4] [11] |= ((!(arr_13 [i_5])));
                arr_20 [i_5] = -1;
            }
        }
    }
    #pragma endscop
}
