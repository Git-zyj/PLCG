/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_14 ? (((!var_5) - (var_1 != var_11))) : ((((min(var_10, var_8))) ? ((1 ? var_1 : var_2)) : var_2))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_2] |= (--84);
                    var_17 += (min(((var_8 ? (!1) : (((arr_4 [i_0]) ? var_7 : (arr_6 [i_2] [i_2] [i_2]))))), ((((max(1, var_15)) ? var_12 : ((((arr_8 [i_2] [i_2] [i_2]) || (arr_6 [i_2] [i_1] [i_2])))))))));
                    var_18 += (-2147483647 - 1);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_19 = ((-6036411120084299991 ? (((var_14 ^ 1) ? (arr_12 [i_4]) : (max(var_10, 1)))) : (((((428431133 ? var_1 : 1)))))));
                        var_20 = (max(var_20, ((((-1 && (var_5 && 1)))))));
                        var_21 = (min(var_21, (((1 & (((arr_10 [i_3] [i_6]) & (arr_10 [i_3] [i_3]))))))));
                    }
                    arr_21 [i_3] [i_4] [i_5] = (((((arr_13 [i_3] [i_5]) != (~var_12))) ? (min((((var_10 >= (arr_20 [9] [i_4] [9] [9] [i_5])))), var_4)) : (((var_4 ? (min(var_2, 1)) : (((1 && (arr_14 [i_3] [i_4])))))))));
                    arr_22 [i_3] [i_4] [i_3] [i_3] = ((max(((min(var_7, (arr_14 [i_3] [i_3])))), (max((arr_10 [i_4] [i_4]), var_0)))));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    arr_25 [i_3] [i_3] [i_3] [1] = -1;
                    var_22 = ((((((arr_17 [i_3] [i_4] [i_4] [i_4]) ? (arr_17 [i_3] [i_4] [i_7] [i_7]) : (arr_17 [i_3] [i_4] [i_7] [i_7])))) && (((((95 ? 1 : (arr_19 [i_3] [i_3] [i_3] [i_3] [20] [20])))) || ((max(1333582168, (arr_13 [i_3] [i_4]))))))));
                    arr_26 [i_3] [15] [i_3] [i_3] = ((-((-((-(arr_23 [i_3])))))));
                    var_23 = ((((arr_11 [i_3] [i_3]) || var_2)) ? (arr_16 [i_3] [i_4]) : ((((arr_16 [i_3] [i_3]) && 21))));
                }
                arr_27 [1] |= (((((((var_11 ? 226 : 1333582168)) ^ ((max(1, 1)))))) ? var_3 : ((~(arr_11 [i_4] [i_3])))));
            }
        }
    }
    #pragma endscop
}
