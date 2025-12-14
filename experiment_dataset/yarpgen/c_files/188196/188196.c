/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188196
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((var_3 > 1), ((var_3 ? var_5 : 1))))) ? ((((min(var_11, var_12))) ? (!5820746945343634029) : ((var_7 ? var_0 : var_0)))) : var_12));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_16 = min(((((min(0, -1705918070)) != ((var_12 ? var_10 : var_6))))), (min((min(1, var_9)), (arr_0 [i_0] [i_1]))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] = (((min((arr_5 [9] [1] [i_0]), (!var_13)))) != ((min((1 || -24981), var_12))));
                        arr_12 [i_3] [i_2] [i_1] [i_1] [i_0] = ((((((((-(arr_4 [i_0] [i_0])))) & (var_4 - 5820746945343634046)))) ? (--181) : (min(((-24981 ? 5820746945343634029 : (arr_1 [i_0] [i_1]))), (!1)))));
                    }
                }
            }
        }
        var_17 = var_1;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 18;i_6 += 1)
            {
                var_18 += (min((arr_15 [i_4] [i_4] [i_4]), var_0));
                var_19 = (((((((~(arr_18 [i_6] [i_4] [i_4])))) ? (arr_15 [i_6] [i_5] [i_4]) : ((8 ? var_7 : var_7)))) ^ var_7));
                var_20 = ((181 ? var_4 : (min((min(var_13, var_0)), ((min(1, 1)))))));
            }
            var_21 = var_14;
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    arr_24 [i_4] [i_7] [i_8] = (arr_23 [i_4] [i_7] [i_8]);
                    var_22 = (((!var_0) ? (min(107, ((~(arr_21 [i_4] [1]))))) : ((((arr_14 [i_4]) ? (((arr_17 [i_4] [i_7] [i_7]) ? var_2 : var_11)) : 31134)))));
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1)
    {
        var_23 = (((!var_12) ? ((((min(var_3, 1))) ? var_8 : var_2)) : (((min(30, (arr_13 [i_9])))))));
        var_24 -= ((var_8 << (min((((41 ? 1 : var_7))), ((-10312 | (arr_21 [i_9] [i_9])))))));
        var_25 = 72;
    }
    var_26 |= (-var_0 << 1);
    var_27 = (max(var_27, ((min((((var_14 ? var_3 : var_6))), (min(var_13, var_7)))))));
    #pragma endscop
}
