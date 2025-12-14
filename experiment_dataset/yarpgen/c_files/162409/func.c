/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162409
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((1283351375U) > (arr_0 [i_0])));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    {
                        var_13 = ((((/* implicit */_Bool) ((unsigned int) 2807648628U))) ? (arr_7 [i_0] [i_1] [i_2] [i_3]) : (var_8));
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            var_14 = ((((/* implicit */_Bool) arr_11 [i_4] [i_2] [i_1] [i_0])) ? (arr_11 [i_0] [i_1] [i_2] [i_1]) : (arr_11 [i_0] [i_0] [i_0] [i_0]));
                            var_15 -= (+(33554368U));
                            arr_13 [i_4] |= ((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_10 [i_2]) >= (arr_8 [i_0] [i_0] [i_0]))))));
                            var_16 *= var_10;
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 1) /* same iter space */
                        {
                            var_17 = ((((/* implicit */_Bool) arr_17 [i_1 - 3] [i_5 - 2] [i_5] [i_5 + 3])) ? (arr_17 [i_1 - 1] [i_5 + 3] [i_5] [i_5 - 1]) : (var_7));
                            var_18 = arr_16 [i_5];
                        }
                        for (unsigned int i_6 = 2; i_6 < 10; i_6 += 1) /* same iter space */
                        {
                            var_19 -= ((((/* implicit */_Bool) arr_11 [i_6 + 1] [i_3] [i_2] [i_1])) ? (0U) : (var_1));
                            arr_20 [i_6] = (-(((((/* implicit */_Bool) 749784550U)) ? (var_9) : (var_3))));
                            arr_21 [i_6] [i_0] [i_0] = ((unsigned int) 4294967295U);
                            var_20 *= arr_6 [i_0];
                        }
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_3] = var_7;
                            var_21 *= ((((/* implicit */_Bool) arr_15 [i_7 - 2] [i_3] [i_2] [i_1 - 1] [i_0])) ? (arr_15 [i_0] [i_1 - 3] [i_2] [i_3] [i_7 + 3]) : (arr_15 [i_7] [i_3] [i_2] [i_1 - 3] [i_0]));
                            var_22 = arr_17 [i_3] [i_1] [i_2] [i_3];
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
        {
            var_23 += arr_32 [i_8] [i_9];
            arr_33 [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) ((1003223748U) | (4294967293U)))) ? (max((arr_30 [i_8]), (((((/* implicit */_Bool) var_10)) ? (arr_26 [i_8]) : (65535U))))) : (((unsigned int) ((520093696U) > (arr_27 [i_8])))));
            arr_34 [i_8] [i_9] [i_8] = ((arr_29 [i_8]) | (max((3735686539U), (503316480U))));
            var_24 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_11)))) ? (var_6) : (1588784841U)))) ? (((unsigned int) max((var_0), (arr_27 [i_9])))) : (var_0));
        }
        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
        {
            arr_37 [i_8] = ((((((/* implicit */_Bool) arr_32 [i_8] [i_10])) ? (var_9) : (arr_31 [i_8] [i_10]))) >> (((((unsigned int) 1283351389U)) - (1283351384U))));
            arr_38 [i_8] [i_10] = ((4294967295U) | (((arr_35 [i_8] [i_10]) & (4294967295U))));
        }
        var_25 = ((/* implicit */unsigned int) max((var_25), (((max((((unsigned int) 4278190080U)), (arr_27 [i_8]))) & (((((/* implicit */_Bool) ((4294967295U) ^ (417331604U)))) ? ((~(arr_36 [i_8] [i_8] [i_8]))) : (arr_30 [i_8])))))));
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_28 [i_8] [i_8]), (max((arr_36 [i_8] [i_8] [i_8]), (0U))))))));
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_8])))))));
    }
    var_28 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3709701407U)) ? (var_3) : (var_10)))) ? (var_9) : ((~(var_3))))), (((var_3) | ((+(var_2))))));
    var_29 = ((unsigned int) ((var_0) == (max((var_8), (var_10)))));
    var_30 = ((((/* implicit */_Bool) var_4)) ? ((~(var_5))) : (var_6));
}
