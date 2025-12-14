/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = max((((((arr_2 [i_0]) >= (arr_0 [i_0]))) ? -50 : ((var_6 ? var_2 : -6)))), ((max(-3214772140424456607, 39))));
        arr_4 [i_0] [8] |= ((((((arr_1 [i_0]) + (arr_1 [i_0])))) ? (max((arr_2 [i_0]), -7661803945691107638)) : ((((min(603555875, var_2)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_11 [18] [i_0] [18] [i_3] |= (((max(-13728011147838695416, ((max(var_13, var_15))))) > (((((arr_5 [12] [i_2] [12]) <= (arr_5 [16] [i_1] [i_1])))))));
                        arr_12 [i_0] [i_0] [i_3] [i_3] = (min(((((4718732925870856223 ? -19 : 3783821419)) ^ (arr_1 [7]))), var_12));
                        arr_13 [i_0] [i_1] [i_3] [i_3] = ((var_10 ? ((max(var_16, (arr_1 [i_0])))) : (((arr_5 [i_0] [i_1] [i_1]) ? var_2 : (arr_5 [i_0] [i_1] [i_1])))));
                    }
                }
            }
        }
        arr_14 [2] [i_0] = (((((var_1 % (arr_9 [i_0] [i_0])))) ? (max(13728011147838695416, var_10)) : var_0));
        arr_15 [i_0] [i_0] = ((((min(3910547465750584576, var_14))) ? var_5 : (max(var_16, 7899017600408329772))));
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        arr_18 [i_4] = ((arr_5 [1] [i_4 + 1] [i_4]) / ((min(3, (arr_5 [18] [i_4 - 2] [i_4])))));
        arr_19 [i_4] [i_4] = ((((min((97 - 18446744073709551615), var_16))) || (arr_16 [5] [i_4 + 2])));
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            {
                arr_25 [9] [i_6] [i_6] = ((((var_4 ? var_11 : (arr_0 [i_5])))) ? (!1195641379236374872) : (((arr_5 [i_5] [i_5] [i_6 + 1]) / var_0)));
                var_17 = (max(var_17, ((((((arr_5 [i_5] [i_6 - 1] [14]) - (var_10 / var_11))) / (((min(47266, 27122)))))))));
                var_18 *= (arr_10 [i_5 - 2] [i_5 - 2] [i_5] [14] [i_5] [14]);
                var_19 += (((((var_8 ? var_2 : (arr_17 [i_5 - 1] [i_5]))) <= (arr_7 [i_5] [i_5 + 1] [i_6 - 1]))));
            }
        }
    }
    var_20 = ((!(~1498484715)));
    #pragma endscop
}
