/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((var_9 ? (max((min(-112183722660905518, 1)), 89)) : ((max((min(var_13, 65535)), (((var_3 ? var_8 : 27))))))));
    var_21 ^= (((((((65525 ? var_8 : var_3))) ? var_12 : -var_18)) + var_12));
    var_22 = var_3;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_23 = (max(var_23, -65535));
        var_24 = (min(var_24, (((var_10 ? var_7 : var_2)))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_25 = (max(var_25, ((((max(-1792600897767538289, 2570805075197928276)) >= (((max((arr_9 [i_4] [i_3] [i_2] [17]), (arr_9 [i_1] [i_2] [i_3] [i_4]))))))))));
                        var_26 = (max(var_26, ((((231 && (arr_2 [i_1]))) ? (arr_3 [i_1] [i_1]) : ((((arr_4 [i_1] [1] [i_4]) >= var_2)))))));
                        var_27 += ((9 ? (-32767 - 1) : 91));
                        var_28 -= (max(var_8, (~var_8)));
                        var_29 = (min(var_29, ((max(((min((max(-21174, 24)), 240))), 26345)))));
                    }
                }
            }
        }
        arr_13 [i_1] [i_1] = var_13;
        arr_14 [i_1] = ((-1385918004703316842 ? 15580 : 6657));
        var_30 -= (min((((arr_11 [i_1] [i_1] [i_1] [i_1]) | 171445130854893907)), -21174));
        var_31 = (((((var_5 >> (146 - 138)))) ? (max(231, ((-883038538 ? var_0 : var_10)))) : (((var_9 ? 0 : (1 & 1664356153))))));
    }
    #pragma endscop
}
