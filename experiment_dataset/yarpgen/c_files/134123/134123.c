/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((!(!var_6)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_20 = -32500;
                                var_21 ^= (((var_17 ? 779211790 : 1)));
                                arr_13 [i_0] = (((5710897465758585652 ? 2065556652 : 1)));
                            }
                        }
                    }
                    arr_14 [i_0] [i_1] [i_0] = var_8;
                    var_22 = ((1023 ? (min(-var_7, 104)) : ((-11951 ? 30214 : (~var_16)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_23 -= ((max(762906087887905108, -11951)));
                var_24 = 7606513798795238975;
                /* LoopNest 3 */
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((((max(((var_17 ? 18446744073709551613 : var_8)), (!8613030291935708468)))) ? 22636 : ((min(((-38 ? 1588511637 : 1047916915904422833)), 33))))))));
                                arr_30 [2] [i_5] = (min(((-11942 ? (~var_1) : ((var_13 ? 0 : var_1)))), 40127));
                                arr_31 [i_5] [i_5] [1] [2] [i_9] = (((((((max(var_1, var_16))) ? (((var_17 ? var_14 : var_6))) : -128))) ? -11951 : (min(var_9, 1154966240))));
                                var_26 -= ((79 ? ((max(var_15, -11951))) : (min(var_10, var_8))));
                                arr_32 [15] [i_6] [i_7] [i_8] [i_5] = ((-(min((((33554424 ? 0 : var_0))), (min(var_3, var_4))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 -= var_14;
    #pragma endscop
}
