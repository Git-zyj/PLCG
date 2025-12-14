/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = 123;
                    var_12 *= max(var_4, var_10);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (i_0 % 2 == zero) ? ((((arr_7 [i_0]) * (max(-123, (max(-1192212867, (arr_1 [i_0] [i_0])))))))) : ((((arr_7 [i_0]) / (max(-123, (max(-1192212867, (arr_1 [i_0] [i_0]))))))));
                                var_14 = (((-9223372036854775807 - 1) ? var_0 : 6832));
                                var_15 = ((((((arr_12 [i_0]) ? (arr_3 [i_0] [i_0]) : (min(var_9, var_10))))) ? (((((-28 && (-9223372036854775807 - 1)))))) : ((var_2 ? (var_7 | var_6) : (arr_3 [i_3] [i_0])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = (((((((((max(var_4, var_9)))) < ((var_0 ? var_10 : var_8)))))) % (((var_2 + var_5) ? (max(37, 9223372036854775807)) : (((var_7 ? var_7 : var_2)))))));
    var_17 |= ((((max(((var_5 ? var_3 : var_3)), var_9))) ? (max(-123, (((-9223372036854775807 - 1) - -123)))) : ((((var_7 & var_4) ? ((var_0 ? var_5 : var_1)) : var_4)))));
    #pragma endscop
}
