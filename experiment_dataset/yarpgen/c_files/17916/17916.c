/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1 + 2] = -16325;
                arr_6 [i_0] [i_0] [i_1 + 1] = ((((((arr_0 [i_1 + 2]) * (arr_1 [i_1] [i_0])))) ? ((((((arr_0 [i_1 + 1]) * -1))) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_4)) : (((arr_1 [i_0] [i_0]) ? 1240 : 160)))) : (-2 > 16325)));
            }
        }
    }
    var_13 = -var_5;
    var_14 -= ((var_3 ? ((var_8 & ((max(1240, 31397))))) : (((!(((var_4 ? var_2 : -32757))))))));

    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2] = ((((min(((169 ? 32756 : 95)), (((arr_3 [i_2] [i_2] [i_2]) / 19009))))) ? (arr_8 [i_2]) : ((((24 ? -68 : 10))))));
        arr_12 [i_2] = (arr_3 [i_2] [i_2] [i_2]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_21 [i_3] = -31416;
                        var_15 -= ((-90 ? (arr_15 [i_6] [i_5] [i_4 - 2]) : (arr_13 [i_3])));
                    }
                }
            }
        }
        var_16 ^= (((((var_7 | (arr_15 [4] [i_3] [4])))) ? (arr_19 [i_3] [i_3] [i_3]) : ((-32767 ? var_5 : (arr_20 [i_3] [i_3] [i_3] [i_3])))));
    }
    var_17 -= -32767;
    #pragma endscop
}
