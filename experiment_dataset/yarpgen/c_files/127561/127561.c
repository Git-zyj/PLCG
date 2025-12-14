/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_12 = ((((((15815 & var_5) ? 197 : 40527))) ? var_4 : 23292));
                                var_13 = 18042116305303980288;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_14 = -var_6;
                                arr_17 [i_1] [i_0] [i_0] [i_2] [i_1] [i_1] [i_1] = (var_1 ? ((((((var_6 ? var_10 : 255)) > (((var_2 ? 1 : var_6))))))) : (((((var_8 ? var_11 : var_9))) ? -1 : ((255 ? var_7 : 240)))));
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] = ((((var_0 ? (-127 - 1) : ((15211850727990490645 ? var_4 : 4239061066676749574))))) ? var_11 : (((-35 + 1851169694) ? 15211850727990490652 : var_6)));
                }
            }
        }
    }
    var_15 = (((((((max(8102184512863749256, 112))) ? 1 : ((1107593465302839199 ? 69 : 15211850727990490645))))) ? var_1 : (1314293043 ^ var_8)));

    /* vectorizable */
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        arr_22 [i_7] = ((var_6 ? var_1 : 3485));

        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            arr_25 [i_8] = (((((var_10 ? 11611061875525701732 : var_10))) ? 3872129239 : var_0));
            var_16 = ((var_5 >= ((-20683 ? 3024009081 : 3279660191))));
        }
        for (int i_9 = 1; i_9 < 20;i_9 += 1)
        {
            arr_28 [i_9] = var_5;
            arr_29 [i_9] [i_9] [i_7] = -1;
        }
    }
    var_17 = (((((18446744073709551603 ? var_0 : ((3786450270903979159 ? var_0 : 18446744073709551603))))) ? (max(((9223372036846387200 ? 18446744073709551603 : -124046024)), (((41 ? 60 : 255))))) : 12952361140829516547));
    #pragma endscop
}
