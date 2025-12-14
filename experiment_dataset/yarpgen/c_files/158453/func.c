/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158453
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 3; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (9044724357899565791LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42513)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_4 + 1] [i_1] [i_4 + 1]))) : (536870784U))));
                                arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */short) (-(4633567935835883240LL)));
                                var_15 = ((/* implicit */_Bool) min(((-(arr_2 [i_0]))), (((/* implicit */unsigned int) arr_10 [i_2] [9U] [i_2] [i_3]))));
                                var_16 -= ((/* implicit */signed char) 3758096511U);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(9223372036854775795LL)))) ? ((~(((/* implicit */int) arr_7 [i_0])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0]))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_2 [i_0]))));
                    var_18 = ((/* implicit */short) arr_7 [i_1]);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 3; i_6 < 10; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 3; i_8 < 10; i_8 += 3) 
                    {
                        var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_5] [i_7])) ? ((~(((/* implicit */int) var_12)))) : (arr_10 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6])));
                        arr_28 [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_8 - 3] [i_6 - 1])) && (((/* implicit */_Bool) arr_26 [i_8 - 3] [i_6 - 1]))));
                        arr_29 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */int) ((unsigned char) arr_23 [i_6 + 1] [i_6] [i_6 - 2]));
                    }
                    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_9])) ? (((((/* implicit */_Bool) arr_25 [i_6] [i_7] [i_6])) ? (((/* implicit */int) arr_12 [i_5] [i_6] [i_6] [(short)11] [i_5])) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_9))));
                        arr_34 [i_6] = ((arr_33 [i_6] [i_6 - 3]) ? (((/* implicit */int) arr_33 [i_6] [i_6 - 3])) : (((/* implicit */int) arr_33 [i_6] [i_6 - 3])));
                        var_21 = ((/* implicit */int) ((signed char) arr_26 [i_5] [i_5]));
                        var_22 = ((/* implicit */int) ((arr_33 [i_9] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5] [i_6 - 2]))) : (((unsigned long long int) var_10))));
                        arr_35 [i_6] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 3758096524U)) ? (((/* implicit */int) (short)-9642)) : (((/* implicit */int) (_Bool)0)))));
                    }
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        arr_39 [i_6] [i_6] [i_6 + 1] [i_6] [1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5] [i_7] [i_7] [i_6 + 1] [i_10])) ? (((/* implicit */int) arr_20 [i_6] [i_6 - 1])) : (((/* implicit */int) var_8))));
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_31 [i_5] [i_5] [i_6] [i_7] [i_7] [i_10]) : (arr_25 [i_5] [i_5] [i_5]))) + (2147483647))) >> (((((/* implicit */int) (short)-32743)) + (32774))))))));
                        var_24 = ((/* implicit */short) ((int) var_4));
                        arr_40 [i_5] [i_6] [i_6] = ((/* implicit */int) ((unsigned char) arr_9 [i_7] [i_6] [i_6] [i_6 - 2]));
                    }
                    var_25 = ((/* implicit */unsigned short) (-2147483647 - 1));
                    arr_41 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */int) ((unsigned short) var_12));
                }
            } 
        } 
        arr_42 [i_5] = ((/* implicit */unsigned char) var_13);
        arr_43 [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)0));
    }
    for (int i_11 = 4; i_11 < 17; i_11 += 1) 
    {
        arr_47 [i_11 + 2] [i_11] = ((/* implicit */short) arr_44 [i_11 - 1] [i_11]);
        arr_48 [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_45 [i_11 - 4] [i_11 - 1]), (((/* implicit */unsigned int) arr_46 [i_11 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_46 [i_11 - 1])))) : ((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_45 [i_11 + 2] [i_11])) : (var_11)))))));
        var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_45 [i_11 + 1] [i_11])))))) ? (arr_45 [i_11 + 1] [i_11]) : (((/* implicit */unsigned int) var_4))));
    }
    var_27 = ((/* implicit */long long int) (~(((unsigned long long int) var_14))));
    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_14)))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (var_2))) | (((((/* implicit */_Bool) 536870772U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))) : ((-(((/* implicit */int) var_5))))));
}
