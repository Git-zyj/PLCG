/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = (((((1259858554 ? (32767 + 4294934529) : (max(1380180433, 4294967295))))) ? ((min((arr_0 [i_0]), (((arr_3 [1] [1] [i_0]) ? (arr_0 [i_1]) : 41501))))) : (((((1 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_0 + 1])))) ? ((((arr_3 [i_0] [i_0] [i_0]) ? 41501 : 64))) : (((arr_1 [i_0]) - (arr_0 [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_21 *= arr_1 [i_2];
                            var_22 = (((((arr_6 [i_0] [i_0]) >> 17)) ^ (((((523776 && (-2147483647 - 1))) ? ((32767 ? (-2147483647 - 1) : 4294967295)) : 4294967293)))));
                        }
                    }
                }
                var_23 ^= ((((min((min(9223301668110598144, (arr_5 [i_0]))), (((6912009227993883969 == (arr_5 [i_1]))))))) ? (((((((arr_4 [14]) ? 127 : -6912009227993883969)) > (((max((arr_7 [i_0] [i_1] [i_1] [i_1]), (arr_6 [i_0] [16]))))))))) : ((3221225472 / (((65518 ? 14 : 1)))))));
            }
        }
    }
    var_24 = (max(((((max(3, var_8))) ? ((262143 ? 14 : var_11)) : (!18446744073709551615))), var_3));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_25 = (max((max(7202528721228861946, (arr_4 [i_5]))), ((((((((arr_5 [i_4]) && (arr_15 [2] [i_5] [i_5]))))) | (min(16777215, -807398576)))))));
                var_26 = ((((max(((((arr_7 [i_5] [i_5] [i_5] [i_4]) && 0))), (max(-6912009227993883969, 511))))) ? ((((((arr_13 [i_5]) ? (arr_15 [i_4] [i_4] [i_4]) : 36028796750528512))) ? 4095 : 2097151)) : (((((arr_14 [i_4] [i_4] [1]) && 0))))));
                var_27 = (max((arr_14 [4] [i_4] [i_4]), ((min(1022, (arr_0 [i_4]))))));
            }
        }
    }
    #pragma endscop
}
