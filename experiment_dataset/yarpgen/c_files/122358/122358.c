/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((((22434 ? var_6 : 2147483639))) ? ((max(15, var_6))) : var_9))) / ((-204 ? (max(9929109278544519007, var_16)) : -2147483639))));
    var_18 = (var_3 >= var_14);
    var_19 ^= var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_2] [i_1] [i_0] = ((((8462 ? -123 : -1715570735)) / -2147483639));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [i_4] [i_1] = max((var_4 > var_8), (max(var_9, 0)));
                                var_20 += (arr_2 [i_1] [i_2] [i_3]);
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    var_21 = (-(max(((var_14 ? var_13 : -1715570735)), -1715570742)));
                    arr_15 [i_0] = 219;
                    arr_16 [i_0] [i_0] [23] [i_0] = var_7;
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_19 [i_0] = (((((3471234867197473101 ? var_11 : -93))) && (arr_13 [1] [i_1] [i_6] [i_6])));
                    var_22 *= ((10862997644761013680 << ((((-7533145721447017746 ? 8458976559399858643 : 1)) - 8458976559399858589))));
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_26 [i_0] [i_0] [5] [20] [i_0] [i_0] = 1568025815599132271;
                        var_23 ^= (((-1568025815599132258 ? (arr_1 [i_8]) : var_11)) | ((8458976559399858643 ? var_1 : 16055)));
                    }
                    arr_27 [i_7] [i_7] |= 219;
                }
                var_24 &= max(4020327137, ((1 ? (arr_5 [i_1] [i_1] [i_1] [1]) : -6850839352970497416)));
                var_25 = -4824163329430107042;
            }
        }
    }
    #pragma endscop
}
