/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (((max(((((arr_0 [i_0]) || -48))), (arr_0 [i_0])))) >= ((-20 ? 127 : (((arr_0 [i_0]) | (arr_0 [i_0]))))));
        var_11 ^= (((((max(9641, 127))) || (((-18 ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (((246 ? (arr_0 [i_1]) : (arr_0 [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_12 = (max(var_12, ((max(((min((arr_6 [i_1] [i_3]), (arr_6 [i_1] [i_3])))), ((55894 >> (arr_2 [i_3] [i_3]))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] = (arr_14 [i_1] [i_4 - 1] [i_1]);
                                var_13 = -20;
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_26 [i_1] = (((((var_8 & (arr_3 [i_6] [i_1])))) || ((((arr_3 [i_1] [i_8]) ? -16 : (arr_3 [i_1] [i_1]))))));
                        arr_27 [i_1] [i_1] [i_7 - 1] [i_1] = -3;
                        arr_28 [i_1] [i_1] [i_6] [i_7] [i_1] [i_8] = (arr_4 [i_1]);
                    }
                }
            }
        }
        var_14 = var_1;
    }
    var_15 = (max((min(65492, var_1)), 15));
    #pragma endscop
}
