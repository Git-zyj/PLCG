/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (max((-100 % 63710), ((2860757496 ? ((-1251224457 ? 63814 : (arr_6 [i_1]))) : (var_8 || var_3)))));
                    arr_8 [i_2] [i_2] [i_1] [i_2] = var_10;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_21 = (arr_12 [i_2] [i_2 + 1] [i_1] [i_2]);
                        var_22 = (((60 ? var_3 : -60)));
                        var_23 = ((-((var_6 << (-76 + 78)))));
                        var_24 += (~32);
                        var_25 ^= (((223 ? (arr_7 [i_0]) : 2143934710889210448)));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_26 = (arr_4 [10]);
                        var_27 = ((1 ? (arr_5 [11] [i_2 - 3] [i_2 - 3]) : (var_16 << 1)));
                        arr_16 [i_2] [i_4] = (31320 * 57);
                        arr_17 [i_4] [i_2] [i_2] [i_0] = (((((var_18 ? 199 : 7))) && (((~(arr_13 [i_0] [i_0] [i_2] [i_4]))))));
                    }
                }
            }
        }
    }
    var_28 = var_15;
    var_29 -= (~var_13);
    #pragma endscop
}
