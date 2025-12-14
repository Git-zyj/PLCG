/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_16;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1 + 2] = (max((((arr_4 [i_0] [i_0 + 1] [i_0]) ? var_10 : (arr_4 [i_0] [i_0 + 1] [1]))), ((5396917429034319368 ? 64286 : 4112))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_14 [13] [13] [i_1] [i_2] [i_2] [i_2] = ((((!(arr_12 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [21] [i_0])))));
                            var_18 = (~-4415495381659619674);
                        }
                    }
                }
                var_19 = (max((max(3145728, ((~(arr_10 [i_1] [i_1] [i_0] [i_0 + 1]))))), (((arr_3 [i_0 + 1] [i_0 + 1]) ? (arr_3 [i_0 + 1] [i_0 - 1]) : 27368))));
                var_20 = (min((max(4314817420241274018, (arr_2 [i_1] [i_1]))), ((max(((-4103896211988921916 ? var_3 : 64286)), (!0))))));
                var_21 = 2048;
            }
        }
    }
    var_22 *= var_12;
    var_23 = (((var_10 >= var_2) ? (min(15, ((var_6 ? var_11 : var_13)))) : -var_2));
    #pragma endscop
}
