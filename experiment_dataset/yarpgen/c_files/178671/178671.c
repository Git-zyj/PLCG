/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (1891147837 << (var_8 - 2167040411));
    var_16 &= (((max((min(524287, 524295)), (((242 ? var_14 : var_4))))) != ((4294443001 << (((131071 >> 0) - 131050))))));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_17 &= (((arr_1 [4]) ? (min((((-(arr_1 [2])))), (4294443001 - -15588))) : 255));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((-(~4294443001)));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = (min((((!(524293 > 1986422295)))), var_14));
                }
            }
        }
    }
    var_19 = 4294443006;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        {
                            var_20 = (((!((min((arr_1 [i_5]), 96))))));
                            var_21 = (min((((236 | (255 >= 1)))), ((max(1, (arr_1 [i_5]))))));
                            var_22 = arr_16 [i_3];
                            var_23 = (max(var_23, ((((((1986422292 ? (max(18446744073709551615, (arr_1 [i_3]))) : (((max(1, 5312))))))) ? ((((5311 && 0) >= var_4))) : (max(((~(arr_2 [i_3]))), (((!(arr_0 [i_3])))))))))));
                        }
                    }
                }
                arr_17 [i_3] [i_4 + 4] = (arr_2 [i_3]);
                var_24 = min((max((((-(arr_16 [i_3])))), (((arr_10 [i_4]) ? (arr_13 [i_3] [i_3] [2] [14]) : var_2)))), ((((arr_14 [i_3] [i_4 + 4] [i_4 + 1] [i_4 + 3]) - (31 - -1986422321)))));
                var_25 = (~(min(-724793488, 1)));
                var_26 = (min((((!(3 || var_8)))), ((((243 << (17382 - 17374))) ^ (arr_4 [i_3] [i_4] [i_4 + 1])))));
            }
        }
    }
    #pragma endscop
}
