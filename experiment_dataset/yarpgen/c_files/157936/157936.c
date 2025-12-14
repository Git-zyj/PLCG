/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_10 = (((arr_2 [2] [2] [2]) ? (125829120 && 18446744073709551598) : (arr_3 [i_0])));
                arr_4 [i_0] [12] [12] = ((104 ? 872799885 : (-48 < 542472579045032013)));
                var_11 -= (~4103840275);
                arr_5 [i_0] = -2147483629;
            }
        }
    }
    var_12 = ((!var_6) ? var_7 : ((((((var_4 ? var_0 : var_3))) ? var_9 : var_1))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        {
                            arr_17 [i_2] [0] [i_4] [i_2] = (((arr_13 [0] [i_4] [i_4] [i_4] [i_3] [i_2]) ? ((((!(arr_11 [i_4] [i_4 - 1] [i_2] [i_4]))) ? 2064384 : ((((!(arr_8 [0]))))))) : (!48)));
                            arr_18 [i_4] = (((((arr_12 [2] [i_4] [9] [i_4]) ? (((!(arr_6 [2])))) : (((!(arr_8 [i_3])))))) * (((((arr_8 [i_4]) / (arr_13 [i_2] [6] [6] [i_4] [i_4] [i_5 - 1])))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_13 = ((!((((arr_19 [7] [i_6]) ? 4091286267 : (arr_15 [i_3] [i_7]))))));
                                var_14 = (((arr_2 [i_3] [i_3] [i_8]) != (arr_19 [i_3] [4])));
                                var_15 |= (!4292902889);
                                var_16 = ((191127004 ? (arr_0 [i_2] [i_2]) : ((((((-1 ? 19 : 1))) ? (10179259383370863580 != 36) : (!4103840275))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
