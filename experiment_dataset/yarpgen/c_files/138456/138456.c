/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [9] [i_1] = (arr_2 [i_0] [i_0]);
                    var_10 = (arr_0 [i_0]);
                    var_11 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((((!(((arr_2 [i_0] [i_0]) && (arr_7 [i_0]))))))) : (min(12592990300437994357, 19457))));
                    var_12 = ((var_6 ? ((-var_3 / (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (((((var_4 ? (arr_0 [i_0]) : 240)) * 31538)))));
                }
            }
        }
    }
    var_13 = ((((~((9223372036854775807 ? var_2 : 18424282037065072318)))) ^ ((((var_0 == 13638206692347001177) ? var_0 : ((var_4 ? 13844 : var_5)))))));

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_14 += ((1 ? -2 : 0));
            var_15 += (6162443243621523764 * (max(((4808537381362550456 + (arr_11 [i_4] [i_3]))), (((18424282037065072318 ? (arr_10 [5] [5]) : (arr_12 [i_3])))))));
        }

        /* vectorizable */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_20 [1] [1] [1] = 51677;
            arr_21 [i_3] [i_5] [i_5] = (var_7 == (arr_10 [i_3] [i_3]));
        }
    }
    #pragma endscop
}
