/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((((!144) ? (var_7 + 49258) : ((1 ? 15635919200329295158 : var_12)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((((!(arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1]))))) + (((arr_3 [i_1] [i_1]) ? (3038879179 <= 1256088092) : (var_10 ^ 243))))))));

                    for (int i_3 = 4; i_3 < 15;i_3 += 1) /* same iter space */
                    {
                        var_15 ^= (max((max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), -99)), ((((859893744 ? 1 : 1))))));
                        var_16 *= ((var_4 << (1256088095 - 1256088078)));
                        var_17 = (((3038879190 ? var_5 : 1)));
                        var_18 = (min((min((arr_6 [i_1] [i_1] [i_3]), (var_6 - 1))), (4294967295 != 1)));
                        var_19 &= ((!((max(3038879156, var_1)))));
                    }
                    for (int i_4 = 4; i_4 < 15;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            var_20 = ((-11376 > (max(((2554156051 ? (arr_7 [i_0] [i_0] [i_0]) : (arr_4 [i_0]))), ((((arr_11 [9] [i_1] [i_1] [i_4] [12]) ? (arr_11 [i_4] [i_4] [i_4 - 2] [i_4] [i_4]) : (arr_14 [i_0] [1] [1] [i_0] [i_0] [i_0]))))))));
                            var_21 = (arr_6 [i_0] [i_1] [i_5]);
                            var_22 = ((((!((((arr_7 [i_1] [i_2] [i_4]) ? -1537521780 : 2265722750941548630))))) ? ((var_1 ? (arr_14 [i_0] [i_1] [i_0] [i_4] [i_5] [i_5]) : (~var_2))) : (((var_12 ^ var_6) ? -153 : (arr_4 [i_0])))));
                        }
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            var_23 -= 58;
                            var_24 = (max(var_24, (((-((((var_8 > 1) > (min(15, (arr_2 [i_6])))))))))));
                            var_25 &= var_11;
                        }
                        var_26 |= (((249 + 6) ? 1 : (arr_2 [i_1])));
                        var_27 ^= (~(min((min(var_4, 1361218345)), (~1))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
