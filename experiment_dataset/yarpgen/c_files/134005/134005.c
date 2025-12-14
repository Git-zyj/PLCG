/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [20] [i_1] [10] [i_2] = (((((-1115534425 ? 1699760660 : -2059718152))) & (((arr_2 [7] [i_2 - 1] [i_2]) ? (arr_5 [i_2] [i_2 + 1] [1]) : (arr_5 [0] [i_2 + 1] [i_2 + 1])))));
                    arr_8 [i_2] [i_1] [11] [i_0] = ((-((~(((arr_5 [i_0] [i_0] [i_2]) >> (((arr_0 [i_1]) - 1820193843))))))));
                }
            }
        }
    }
    var_17 &= ((!(((-2050472971 ? (62 && -1699760676) : 33546240)))));
    var_18 += var_15;

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                {
                    arr_16 [i_3] [0] [0] = -0;
                    arr_17 [i_3] [0] = (((((-(((arr_5 [i_5] [i_4] [11]) % (arr_9 [i_3])))))) ? (arr_14 [3] [3] [9]) : (arr_12 [i_3])));
                    arr_18 [i_3] [i_3] = (((arr_10 [0] [i_5]) || ((!(arr_5 [i_5 + 1] [i_5 - 1] [i_5 + 2])))));
                }
            }
        }
        var_19 = (((((((arr_4 [i_3] [i_3]) > (arr_5 [i_3] [i_3] [i_3]))) ? (arr_9 [i_3]) : (arr_15 [i_3] [i_3] [i_3]))) & ((((!(arr_3 [i_3] [i_3])))))));
        var_20 = (max(var_20, (((!4) || ((!(arr_11 [0])))))));
        var_21 = (min(var_21, ((((!62) + ((((((arr_4 [i_3] [i_3]) & (arr_6 [i_3] [i_3])))) ? (arr_14 [1] [i_3] [i_3]) : (((((arr_3 [i_3] [10]) < (arr_12 [i_3]))))))))))));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_23 [i_6] = (-((((((arr_19 [i_6] [i_6 - 1]) ? (arr_14 [i_6] [i_6] [i_6]) : (arr_21 [i_6]))) > (((((arr_10 [2] [i_6]) >= (arr_2 [i_6] [7] [0])))))))));
        arr_24 [3] = (((((arr_14 [0] [i_6] [i_6]) ? 2050472970 : ((2288588402 ? 28672 : -2050472971)))) << (((arr_14 [i_6 - 1] [i_6] [i_6 - 1]) - (arr_14 [i_6 - 1] [7] [i_6 - 1])))));
    }
    #pragma endscop
}
