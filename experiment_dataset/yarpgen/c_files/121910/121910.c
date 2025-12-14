/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_7, var_12));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    arr_7 [i_0] = max(-30, (0 != 0));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((((((arr_0 [i_1 + 1] [i_2]) ? var_12 : 0))) ? (((min(-109, (arr_6 [i_0] [i_0] [i_2 - 1] [i_2]))))) : (((arr_6 [i_0] [4] [3] [i_1]) ? (max((arr_3 [i_0] [i_1 + 3] [i_2 + 1]), var_0)) : ((((arr_3 [i_0] [i_0] [i_2]) / var_11)))))));
                    var_14 = ((~((109 / (arr_0 [i_1] [i_1 + 2])))));
                    var_15 = ((-95 ? ((-2065778273 ? var_10 : (arr_1 [i_2 - 1] [i_2]))) : 251));
                }
                var_16 += ((+((max((arr_0 [i_1 + 1] [i_1 + 3]), (arr_0 [i_1 + 1] [i_1 + 3]))))));
            }
        }
    }
    var_17 = ((~(((((var_8 ? var_6 : var_2))) ? ((max(var_6, 994025992))) : (max(11744155122953794132, 285978576338026496))))));
    var_18 += var_12;
    var_19 = ((((max(110, (max(var_6, var_10))))) >= ((var_8 >> (var_11 - 82)))));
    #pragma endscop
}
