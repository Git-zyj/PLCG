/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 = (~59);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [9] = (((((var_4 ? (((1099511627768 ? (arr_2 [i_1] [i_1] [i_0]) : 1))) : ((1099511627768 ? (arr_0 [i_1]) : 18446742974197923848))))) && (((1099511627760 ? (arr_4 [i_1] [i_0]) : (arr_2 [i_1] [i_0] [i_0]))))));
            var_17 = ((((((arr_4 [i_1] [i_1]) >= (arr_2 [i_0] [1] [i_0])))) << (((((arr_3 [i_1] [i_1]) ? 1 : 2623145176))))));
            arr_6 [i_0] = (((!-32) - var_10));
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_18 *= ((!-1) ? (((((5472 >> (-1 + 17))) & (~7)))) : (((((-1 ^ (arr_1 [i_3])))) ? -var_2 : -1)));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 7;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_19 *= 1;
                                arr_17 [i_0] [i_2] [i_3] [i_2] [i_5] = ((var_8 ? (((arr_11 [i_4 + 2] [i_4 + 3] [i_4 + 3] [i_4]) ? var_5 : (min(980, 262136)))) : ((((((!(arr_4 [i_2] [i_4])))) / var_10)))));
                            }
                        }
                    }
                    arr_18 [i_2] [i_2] [i_2] [i_0] = ((((((16 ? 16 : -1)))) ? (((~(arr_1 [i_0])))) : (((65535 ? -346609777585658270 : 13801374714480306470)))));
                }
            }
        }
    }
    var_20 -= -134217216;
    var_21 = (min(var_21, (!-346609777585658257)));
    var_22 = var_14;
    #pragma endscop
}
