/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(((~305268885) & -var_7))));
    var_14 = (min(var_14, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] = ((((max((arr_9 [i_1] [i_2] [i_3] [i_3]), (arr_13 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0])))) ? (((arr_11 [i_1] [i_1] [i_1]) & (arr_11 [i_1] [i_4] [i_2]))) : ((min((arr_10 [i_4] [i_3] [i_3] [i_2] [i_0] [i_0]), (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                                var_15 = (max(var_15, (((!(arr_5 [i_2] [i_4]))))));
                                var_16 = (arr_0 [i_0]);
                                var_17 = ((max((arr_14 [i_4] [i_1] [i_4] [i_4] [i_4] [2]), (arr_14 [i_0] [i_1] [i_0] [i_0] [1] [i_0]))) / 3989698411);
                                arr_17 [i_0] [i_3] [i_1] [i_0] [i_1] [i_0] [i_0] = (arr_8 [i_0] [i_1]);
                            }
                        }
                    }
                    arr_18 [i_0] [i_1] = ((!(((43509010 ? (!var_3) : (min(var_0, (arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2]))))))));
                    arr_19 [i_0] [1] [i_1] = (min((((((var_2 ? (arr_2 [i_0] [i_1] [i_2]) : 123))) ? (((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2]) || (arr_14 [i_0] [i_1] [i_0] [i_1] [7] [i_2]))))) : (arr_11 [i_1] [i_2] [i_2]))), ((min((((arr_7 [i_0] [i_1] [i_2]) % var_9)), (~-116))))));
                }
                var_18 = (min(var_18, (((((((arr_13 [i_0] [i_0] [i_0] [i_0] [16] [i_1]) | (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) && ((min((max(3989698419, (arr_12 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]))), var_0))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_19 = (min(var_19, (arr_9 [2] [2] [i_6 - 1] [i_6 - 1])));
                            arr_27 [i_0] [i_1] [i_1] [i_6] [i_1] = ((var_1 * (((-(arr_6 [i_6 + 1] [i_6 - 1] [i_0] [1]))))));
                            arr_28 [i_0] [i_1] [i_5] [i_1] = ((((min((arr_5 [i_1] [i_5]), (arr_3 [i_1] [i_5])))) ? 3989698400 : (min(((((arr_9 [i_1] [i_5] [i_1] [i_1]) ? var_4 : (arr_9 [i_1] [i_1] [i_6] [i_6])))), ((var_1 ? var_12 : (arr_10 [i_0] [i_0] [i_1] [i_5] [1] [i_6])))))));
                            var_20 = (arr_14 [i_0] [i_1] [i_1] [i_1] [i_5] [10]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_21 = ((-(((((arr_6 [i_0] [i_1] [i_7] [i_8]) && var_9)) ? (arr_31 [i_8] [i_8 + 1] [i_8 + 1]) : (arr_8 [i_0] [i_0])))));
                            var_22 = (max(var_22, (arr_1 [i_0])));
                            var_23 = (((((max(11808472006118253834, (arr_30 [i_0] [i_1] [i_7]))) & (268435424 & 305268877)))) ? (((((-(arr_6 [i_0] [i_1] [i_0] [i_8])))) ? 251 : (min(16383, var_8)))) : ((((arr_31 [i_8 + 1] [i_8 + 1] [i_1]) || (arr_31 [i_8 + 2] [i_8 + 1] [i_1])))));
                            var_24 = ((-(arr_11 [i_1] [i_1] [i_1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
