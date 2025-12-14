/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125729
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_10 << (var_2 - 6138418864803237103));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_19 = ((arr_2 [i_0] [i_0]) ? -1 : (((arr_3 [i_0 + 2] [i_0 + 1]) ? (arr_6 [i_0 + 2] [i_0] [i_0 + 1] [i_0 + 2]) : (((((arr_4 [i_0]) > 14)))))));
                    arr_7 [i_0] [5] [i_1] [i_0] = (-1 ? 16383 : 1);
                    arr_8 [i_0] [i_0] [i_2] = (-((~(~var_9))));
                    arr_9 [i_0] [i_0] = min(3636204035345001458, ((((((arr_3 [i_0 + 2] [18]) + var_3))) ? (min(2686658104336662715, (arr_0 [i_1]))) : ((5293007025448885425 ? (-9223372036854775807 - 1) : var_13)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] [i_1] = ((arr_10 [i_0 - 2] [i_1] [i_0 - 2]) ? (arr_10 [i_0 - 2] [i_1] [i_1]) : (arr_10 [i_0 - 2] [i_1] [i_0 - 2]));
                    arr_13 [i_0 + 2] [17] [i_0] = arr_0 [17];
                    arr_14 [i_0] = ((!((((arr_11 [i_0]) ^ var_10)))));
                }
                arr_15 [i_0] [i_0] = ((!(((~(arr_11 [i_0]))))));
                arr_16 [i_0] [i_0] [i_0] = (var_15 ? ((-(arr_3 [i_0 - 1] [i_0 - 1]))) : (((var_3 ? var_6 : 6834937014719850625))));
                var_20 = (var_11 ? (~905482221536484948) : (((arr_1 [i_0 - 3]) ? (arr_4 [i_0]) : (arr_1 [i_0 - 1]))));
            }
        }
    }
    var_21 &= ((-9223372036854775807 - 1) ^ 0);
    #pragma endscop
}
