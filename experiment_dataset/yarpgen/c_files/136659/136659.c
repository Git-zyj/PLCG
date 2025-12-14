/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (min(var_13, var_5));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = ((-(max((arr_1 [i_0] [i_1]), 0))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= (((arr_0 [i_0]) << 0));
                    var_15 = ((815442716 / (var_4 * var_7)));
                }
            }
        }
        var_16 |= ((((4294967295 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (arr_4 [13] [i_0])))));
        var_17 = max(3023368954, 18446744073709551615);
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_12 [5] = (((-5993800018672478169 <= (31 && 12935652158136913131))));
        var_18 = ((12935652158136913137 < 12) & (((((17063963838202872622 ? 9185738994311933002 : 24734))) ? ((var_1 ? 3445552476895607646 : 11317182338257555467)) : 16)));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_19 -= (((((21 <= (var_2 || -1)))) < (arr_9 [i_5] [i_4])));
                var_20 = (min(var_20, -17063963838202872650));
                arr_19 [i_5] = (((((((arr_11 [i_4] [i_5]) ? -25672 : var_7))) ? 5511091915572638500 : -1)));

                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    var_21 = (max((((((((arr_13 [i_4]) < (arr_20 [i_6] [i_4] [i_4] [i_4]))))) > ((var_4 - (arr_22 [i_6] [i_5] [i_4]))))), var_10));
                    var_22 = ((!(((((min(var_10, var_6))) ? (arr_11 [i_4] [i_4]) : (max((arr_16 [i_4]), (arr_16 [i_4]))))))));
                    arr_23 [i_5] [i_5] [i_5] [i_5] = ((4294967284 < (arr_17 [i_5])));
                    arr_24 [i_5] = (max(606739419, ((18014398501093376 ? (arr_21 [i_5] [i_6] [i_5] [i_5]) : (arr_16 [i_6])))));
                }
            }
        }
    }
    #pragma endscop
}
