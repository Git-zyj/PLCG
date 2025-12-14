/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156684
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
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)111))))) ? (10184431456634001484ULL) : (10184431456634001484ULL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned long long int) (~(4294967292U)));
                    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (max((38759191809162383ULL), (((/* implicit */unsigned long long int) 469587487)))) : ((-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (8262312617075550132ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))))));
                }
                for (unsigned short i_3 = 2; i_3 < 19; i_3 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 *= (unsigned short)32432;
                                var_17 = ((/* implicit */_Bool) (~((-(((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_5]))) : (arr_7 [i_5] [i_1] [i_1] [i_0])))))));
                                var_18 = ((long long int) max((((/* implicit */unsigned int) arr_11 [i_5])), (((((/* implicit */unsigned int) arr_15 [i_0] [i_3] [i_0 - 2] [i_4] [i_5])) | (arr_13 [i_1] [i_3 - 2] [i_4] [i_5])))));
                                var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(10184431456634001477ULL)))) ? (arr_11 [i_4]) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)144)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0] [i_3])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 3; i_7 < 16; i_7 += 4) /* same iter space */
                        {
                            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((10184431456634001483ULL) % (arr_21 [i_3 - 1] [i_3 - 1] [i_1])))) ? (((((/* implicit */int) arr_5 [i_3] [i_3])) ^ (((/* implicit */int) (unsigned char)111)))) : (((((arr_20 [i_1] [i_1] [i_6]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)232)) == (((/* implicit */int) arr_2 [i_0]))))) : (arr_11 [i_1 + 2])))));
                            arr_22 [i_0] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(max((((/* implicit */int) arr_19 [i_0] [i_1] [i_3] [i_3] [i_0] [i_6 - 1])), (((((/* implicit */int) arr_18 [i_0] [i_3 + 1] [i_6] [i_0])) * (((/* implicit */int) (signed char)79))))))));
                            arr_23 [i_0] [i_0] [i_3 + 1] [i_6] [i_3 + 1] = ((/* implicit */unsigned int) (+(arr_3 [i_0])));
                        }
                        for (unsigned char i_8 = 3; i_8 < 16; i_8 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) 3425998252U);
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) max((arr_11 [i_0 + 1]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_3] [i_3 + 1] [i_3 - 1])) ? (8262312617075550132ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */int) ((_Bool) (unsigned short)50701))) : ((+(((/* implicit */int) (unsigned char)152)))))))))));
                            var_24 = ((/* implicit */unsigned int) (((-(arr_24 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6] [i_0 + 1] [i_8]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 3])) ? (arr_4 [i_0 - 3] [i_0 - 1]) : (arr_4 [i_0 - 2] [i_0 - 2]))))));
                        }
                        var_25 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)0)), (868969064U)));
                    }
                    /* LoopNest 2 */
                    for (long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_31 [i_0 - 2] [i_1 - 1] [i_0 - 2] [i_0 - 2] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_9] [i_10] [i_9 - 1] [i_10] [i_9 + 1]))))) | (((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [i_9] [i_9])), (arr_18 [(unsigned short)6] [i_9] [i_9] [i_9]))))));
                                arr_32 [i_10] [i_1 - 2] [i_1 - 2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) -9223372036854775801LL);
                            }
                        } 
                    } 
                    arr_33 [i_0] [i_1] [i_0] = 1218358776;
                    var_26 = ((/* implicit */long long int) (+(((/* implicit */int) arr_16 [(unsigned char)8] [(unsigned char)8] [i_3] [i_0 + 1] [(unsigned char)8] [16] [i_1]))));
                }
                for (int i_11 = 1; i_11 < 19; i_11 += 3) 
                {
                    arr_38 [i_0] [i_0] [i_11 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? ((-(arr_3 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137)))));
                    arr_39 [i_11 - 1] [i_1] [i_0] [i_0 + 1] &= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (unsigned short)0)) & (((/* implicit */int) (unsigned char)174)))));
                }
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_0] [i_1] [i_1])) & ((+(((/* implicit */int) (unsigned char)137))))));
                /* LoopNest 3 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (int i_13 = 2; i_13 < 17; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 4; i_14 < 16; i_14 += 3) 
                        {
                            {
                                arr_48 [i_0 - 1] [i_0 - 3] [i_0 - 3] [i_12] [i_0 - 3] [i_14 - 4] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 859413064)) <= (8262312617075550139ULL)));
                                arr_49 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0] &= ((/* implicit */unsigned int) (signed char)107);
                                var_28 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_5 [i_0 - 1] [i_1 - 1])) / (((int) 775157340U))))));
                            }
                        } 
                    } 
                } 
                arr_50 [i_0] [i_0] [i_1 + 2] = ((/* implicit */unsigned char) ((min((arr_14 [i_0] [i_1 + 2] [i_1] [i_1] [i_0 - 2]), (((/* implicit */unsigned long long int) 9223372036854775801LL)))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)525)))))));
            }
        } 
    } 
}
