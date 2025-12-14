/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((var_4 * (min(((var_9 ? var_13 : var_2)), var_13))))));
    var_15 = (min(var_15, ((max(var_2, var_9)))));
    var_16 ^= (min(var_11, (1986576501622946531 / var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 = (((((max(4294967295, 74))) ? ((((!(arr_0 [i_0] [i_0]))))) : (arr_5 [i_2]))) * (!-94));
                            var_18 = ((((8 ? (arr_5 [i_2]) : 4294967295)) * (arr_4 [i_2] [i_3])));
                            var_19 = ((3907337920327804230 << (((4294967289 << 7) ? (!var_0) : (((arr_0 [15] [15]) ? (arr_0 [i_2] [i_1]) : -1986576501622946531))))));
                        }
                    }
                }
                var_20 = (max(var_20, (!2659451662)));
            }
        }
    }
    var_21 = ((-var_12 ? (var_13 == 1888285106) : 1888285127));
    #pragma endscop
}
