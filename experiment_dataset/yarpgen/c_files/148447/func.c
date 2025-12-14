/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148447
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) 1061084134U);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)59966);
        var_12 = 790259434;
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)59962)))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 3; i_2 < 13; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_13 [i_1 + 1] [i_2 - 3] [i_3] = ((/* implicit */int) (+((+(3242673803U)))));
                    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(2147483642)))))))));
                    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3233883170U))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) max((var_16), ((!(((/* implicit */_Bool) (~(790259434))))))));
        var_17 = (_Bool)1;
        var_18 = (signed char)22;
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            var_19 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(1061084134U))))));
            arr_18 [i_5] = ((/* implicit */signed char) (unsigned short)31290);
            var_20 = ((/* implicit */_Bool) 2147483647);
            /* LoopSeq 3 */
            for (unsigned short i_6 = 3; i_6 < 11; i_6 += 1) 
            {
                arr_21 [i_6] [i_6] [i_6 + 3] [i_6 - 1] = ((/* implicit */int) (+((~(2962595582U)))));
                arr_22 [i_6] [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) 259564331U);
                var_21 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
            }
            for (int i_7 = 4; i_7 < 14; i_7 += 1) /* same iter space */
            {
                arr_26 [(unsigned short)0] [i_7] [i_7] [i_4] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)5597))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (unsigned short)50704))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (unsigned short)46138))));
                            var_24 = 3429285062U;
                            arr_33 [i_9] [i_7] [i_7] [i_8] [i_4] [i_8] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))));
                        }
                    } 
                } 
                var_25 = (_Bool)1;
            }
            for (int i_10 = 4; i_10 < 14; i_10 += 1) /* same iter space */
            {
                var_26 = ((/* implicit */signed char) (~(1090629811)));
                var_27 = ((/* implicit */unsigned short) 865682234U);
                arr_36 [i_10] [i_5] [i_4] [i_10] = ((/* implicit */int) (~((+(3429285061U)))));
                var_28 *= ((/* implicit */_Bool) -2147483647);
            }
        }
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (unsigned short)17399))));
    }
    var_30 |= (!(((/* implicit */_Bool) 4294967295U)));
}
