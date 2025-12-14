/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_3, (((!(((var_4 ? var_7 : 19))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_13 = ((~(((min((arr_2 [i_0]), 16)) + (arr_0 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] = (((min((arr_8 [i_0] [i_3 - 1]), (arr_8 [i_0] [i_0]))) ^ ((~(((arr_5 [i_2]) & -1))))));
                            arr_13 [i_0] [i_0] [i_0] [i_3] = (((arr_10 [i_0] [i_0]) ? (-32744 - -1) : (arr_10 [i_0] [i_0])));
                        }
                    }
                }
                arr_14 [i_0] = (((-32744 ? -1 : 1268653148)));
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = (((((var_3 ? (arr_18 [11]) : (arr_0 [i_4])))) ? (arr_18 [i_4]) : (((((arr_17 [i_4] [13]) < (arr_9 [0] [i_4] [i_4])))))));

        for (int i_5 = 1; i_5 < 16;i_5 += 1)
        {

            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {
                var_14 = (arr_17 [i_5 - 1] [i_6]);
                var_15 = (min(var_15, (((0 ? 32759 : 50128)))));
                arr_24 [i_4] [i_4] [i_4] = 48815;
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_16 = ((var_8 ? -508627529036096389 : (arr_9 [i_5] [i_5] [i_4])));
                var_17 = arr_9 [i_5 - 1] [i_5 + 1] [i_4];
            }
            arr_28 [i_4] [i_4] = (arr_9 [i_5] [i_5 - 1] [i_4]);
            var_18 *= 1107397209;
        }
        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            arr_32 [i_8] [6] &= ((var_10 ? (arr_6 [i_8] [i_8 + 1]) : (arr_6 [i_8] [i_8 + 1])));

            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                var_19 -= ((15408 ? (arr_35 [i_4] [i_4] [i_4] [i_4]) : -14827));
                arr_37 [i_4] = ((~(!var_1)));
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_20 = 1364232588;
                arr_40 [i_4] = (((arr_18 [i_8 + 1]) && -6362001285075901578));
            }
            var_21 = (((arr_22 [i_4] [14] [i_4]) ? -16 : (arr_22 [i_4] [15] [i_4])));
        }
        var_22 = (min(var_22, (((!(((1268653148 ? 3 : var_10))))))));
        var_23 = (((arr_36 [5] [5] [i_4] [i_4]) ^ (arr_36 [i_4] [i_4] [14] [i_4])));
        arr_41 [i_4] = ((var_7 && (arr_8 [i_4] [i_4])));
    }
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 20;i_13 += 1)
            {
                {
                    var_24 = (((arr_45 [i_11] [i_12] [i_12]) ? (((arr_44 [i_13 + 1]) << (arr_44 [i_13 - 1]))) : ((27603 % (min(68692501, 245))))));
                    arr_50 [i_12] [i_12] [i_13 - 1] [i_12] = (((var_5 ? (((23738 ? var_1 : -32765))) : var_3)));
                }
            }
        }
        arr_51 [i_11] = ((~(arr_45 [i_11] [20] [1])));
        var_25 = (((arr_46 [i_11] [i_11] [i_11]) ? ((((((arr_42 [i_11]) ? 37933 : 980705739))) - (~-13186236935032298))) : (((-(!112))))));
        var_26 += ((!((min((!17338011122430842011), var_0)))));
    }
    var_27 |= 1903640445;
    #pragma endscop
}
