/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_0 ? 1073741823 : var_15));
    var_17 *= (((((var_0 ? ((var_8 ? var_10 : var_11)) : var_15))) ? (min((var_14 - 4294967280), (var_2 && var_5))) : ((((((((var_14 + 2147483647) << (var_8 - 158)))) && var_15))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_18 = (min(((((min(33296, var_7)) > 2047))), (max((arr_0 [i_1] [i_0]), (((!(arr_0 [i_0 - 1] [i_1]))))))));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_19 = (min((var_10 < var_4), ((~(((arr_1 [i_0 + 3] [i_1]) % 5221173656457542608))))));
                    arr_8 [i_1 + 1] = var_14;
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_12 [i_3] [i_1] = (((((255 > (arr_5 [i_0 - 1] [i_3])))) <= (!10720275369096151598)));
                    var_20 = (max(((((var_13 ? (arr_1 [i_3] [i_0]) : 3919324544)))), (max(((var_1 ^ (arr_11 [0] [0]))), var_5))));
                    var_21 = (min(var_21, ((max(var_14, (min(var_13, ((var_10 ? -97 : var_3)))))))));
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 *= ((-(min(52230, (min(var_9, (arr_19 [i_0] [i_1] [i_0] [i_5] [i_1])))))));
                                arr_20 [i_0] [i_0] [i_0] [i_4] [i_5] [i_0] = ((-((-1 ^ (arr_10 [i_1 + 1] [i_6 - 1] [i_6])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = (min(var_23, ((((-((var_6 ? -6452105389205706849 : 4294967278))))))));
    var_24 = (var_1 > var_11);
    #pragma endscop
}
