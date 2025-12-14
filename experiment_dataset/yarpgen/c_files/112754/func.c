/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112754
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
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) arr_6 [i_2] [i_1] [i_2]);
                        arr_11 [i_0] [i_1] [i_1] [(signed char)4] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)11))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_2] [i_2 - 1] [i_1])))))));
                        var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_2 + 1] [i_3] [i_3])) ? (arr_8 [i_0 - 1] [i_2 + 1] [i_3] [i_1]) : (((/* implicit */int) var_4))));
                        arr_12 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) (unsigned short)32640);
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */_Bool) 397070933);
                            arr_15 [i_0 - 2] [i_1] [i_2] [i_3] [i_4] = ((((((/* implicit */unsigned long long int) arr_2 [i_0])) <= (18ULL))) ? (((((/* implicit */int) var_3)) + (((/* implicit */int) (short)-32748)))) : (((/* implicit */int) var_1)));
                            var_17 += ((/* implicit */_Bool) (+(((/* implicit */int) var_11))));
                            arr_16 [i_4] [i_2] [i_2] [i_2] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((/* implicit */int) arr_14 [i_4] [i_4] [i_3] [i_2 - 1] [i_3] [i_2 - 1])) : (((((/* implicit */int) (unsigned char)244)) ^ (arr_8 [i_0] [i_1] [i_3] [i_2])))));
                            arr_17 [i_2] [i_3] [i_2] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4]))))) > (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (16477052596106275549ULL)))));
                        }
                    }
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                    {
                        var_18 -= ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_2]);
                        var_19 = ((/* implicit */_Bool) (((_Bool)1) ? (2147483631) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)11)) || (((/* implicit */_Bool) 1659156194))))) : (((/* implicit */int) arr_14 [i_0 + 3] [i_1] [i_0 + 3] [i_5] [i_5] [5U]))))));
                    }
                    var_20 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) var_4)))));
                }
                for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0 + 3])) : (((/* implicit */int) arr_7 [i_0 + 3])))) & (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_0 + 3])), (var_11))))));
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            {
                                arr_26 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_7])) ? (min((((/* implicit */int) arr_22 [i_0] [i_0] [i_6] [i_7])), (((((/* implicit */_Bool) arr_9 [(unsigned char)9] [i_1] [i_6] [i_0 + 2] [i_8] [i_1])) ? (((/* implicit */int) (unsigned short)29418)) : (((/* implicit */int) arr_6 [i_6] [i_7] [i_8])))))) : (max((((((/* implicit */_Bool) arr_18 [i_0 + 2] [i_1] [i_6 - 1] [i_8] [i_8] [(unsigned short)9])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_1 [i_1]))))));
                                arr_27 [i_6] [i_1] [i_6 + 1] [i_7] [i_1] [i_8] = ((/* implicit */short) arr_3 [i_0 + 1] [i_0 - 1] [i_0]);
                            }
                        } 
                    } 
                    arr_28 [i_6] [i_1] [i_1] = ((/* implicit */unsigned short) arr_13 [i_0 + 1] [i_6 - 2] [i_6 - 1] [i_6] [i_1] [i_6]);
                }
                arr_29 [1U] = ((/* implicit */unsigned long long int) ((unsigned int) arr_23 [i_0] [i_1] [i_1] [i_1]));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_9 = 1; i_9 < 22; i_9 += 4) 
    {
        for (short i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            for (long long int i_11 = 0; i_11 < 24; i_11 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (signed char)90)) <= (((/* implicit */int) arr_31 [i_11]))))))));
                    arr_38 [i_11] [i_10] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_32 [i_9 + 2] [i_10])), ((short)0)))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)4471)) : (((/* implicit */int) arr_35 [i_9] [i_10] [i_11]))))) ? (((/* implicit */int) (unsigned char)245)) : (max((((/* implicit */int) (unsigned char)113)), (arr_33 [i_10]))))) : (((/* implicit */int) (unsigned char)255))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2875215057U)))))) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (unsigned short)36118))))));
}
