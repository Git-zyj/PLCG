/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163340
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
    var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (((+(1048448U))) == (((/* implicit */unsigned int) ((var_2) ? (var_10) : (((/* implicit */int) (signed char)-85))))))))));
    var_14 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)16)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : ((-(((/* implicit */int) var_9))))));
        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)17836))) + ((-(2611364845U)))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_8))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            arr_13 [i_1] [i_2] = var_6;
            var_17 = ((/* implicit */signed char) arr_8 [(short)15]);
        }
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) var_8);
            var_19 = ((/* implicit */signed char) (-(arr_9 [i_1])));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_21 [i_1] = ((/* implicit */unsigned long long int) var_10);
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                arr_24 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 27531968407131200LL)) ? (((((/* implicit */_Bool) arr_0 [i_1] [(signed char)10])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)12832)))) : (((/* implicit */int) (unsigned char)8))));
                arr_25 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                /* LoopSeq 3 */
                for (long long int i_6 = 3; i_6 < 17; i_6 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-58))))) ^ ((+(-340974893)))));
                    var_21 = ((/* implicit */int) ((arr_27 [i_6] [i_6 + 1] [i_6 - 3] [i_6]) - (arr_27 [i_6] [i_6 + 1] [i_6 - 3] [i_6])));
                    var_22 = ((/* implicit */int) (-(((((/* implicit */_Bool) 1048448U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2359))) : (7578368251425920774ULL)))));
                }
                for (short i_7 = 2; i_7 < 15; i_7 += 4) 
                {
                    arr_31 [i_1] [(_Bool)1] = ((((/* implicit */_Bool) arr_27 [(short)0] [i_7 + 3] [i_5] [i_7])) ? (arr_29 [i_1] [i_7 + 2] [17U] [i_4]) : (((/* implicit */long long int) var_12)));
                    arr_32 [i_1] [i_1] [i_4] [i_4] [i_5] [i_7 + 2] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) var_12)))));
                    arr_33 [i_7] [i_5] [i_4] [i_1] = arr_7 [i_7];
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        arr_36 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((arr_30 [i_5] [i_5] [i_5] [i_7 + 4] [i_7 + 4] [i_4]) - (arr_30 [i_7] [i_7] [i_5] [i_7 + 4] [i_8] [i_1])));
                        var_23 = ((/* implicit */signed char) (((~(var_3))) | (((/* implicit */unsigned long long int) arr_9 [2U]))));
                        arr_37 [i_8] [i_7 - 1] [i_5] [i_4] [i_8] = ((/* implicit */long long int) (+(16948102038362635151ULL)));
                    }
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (-(1048456U))))));
                }
                for (signed char i_9 = 2; i_9 < 17; i_9 += 4) 
                {
                    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483630)) ? (var_10) : (((/* implicit */int) ((signed char) (short)13545))))))));
                    arr_40 [i_5] = ((/* implicit */unsigned int) var_9);
                    arr_41 [i_1] [i_4] [i_5] [i_9 + 1] = ((/* implicit */signed char) ((((/* implicit */int) var_4)) != (((/* implicit */int) arr_34 [i_9] [i_9 + 2] [i_9] [i_9] [i_9 - 2] [i_9 + 2] [i_9]))));
                    var_26 = ((/* implicit */short) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 2147483632))));
                }
                arr_42 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_10);
            }
            arr_43 [i_4] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) -2147483633)))))));
        }
    }
    /* LoopNest 2 */
    for (long long int i_10 = 3; i_10 < 13; i_10 += 3) 
    {
        for (unsigned short i_11 = 1; i_11 < 12; i_11 += 2) 
        {
            {
                var_27 = ((/* implicit */short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) 1033523302U))))))) >> (((max((((/* implicit */unsigned int) (short)-13546)), (max((((/* implicit */unsigned int) arr_5 [i_10 - 2] [i_11])), (arr_26 [i_10] [i_10 - 3] [i_11]))))) - (4294953730U)))));
                arr_50 [i_10] = ((/* implicit */unsigned short) max(((~(arr_30 [i_11] [i_11] [i_10 - 1] [i_11 + 2] [i_10 - 1] [i_10 - 3]))), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), (arr_6 [i_10 - 1])))) ^ (max((((/* implicit */int) (unsigned short)11525)), (-2147483633))))))));
                var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)0)), (((((/* implicit */_Bool) arr_34 [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_10 + 1] [i_10 - 3] [i_10 - 3] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2080959582U)))));
                arr_51 [i_10] [i_11] = ((/* implicit */signed char) arr_5 [i_10 - 1] [i_10]);
            }
        } 
    } 
}
