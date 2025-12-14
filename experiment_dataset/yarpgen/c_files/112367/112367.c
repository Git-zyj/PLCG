/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = ((+((((var_11 * 4294967293) > (((var_5 | (arr_0 [i_0])))))))));
                var_14 = ((((max((arr_0 [i_0]), ((var_6 % (arr_5 [i_1])))))) ? var_9 : (((arr_4 [i_1]) ? 63 : (max(5765664992292368455, 283253770))))));
                var_15 = ((+((min((arr_4 [i_1]), (arr_4 [i_1]))))));
            }
        }
    }
    var_16 = (max((max(var_3, var_1)), var_0));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_17 ^= (max(((max(98, (arr_12 [i_2] [i_3] [i_3] [i_3])))), (min(var_10, (arr_3 [i_2])))));
                    arr_13 [i_2] [i_3] [i_3] = ((+(((arr_10 [i_2]) | (arr_10 [i_2])))));
                    arr_14 [4] [i_4] = (32758 != -34);
                    arr_15 [i_2] = ((var_0 != ((-((max(34, -89)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_18 *= (arr_20 [i_5]);
                    arr_23 [i_5] [i_7] [i_7] = ((((((!(arr_22 [i_5] [i_5]))))) | (max((4011713541 - 5664105743706151170), (arr_17 [i_5] [i_7])))));
                }
            }
        }
    }
    #pragma endscop
}
