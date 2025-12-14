/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161185
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_17 |= ((/* implicit */unsigned short) arr_8 [6U] [i_1] [(unsigned short)4] [i_1]);
                                arr_11 [i_0] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)6664))))) ? (((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)1)))) : (((/* implicit */int) arr_10 [i_0] [i_1] [(signed char)5] [i_2] [5] [i_3] [i_2])))), ((-(((((((/* implicit */int) arr_5 [i_0] [i_3] [i_4 + 1])) + (2147483647))) << (((((/* implicit */int) var_10)) - (65)))))))));
                                arr_12 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_4 + 1]))))) - ((~(0))))) < (((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 4; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_5] [i_0] [i_6 - 1] &= ((/* implicit */_Bool) max((((unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)30291)) : (((/* implicit */int) var_11))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_5] [(unsigned char)2] [i_5] [(_Bool)1])) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-66)), (var_4)))) : (((/* implicit */int) arr_16 [i_6 - 4] [i_6 + 1] [i_2] [i_5] [(short)14] [i_6 - 2])))))));
                                var_18 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)58872))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [10LL] [i_5] [10LL] [10LL] [i_5] [i_6 - 2])) : (((/* implicit */int) (unsigned short)58872)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_1 [i_5] [i_5]))))))), ((~(((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(signed char)9] [(_Bool)1] [(unsigned short)3] [i_0])) * (((/* implicit */int) var_10))))))));
                                var_19 = ((/* implicit */long long int) (unsigned char)45);
                                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_6])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? ((~(((/* implicit */int) (signed char)-7)))) : ((~(((/* implicit */int) arr_7 [i_0] [i_0]))))))));
                                arr_25 [(signed char)15] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(arr_22 [i_0] [(signed char)10] [19] [19] [i_0] [i_0] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56501)) ^ (((/* implicit */int) arr_8 [i_1] [i_2] [i_2] [i_8]))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(short)4]))) ^ (329339244U)))) ? (9151314442816847872LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 1; i_9 < 18; i_9 += 3) 
                    {
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_0] [(unsigned char)8] [19U] [i_1] [i_2] [i_9 - 1] [i_10]))))), (min((((/* implicit */unsigned int) (signed char)1)), (4294967295U)))));
                                arr_32 [i_0] [i_1] [i_0] [i_9 - 1] [(_Bool)1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (signed char)-66)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [3U] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_1] [(unsigned char)14] [(unsigned char)14] [6] [i_10] [i_0] [i_9])))), ((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2] [i_9] [(_Bool)1] [i_10]))))));
                                arr_33 [12U] [i_0] [i_2] [(signed char)5] = ((/* implicit */unsigned int) 2047LL);
                                arr_34 [(signed char)3] [(unsigned short)15] [i_0] [(signed char)4] [i_0] [i_1] [(_Bool)0] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)84))))), (((((/* implicit */_Bool) -4153768133762092350LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10]))) : (arr_6 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                var_22 -= ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-10)))))));
                                var_23 ^= ((/* implicit */long long int) (!(((_Bool) (signed char)-71))));
                                var_24 = ((/* implicit */signed char) (unsigned char)175);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
    {
        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned char i_16 = 1; i_16 < 14; i_16 += 2) 
                    {
                        for (signed char i_17 = 1; i_17 < 15; i_17 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (~(arr_42 [i_13])))) ? (((((/* implicit */_Bool) arr_56 [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_10 [i_17] [(short)2] [i_15] [(short)2] [i_14] [i_13] [i_13])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_16 [i_16 - 1] [i_16 - 1] [i_16 + 4] [(_Bool)1] [i_16] [i_16 + 2])))) : (((/* implicit */int) var_4))));
                                arr_58 [i_14] [i_15] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)62860)) ? (arr_57 [i_17] [i_14] [i_15] [i_14] [i_13] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_13] [i_17] [i_17] [i_17] [i_13] [i_13])))))))) + (((((/* implicit */_Bool) (~(var_8)))) ? (min((((/* implicit */unsigned long long int) 305679981U)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_48 [i_14] [i_14] [(unsigned short)3]) < (((/* implicit */long long int) ((/* implicit */int) (short)-30315)))))))))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (((arr_6 [i_17 - 1] [i_13]) / (((/* implicit */long long int) ((((/* implicit */int) arr_31 [16U] [i_16] [i_13] [16U] [i_13])) | (((/* implicit */int) var_1))))))))))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_14 [10LL] [i_17 - 1] [(signed char)15] [i_16] [i_16 - 1] [10LL]) / (arr_14 [i_15] [i_17 - 1] [i_15] [i_16] [i_16 - 1] [i_16])))) ? (((/* implicit */int) arr_13 [10U] [(unsigned short)2] [i_17] [i_16] [i_17] [10U])) : (((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_19 [i_15] [i_16] [i_15] [15LL] [15LL]))), (min((((/* implicit */unsigned short) var_7)), (var_4)))))))))));
                                var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (signed char)-84)), ((unsigned short)55599)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_18 = 2; i_18 < 14; i_18 += 2) 
                {
                    for (short i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        {
                            var_29 += ((/* implicit */unsigned int) (unsigned short)0);
                            var_30 = ((/* implicit */signed char) arr_54 [i_18 + 1]);
                            var_31 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_13))));
                            var_32 = ((/* implicit */unsigned short) arr_16 [i_13] [i_13] [i_14] [i_14] [i_13] [i_13]);
                        }
                    } 
                } 
            }
        } 
    } 
}
