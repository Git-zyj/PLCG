/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_15 = (min((2308591844 + 9142), (((355651007 ? 21308 : var_6)))));
        arr_2 [i_0] = (min(var_10, (((((1612531763 ? var_10 : -18281))) ? var_11 : (~var_3)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [12] [i_3] [6] [3] [17] = (((((((var_2 ? var_0 : 1612531763))) ? ((max(var_9, 355651007))) : var_9)) > ((((((var_10 ? var_11 : var_14)) >= (((1 ? 2147483647 : 1)))))))));
                        var_16 ^= (((108638541 ? (((6572012445436187191 ? 32767 : var_13))) : var_1)));
                        arr_11 [20] = 1;
                        var_17 = (max(((max(26698, var_5))), (((((var_10 ? var_11 : var_2))) ? 1 : ((min(var_6, var_3)))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_14 [i_4] = (((((((625057701908674400 ? var_8 : 4578421201011743690))) ? 0 : (0 + var_1)))) ? (min(((var_5 ? var_1 : var_2)), (var_8 < var_7))) : -442461643539602125);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                {
                    var_18 = (min(((((max(var_9, 134152192))) ? ((355651007 ? -32746 : 16638242977501809043)) : (var_14 >= 2308591826))), var_14));
                    var_19 = (min(((var_6 ? ((var_10 ? 1 : 229)) : var_6)), (((13045 > (var_3 >= var_9))))));
                    var_20 = (max((((~32767) | -4242)), (min((var_13 <= 0), (min(var_14, var_13))))));
                    arr_20 [i_5] [1] = (max(((((max(127, 0))) ? ((var_12 ? 8092527552153993623 : var_6)) : (8092527552153993623 - 1))), ((((8 ? 25867 : var_10))))));
                }
            }
        }
    }
    var_21 &= (((((var_10 ? (var_5 * 17839514401263469411) : var_0))) ? 10354216521555557981 : var_5));
    #pragma endscop
}
