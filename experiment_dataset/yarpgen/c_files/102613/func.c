/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102613
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) ((_Bool) ((int) var_2)))) : (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 + 2])) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28893))) ^ (arr_9 [i_2] [i_1] [i_3] [i_4 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_7 [(_Bool)1] [i_1] [i_2] [i_3]))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) 992419943439324171LL))))))))));
                                arr_14 [i_4] [i_3] [i_0] [i_1] [i_0] |= ((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned short) var_15))))) : ((((-(var_0))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (_Bool)1))))))))));
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_4 + 1] = var_16;
                                var_19 -= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) != (arr_8 [i_0] [i_3 - 1] [0LL] [i_4 + 1]))) ? (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (short)63))) : (arr_9 [i_1] [i_1] [i_2] [i_2]))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)9] [i_1]))) < (0LL)))) >> (((/* implicit */int) ((_Bool) var_12))))))));
                                arr_16 [21ULL] [i_2] [14] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (min((((/* implicit */unsigned int) arr_17 [(_Bool)1] [i_5])), (var_7)))));
                    arr_19 [i_0] [i_0] [i_5] = ((/* implicit */unsigned int) ((((_Bool) var_0)) ? (((long long int) min(((_Bool)1), (var_5)))) : (((/* implicit */long long int) min((((unsigned int) var_2)), (((((/* implicit */_Bool) var_13)) ? (4276682016U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                }
                /* vectorizable */
                for (short i_6 = 2; i_6 < 23; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) var_8);
                        /* LoopSeq 1 */
                        for (short i_8 = 1; i_8 < 23; i_8 += 3) 
                        {
                            arr_29 [i_0] [i_8] = ((/* implicit */unsigned int) (short)-53);
                            var_22 &= ((arr_27 [i_6 - 2] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]) ^ (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((var_4) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_6] [(unsigned short)18] [i_6] [i_6])) : (((/* implicit */int) (short)-64))))))))));
                            arr_30 [i_6] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_6] [i_7] [i_7] [i_7])) ? (arr_26 [i_8] [i_8] [i_8] [i_8 + 2] [i_8] [5] [(signed char)22]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        }
                        var_24 += ((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)49152)));
                        arr_31 [i_1] [i_1] = ((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_6]);
                        var_25 = arr_28 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 2] [i_6 - 2];
                    }
                    var_26 = ((/* implicit */signed char) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        for (short i_10 = 1; i_10 < 23; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) (-(var_7)));
                                var_28 = ((/* implicit */unsigned char) var_2);
                                var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)146))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 2; i_11 < 22; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_20 [i_12] [i_11 + 3] [i_11 - 2] [i_6 + 1]))));
                                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_12 [(short)19]);
                                arr_42 [i_0] [(short)18] [(short)18] = ((/* implicit */long long int) ((((/* implicit */int) ((short) var_1))) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))))));
                                arr_43 [i_0] [i_1] [i_6] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
                                var_31 = ((((/* implicit */int) arr_18 [i_6 - 1] [i_6 + 2] [i_6 - 2])) << (((((/* implicit */int) arr_3 [i_6 - 1])) - (1215))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_13 = 2; i_13 < 23; i_13 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */int) var_15)) / (((/* implicit */int) (_Bool)1)))))));
                                arr_50 [i_14] [i_13] [i_14] [i_14] = ((/* implicit */_Bool) ((short) arr_38 [i_0] [i_13 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 1]));
                            }
                        } 
                    } 
                    var_33 |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_44 [i_13 + 2] [i_13 + 2] [i_13 + 1]))));
                }
                /* vectorizable */
                for (short i_16 = 2; i_16 < 23; i_16 += 4) /* same iter space */
                {
                    arr_53 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_7))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_17 = 1; i_17 < 24; i_17 += 3) 
                    {
                        for (long long int i_18 = 0; i_18 < 25; i_18 += 4) 
                        {
                            {
                                arr_60 [i_0] [i_1] [i_16] [i_17] [i_18] = ((/* implicit */long long int) arr_35 [2] [i_1] [2]);
                                arr_61 [i_0] [i_0] [i_1] [i_16] [i_17 + 1] [17ULL] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-1)) ? (arr_57 [i_16] [i_1] [i_16] [i_16 - 1] [i_17 + 1]) : (arr_57 [i_0] [i_1] [i_0] [i_16 + 2] [i_17 - 1])));
                                arr_62 [i_16] [i_16] = ((unsigned char) 1730566674);
                                arr_63 [i_0] [i_1] [i_0] [2U] [i_18] = ((/* implicit */unsigned long long int) arr_21 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1]);
                            }
                        } 
                    } 
                }
                arr_64 [i_1] = ((/* implicit */int) ((signed char) min((var_14), (((/* implicit */unsigned short) arr_4 [i_0])))));
            }
        } 
    } 
}
