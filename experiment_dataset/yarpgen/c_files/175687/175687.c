/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((-((402636672 ? var_2 : 1700960044)))) == var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (max(var_13, ((((13608890468097624210 >> (var_11 + 140251677)))))));
                var_14 ^= ((((min(13608890468097624223, var_4))) ? ((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_6 [i_0] [i_0] [i_1])))) : (max(1188376720955617669, 3296167464))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_15 [9] [i_2] = (max(((max(1, 1))), ((~(arr_14 [i_2] [i_3])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_23 [i_2] = ((!(((((max((arr_19 [i_2] [i_2] [i_2] [i_2]), var_11))) ? (arr_13 [i_3] [i_5]) : var_2)))));
                            var_15 = ((((min((arr_17 [i_4] [1] [i_4]), (arr_17 [i_3] [i_3] [1])))) ? ((-(arr_6 [12] [i_2] [12]))) : (arr_17 [i_2] [0] [15])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_16 -= var_11;
                                arr_35 [i_8] [i_8] [i_7] [i_6] [i_6] [i_3] [i_2] = var_9;
                                var_17 *= ((~((var_1 ? var_3 : 0))));
                                arr_36 [i_8] [i_7] [i_6] [i_3] [i_2] = (min((max(var_5, (max(var_3, var_0)))), (((((9 ? 4294967295 : var_4)) < var_0)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
