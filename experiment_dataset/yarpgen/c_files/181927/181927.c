/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = ((~(min(-2, ((max(1, 12240)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [i_1] = ((((((max(3313, 1))) ? (arr_1 [i_0] [i_0]) : (var_4 - 12237))) != (((var_8 ? (arr_4 [i_1]) : 642296389364217504)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] = 9223372036854775788;
                                var_15 = (((((((var_12 << (((arr_2 [i_0 - 1] [i_0]) - 201))))) ? (!12240) : (min((arr_8 [i_4] [i_3]), 53296)))) / var_7));
                            }
                        }
                    }
                    var_16 = var_4;
                    var_17 = (min(var_17, (arr_7 [2] [2])));
                }
            }
        }
    }

    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_18 = (arr_19 [i_6]);
                        var_19 *= 29352;
                    }
                }
            }
        }
        arr_24 [i_5] = ((((32746 ? (arr_16 [i_5 - 3] [4]) : var_10)) % (arr_16 [i_5 + 2] [4])));
        var_20 = (min(var_20, (((~(((!(arr_23 [i_5 - 3] [i_5 + 1])))))))));
    }
    var_21 = (min(var_21, (max(((252 ? (((18409 ? 6904245005200956630 : 1418194639))) : (21 - 15037845781027602320))), (1661969369 < var_10)))));
    #pragma endscop
}
