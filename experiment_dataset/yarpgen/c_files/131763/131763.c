/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 14293337399095388053;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((((arr_0 [i_0]) | -1283932237))) ? (((4153406674614163563 ? (arr_0 [i_0]) : (arr_2 [i_0])))) : 610416928121655509));
        arr_4 [i_0] [i_0] = (arr_2 [4]);
        var_21 = (arr_0 [i_0]);
        var_22 &= (~65535);
        var_23 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = (((-1283932246 | 14293337399095388052) | (arr_5 [i_1])));
        arr_9 [i_1] = (((arr_6 [i_1] [i_1]) != (((arr_1 [i_1]) ? ((((!(arr_6 [i_1] [i_1]))))) : (((arr_2 [i_1]) ? -2259759877155554935 : (arr_5 [i_1])))))));
        var_24 = (((((arr_6 [i_1] [i_1]) <= (arr_5 [i_1]))) ? 1 : (((arr_1 [i_1]) ^ (arr_5 [i_1])))));
        arr_10 [i_1] = (arr_2 [i_1]);

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_15 [i_2] = (arr_2 [i_2]);
            var_25 -= (max(((((arr_6 [12] [i_1]) <= (arr_5 [i_2])))), ((1445848361 ? (((arr_5 [i_1]) ? (arr_1 [i_1]) : (arr_2 [i_1]))) : (arr_12 [i_1])))));
            var_26 = (i_2 % 2 == 0) ? (((max(-113920834, (arr_11 [i_2]))) * ((((arr_0 [i_1]) ? (((arr_2 [i_1]) ? 1665213644 : (arr_1 [i_1]))) : (((((arr_7 [i_1]) && (arr_0 [i_1])))))))))) : (((max(-113920834, (arr_11 [i_2]))) / ((((arr_0 [i_1]) ? (((arr_2 [i_1]) ? 1665213644 : (arr_1 [i_1]))) : (((((arr_7 [i_1]) && (arr_0 [i_1]))))))))));
            arr_16 [i_2] [i_2] [i_2] = ((8345722755869820360 ? 32767 : (arr_1 [i_2])));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_27 = (min(var_27, ((((arr_14 [i_1] [i_1] [i_1]) ^ ((~(min((arr_23 [i_1] [i_2] [i_2] [10] [i_4] [10]), (arr_7 [i_1]))))))))));
                            var_28 = arr_5 [i_4];
                            arr_27 [i_4 + 1] [i_1] [i_1] [i_2] [i_5] = ((((((arr_12 [i_4]) > 12950311776174396230)) ? 285501449 : ((88 ? -1283932243 : (arr_18 [i_3] [i_2]))))));
                            arr_28 [i_2] = arr_26 [i_1] [i_1] [i_2] [i_4 - 1] [i_3] [i_1];
                        }
                    }
                }
            }
        }
    }
    var_29 = var_2;
    #pragma endscop
}
