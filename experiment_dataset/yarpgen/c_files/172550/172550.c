/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_16 = ((!var_9) / (min((arr_0 [i_1 - 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_17 = (-(((arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 2]) >> ((((6294260925155123126 ? var_6 : -6294260925155123127)) + 3422459818545639341)))));
                            var_18 = ((!((!((max((arr_6 [i_0] [i_1 - 2] [i_2] [i_3]), -6294260925155123131)))))));
                            arr_9 [i_0] [9] [i_1] [i_0] [i_3] = max(((6294260925155123144 ? (arr_8 [i_2] [i_3]) : (!8980589605566338397))), ((~(((arr_7 [i_3] [i_2] [i_1 + 1] [0]) ? var_14 : var_3)))));
                            var_19 = (max(var_19, (((!(((((~(arr_2 [i_0] [1])))) || (((var_9 ? var_14 : (arr_1 [3])))))))))));
                            var_20 += (max((((arr_2 [i_0] [i_1 - 2]) < (arr_2 [i_0] [i_1 - 1]))), ((!(arr_2 [2] [i_1 - 1])))));
                        }
                    }
                }
            }
        }
    }
    var_21 = (var_14 ? (((~var_14) ? (~-9059029664820593345) : var_7)) : (min(var_11, var_5)));
    var_22 = (((max(9223372036854775807, -6294260925155123165)) + (var_8 / var_11)));
    var_23 = ((((var_1 ? ((var_4 ? var_10 : var_13)) : (((var_10 + 9223372036854775807) << (4539628424389459968 - 4539628424389459968)))))) ? ((min(var_3, 4695798251302292782))) : var_11);
    #pragma endscop
}
