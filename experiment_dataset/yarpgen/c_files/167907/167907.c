/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_9;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = (min((arr_11 [10] [i_1 - 1] [10] [i_1]), ((((arr_8 [i_2 - 1] [i_2] [i_2] [i_2] [i_2]) ^ (arr_8 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2]))))));
                            arr_12 [i_0] [i_2] [i_2] [i_3] = ((((((((arr_5 [i_0 - 1] [i_3]) + (arr_0 [i_3] [i_2]))) + 9223372036854775807)) << (8072194276657013644 - 8072194276657013644))));
                            var_20 = (((((arr_8 [i_0] [i_1 - 1] [5] [i_2 - 3] [i_2]) ? (arr_8 [i_0] [i_0] [i_1 - 2] [7] [i_2]) : (arr_7 [i_0 - 1] [i_0 + 1])))) ? ((((arr_11 [i_0] [i_1] [i_2 + 3] [i_3]) ? ((-31 ^ (arr_4 [i_0] [i_0]))) : ((((arr_8 [i_0] [i_1] [i_2] [12] [i_2]) != 15138)))))) : (arr_0 [i_1] [i_3]));
                        }
                    }
                }
                var_21 = (min(var_21, 3496500096));
                var_22 = ((((max((104 || -1530948344690134788), 15138))) ? (min((min(-622800949, (arr_10 [i_0 - 2] [i_1] [i_1] [i_1]))), ((min(31, -73))))) : (((((var_7 ? var_8 : (arr_5 [i_0] [11])))) ? (((arr_10 [8] [i_1] [i_0] [i_1]) & 108)) : ((-31 ? var_0 : 2933464430))))));
            }
        }
    }
    var_23 = (max((((var_10 ? ((var_1 ? var_0 : 50398)) : var_4))), (min(var_13, ((max(15143, var_0)))))));
    var_24 &= ((((min(109791348, (-8072194276657013645 != -34)))) ? ((var_12 + (((-9200331794861144333 ? var_17 : -4904730505437082006))))) : ((((var_7 / var_1) ? (((min(19, 1)))) : var_8)))));
    #pragma endscop
}
