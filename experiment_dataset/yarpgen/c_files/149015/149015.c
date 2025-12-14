/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_6;
    var_18 = (-28209 % 3);
    var_19 = (((((var_2 ? (var_6 == -11) : 1073741824))) ? -1 : ((1 ? 1 : (max(var_6, 10535258401394145214))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [i_1] = (((min(1555240275, (arr_3 [i_0 - 1])))));
                arr_9 [i_0] [i_0] [i_1] = ((-((-128150133 ? (arr_3 [i_0 + 4]) : -28227))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = 48;
                            arr_14 [i_3] = (min(18446744073709551614, 128150133));
                        }
                    }
                }
                var_21 = (min(((25408 ? (arr_0 [i_0 - 1]) : 12965722926549502101)), ((min((arr_1 [i_0 - 1] [i_0 - 1]), (((!(arr_6 [i_0] [i_0] [i_1])))))))));
                arr_15 [i_0 - 1] [i_1] [i_0 - 1] = ((((7722 ? -1073741824 : (arr_13 [i_0 + 3] [i_0 + 1] [i_0 + 4] [i_0 - 1])))) ? ((1555240275 ? (arr_5 [i_0 + 1] [i_0 + 3] [i_0 + 3]) : (arr_7 [i_1] [i_0 + 1]))) : -4);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                {
                    var_22 = (4611686018427387904 > 1);
                    var_23 = 620908317;
                }
            }
        }
    }
    #pragma endscop
}
