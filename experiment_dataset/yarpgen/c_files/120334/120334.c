/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120334
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(((((var_6 >> 1) ? var_4 : (~var_3)))), var_7));
    var_14 = (max(-23244, 3050214601));
    var_15 = var_9;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] = (((((23228 - ((var_0 ? (arr_4 [i_0] [i_0]) : var_9))))) ? ((-var_4 ? var_9 : ((1244752695 ? var_5 : var_6)))) : 528310942));
            var_16 = ((~((min((arr_0 [i_0]), ((max(var_12, (arr_3 [i_0] [i_0])))))))));
            var_17 = ((var_5 % (((arr_1 [i_0]) - (arr_5 [i_0] [i_1] [i_0])))));
        }

        for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_18 = (~var_11);
            var_19 = ((-((max((arr_3 [i_2 + 1] [i_2 + 2]), (arr_3 [i_2 + 1] [i_2 + 2]))))));
            var_20 = (((((-((3050214606 << (23715 - 23688)))))) ? ((1 ? (arr_1 [i_2]) : (arr_5 [i_2] [i_2] [i_2]))) : ((((((arr_2 [i_0] [i_2]) ? (arr_6 [i_0] [i_0]) : 3050214592))) ? ((max(var_1, var_5))) : (~var_3)))));
            var_21 = ((-((var_5 / (arr_2 [i_2 + 1] [i_2 - 2])))));
            arr_10 [i_2] [i_2 - 1] [i_0] = ((((min(3050214601, ((1224 ? 4289 : 1))))) || (((3050214597 >= var_0) != ((~(arr_0 [i_0])))))));
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_22 = ((((!(arr_9 [i_3 - 2]))) ? 1 : ((((var_4 ? var_8 : var_5))))));
                var_23 = ((+(max((~48694), (((((arr_11 [i_4] [i_0]) + 9223372036854775807)) >> (((arr_11 [i_0] [i_0]) + 966800554153750732))))))));
            }
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                var_24 = ((-(arr_8 [i_0])));
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_25 = ((-((max((arr_12 [i_7 - 1]), 18657)))));
                            var_26 = (max(var_26, ((((((arr_4 [i_0] [i_3]) + (((min((arr_13 [i_0] [i_0] [i_0] [i_0]), (arr_18 [i_5] [i_5]))))))) + ((((((arr_15 [i_7] [i_3] [i_0]) ? var_11 : 36845)) - ((var_2 + (arr_8 [i_6])))))))))));
                        }
                    }
                }
            }
            arr_21 [i_3] [i_0] = (min(var_0, (min((arr_14 [i_3 + 2] [i_3] [i_3] [i_3 + 2]), 3050214607))));

            for (int i_8 = 1; i_8 < 15;i_8 += 1)
            {
                var_27 += (max(16825, 6781));
                var_28 |= (var_10 ? 1244752706 : (arr_2 [i_0] [i_0]));
                var_29 = (((2730835897141583540 + 2106) ? (((114 ? 4046 : 12725))) : (((arr_13 [i_8 - 1] [i_3 - 2] [i_3] [i_0]) ? var_10 : var_0))));
            }
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            var_30 = (max(((max(((((arr_25 [i_0] [i_0] [i_0]) && 344992514))), (arr_14 [i_0] [i_9 + 1] [i_9 + 2] [i_0])))), ((-var_6 >> (((((arr_22 [i_0] [i_0]) | var_5)) + 12355))))));
            var_31 = (~63429);
            arr_26 [i_0] [i_0] = ((-((472420132 ? 1 : -279162412))));
            arr_27 [i_0] [i_0] [i_9] = ((((-var_3 ? 3050214594 : 1)) / ((((-17443 + 2147483647) << (4316125013588069304 - 4316125013588069304))))));
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_32 ^= var_12;
        var_33 = ((-(arr_29 [i_10])));
        arr_30 [i_10] = ((~(((arr_29 [i_10]) ? (arr_29 [i_10]) : (arr_29 [i_10])))));
    }
    #pragma endscop
}
