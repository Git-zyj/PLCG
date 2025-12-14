/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((max(var_17, (var_9 && -1870000623)))) ? var_0 : 0));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [i_2] = 1;
                    arr_10 [i_0] [18] [i_1] [i_2] = (arr_1 [i_0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_13 [i_0] |= (((((arr_3 [i_0 - 3]) ? (arr_3 [i_0 + 1]) : (arr_8 [i_0 - 3] [i_0 - 2] [i_0 - 3]))) - (((arr_3 [i_0 + 1]) ? (arr_3 [i_0 - 3]) : (arr_8 [i_0 - 2] [i_0 - 1] [i_0 - 2])))));
                    var_19 *= -1901727945;
                    arr_14 [i_3] = -1901727945;
                }
                var_20 *= ((((+(((arr_3 [i_1]) * (arr_5 [6] [0]))))) + ((+(((arr_6 [i_0] [16]) ? -1901727961 : var_3))))));
                var_21 = (arr_1 [i_1] [i_0]);
                arr_15 [14] [i_0] = var_13;
                var_22 = 0;
            }
        }
    }
    #pragma endscop
}
