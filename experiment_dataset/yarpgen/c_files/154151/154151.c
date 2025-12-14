/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = ((-(((arr_1 [i_0] [i_2]) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
                    var_17 ^= (max((((arr_3 [i_0 + 1] [i_0 - 1]) ? (arr_3 [i_0 - 2] [i_0 - 2]) : 15434424925549240860)), (0 && 349972206)));
                    var_18 = ((var_6 + (((3012319148160310756 ? (arr_1 [i_0 - 1] [18]) : (arr_4 [i_0]))))));
                }
            }
        }
    }
    var_19 = (var_8 % (~var_15));
    var_20 = var_12;
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 17;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 = ((+(max((arr_14 [i_4 + 1]), (arr_14 [i_4 - 1])))));
                        var_22 *= 31;
                        var_23 = (((arr_12 [i_5 - 2] [i_4 - 1]) < (arr_16 [i_3 - 1] [i_3 - 1] [i_4 + 1] [i_5 + 1])));
                    }
                    arr_24 [i_3] [i_4] [i_3] [i_3 + 1] = (arr_1 [i_3] [i_3]);
                }
            }
        }
    }
    #pragma endscop
}
