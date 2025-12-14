/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157842
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_2] [i_2] [i_2] [i_2 + 1])) > (((/* implicit */int) ((signed char) 4175907241U))))))));
                        var_13 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) var_11))))) : (((((var_0) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0)))))));
                        var_14 = (_Bool)1;
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [(signed char)9] [i_3] [i_2] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1]);
                            arr_17 [i_0] [i_0] [i_2] [i_2] [i_0] &= ((((/* implicit */int) ((short) ((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) + (((/* implicit */int) var_3)))))) + ((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_3])))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (-((+(((/* implicit */int) (short)5686)))))))));
                            var_16 -= ((/* implicit */signed char) (unsigned char)0);
                            arr_20 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [(signed char)21] [i_0]);
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((min((((unsigned int) arr_5 [i_0])), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) var_7)))))));
                            var_18 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
                            arr_23 [i_0] [i_1] [i_0] [i_3] [i_1] [i_3] [i_1] |= ((/* implicit */unsigned char) ((signed char) max((max((arr_3 [i_3]), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_6] [i_6] [i_2 + 2] [i_6])) == (((/* implicit */int) arr_1 [i_1] [i_3]))))))));
                            arr_24 [i_6] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) var_6);
                            arr_25 [i_1] [i_1] |= ((/* implicit */short) arr_9 [i_2] [i_2]);
                        }
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) min(((short)0), (((/* implicit */short) (unsigned char)96))));
                            var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) (short)5686))), ((-(min((4294967295U), (((/* implicit */unsigned int) arr_18 [i_7] [i_1]))))))));
                        }
                        for (unsigned long long int i_8 = 2; i_8 < 23; i_8 += 1) 
                        {
                            arr_31 [i_2] [i_2] [i_2] [i_3] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_15 [i_8] [i_8] [i_8 + 1] [i_8] [i_8]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)61)) && ((_Bool)1))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2 + 2] [i_2 + 4] [i_2 + 4] [i_2 - 1] [i_2 + 4])))))));
                            var_20 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) (+(var_0)))) * (((((/* implicit */_Bool) (unsigned short)7326)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1]))))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            arr_34 [i_9] [i_9] [i_2 - 1] [i_2 + 2] [i_2] [i_2] |= ((/* implicit */short) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (unsigned char)160)), (arr_10 [i_0] [i_1] [i_3] [i_3]))), (((/* implicit */unsigned short) var_1)))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned char)96), (((/* implicit */unsigned char) (_Bool)1))))) * (((/* implicit */int) min(((unsigned short)7), (((/* implicit */unsigned short) (short)0)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)32512)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_1)) ? (-3155166582293567466LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7326)))))))));
                        }
                    }
                    for (long long int i_10 = 2; i_10 < 22; i_10 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) (unsigned char)78);
                            arr_39 [i_2] [i_10] [i_10 - 1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_2] [i_2] [i_2 - 2] [i_2] [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))), (min((358412271U), (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                            arr_40 [i_2] [i_1] [i_2] [i_10 + 1] [i_11] [i_11] = ((/* implicit */unsigned short) (~(((4873112956497312173LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7326)))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                        {
                            var_23 &= ((/* implicit */unsigned char) min(((-(((/* implicit */int) (signed char)90)))), (((/* implicit */int) ((short) (unsigned short)0)))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10665)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7326))));
                            arr_43 [i_2] = ((/* implicit */signed char) var_2);
                        }
                        arr_44 [i_1] [i_1] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3521041079801300470ULL)) ? (((/* implicit */int) (unsigned short)46631)) : (((/* implicit */int) (short)0))));
                    }
                    arr_45 [i_2] [i_2] = ((/* implicit */int) arr_7 [i_0] [i_0]);
                    var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 119060055U)) ? (((/* implicit */int) (unsigned short)10665)) : (((/* implicit */int) (_Bool)1))));
                    var_26 = ((/* implicit */int) min((((long long int) (+(4175907241U)))), (6175917363361658216LL)));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
                    {
                        for (unsigned char i_14 = 1; i_14 < 23; i_14 += 2) 
                        {
                            {
                                arr_52 [(unsigned char)21] [(unsigned char)21] [i_2] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)46856)) ? (((/* implicit */int) (unsigned short)1354)) : (((/* implicit */int) (_Bool)1)))));
                                var_27 = ((/* implicit */signed char) arr_10 [i_14] [(short)16] [i_0] [i_0]);
                                var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1635499602))));
                                var_29 = ((/* implicit */long long int) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) >> (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                }
                arr_53 [i_0] [i_0] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)46643))))));
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1]))) : (arr_19 [i_0] [i_0] [i_0] [i_0] [(unsigned short)13] [i_0] [i_0])));
                arr_54 [i_0] [i_0] = ((/* implicit */short) var_8);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)57)) - (((/* implicit */int) (unsigned char)187))));
}
