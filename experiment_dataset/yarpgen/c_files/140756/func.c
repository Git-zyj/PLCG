/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140756
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
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) -7093179754905533722LL)) ? (((/* implicit */int) (unsigned short)4766)) : (1020089459)))))) ? (-7093179754905533722LL) : (-7093179754905533722LL)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [(unsigned char)6] [i_0] [i_0] [(unsigned short)3] = ((/* implicit */long long int) ((int) max((arr_14 [i_4 + 3] [i_0] [i_1 + 2]), (arr_14 [i_4 - 1] [i_0] [i_1 + 3]))));
                                var_11 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1]))));
                                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) max((max((((/* implicit */long long int) arr_4 [i_0 + 3] [i_1 + 1])), (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [0])) && (((/* implicit */_Bool) var_8))))))))));
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1608239556)) ? (min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (unsigned short)40746)) : (-2102274098))))) : (((((/* implicit */int) ((var_0) || (((/* implicit */_Bool) var_8))))) >> (((var_3) + (7608076926547653454LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 1; i_5 < 8; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) (+(7093179754905533722LL)));
                                arr_21 [i_0] [0ULL] [(unsigned char)2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((((/* implicit */int) (unsigned char)53)) - (((/* implicit */int) var_4))))))) - (min((((/* implicit */long long int) arr_10 [i_2 + 1])), (max((-7093179754905533714LL), (((/* implicit */long long int) arr_4 [i_0] [i_0]))))))));
                                var_15 = ((/* implicit */unsigned short) min((max((arr_6 [i_0]), (arr_6 [i_0 - 1]))), (arr_6 [i_0 + 3])));
                            }
                        } 
                    } 
                    arr_22 [(unsigned short)5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_2 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((var_9) ^ (((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43869))) : (arr_6 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)10634))))));
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */long long int) max((((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)21761))))))), ((short)12819)));
    /* LoopNest 2 */
    for (signed char i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) ((short) ((((/* implicit */int) (unsigned short)60940)) % (1608239552))));
                var_18 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 1608239556)) ? (((/* implicit */int) (unsigned short)4592)) : (((var_2) ? (((/* implicit */int) arr_23 [i_7] [i_7])) : (((/* implicit */int) (unsigned short)54901)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        for (unsigned char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    for (long long int i_12 = 2; i_12 < 19; i_12 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [(_Bool)1] [(_Bool)1] [4U] [4U] [4U])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18558))) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -7093179754905533739LL)))))) : (max((((/* implicit */unsigned int) arr_36 [i_9])), (arr_38 [i_9] [i_9] [i_9] [i_9] [(unsigned char)8])))))) ? (((((var_5) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_36 [i_9])) + (81))) - (56))))) : (((/* implicit */long long int) max((arr_34 [i_12 + 1] [i_12 + 1]), ((-(((/* implicit */int) arr_36 [i_9])))))))));
                            arr_39 [i_9] [(unsigned short)18] [i_9] [i_9] = ((/* implicit */long long int) ((((arr_38 [(_Bool)1] [(unsigned char)1] [(_Bool)1] [(unsigned char)1] [i_12 + 1]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)107))))) << (min((((/* implicit */unsigned int) var_7)), (arr_38 [(unsigned char)14] [i_10] [i_10] [i_10] [i_12 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 3; i_15 < 18; i_15 += 1) 
                        {
                            {
                                arr_47 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)90)) ? (((/* implicit */int) (unsigned short)60929)) : (1608239556)))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (unsigned short)46671)))), (((/* implicit */int) var_0))));
                                arr_48 [i_9] [i_9] [(unsigned char)11] [(unsigned short)10] [i_9] [19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4596)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_36 [i_9]), (((/* implicit */signed char) var_4)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) + (-1314813481265867369LL)))))) ? (min((((/* implicit */unsigned long long int) ((unsigned short) arr_30 [17ULL] [2LL]))), (arr_30 [i_9] [i_9]))) : (((/* implicit */unsigned long long int) var_10))));
                                var_20 = ((/* implicit */unsigned char) -1978619115);
                                var_21 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10623)) - (((/* implicit */int) arr_41 [(unsigned char)12]))))) ? (((/* implicit */int) max(((unsigned short)4592), (((/* implicit */unsigned short) arr_41 [7LL]))))) : ((+(((/* implicit */int) arr_41 [i_9]))))))) < (max((arr_37 [i_14 - 1] [i_14 - 1] [i_15 + 2] [(_Bool)1]), (((/* implicit */unsigned int) var_2))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 2; i_16 < 19; i_16 += 1) 
                {
                    for (int i_17 = 1; i_17 < 19; i_17 += 1) 
                    {
                        {
                            arr_55 [i_9] [i_9] = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((arr_38 [i_16] [6ULL] [6ULL] [6ULL] [i_16]), (((/* implicit */unsigned int) (unsigned char)135))))), (((long long int) (unsigned char)69))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_18 = 1; i_18 < 18; i_18 += 4) 
                            {
                                var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_29 [(unsigned short)13])) & (((((/* implicit */unsigned long long int) arr_50 [i_9] [19U] [i_9])) ^ (9886114141128259068ULL)))));
                                var_23 = ((/* implicit */int) ((arr_57 [i_9] [i_9] [(unsigned char)15] [(unsigned char)15] [i_9]) / (((/* implicit */long long int) arr_38 [(unsigned char)3] [(unsigned char)3] [13U] [(unsigned char)3] [7LL]))));
                                arr_60 [(short)15] [(short)15] [(_Bool)1] [12LL] [(unsigned short)2] [(short)15] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_9] [(unsigned char)4] [(unsigned char)2] [(unsigned char)15] [(_Bool)1] [(unsigned char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_44 [i_9] [(_Bool)0] [13] [(unsigned short)1] [(_Bool)0] [i_9])))) % (arr_45 [i_16 + 1] [i_16 + 1] [i_17 - 1] [i_18 + 2])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
