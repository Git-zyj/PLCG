/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144817
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
    var_14 = ((/* implicit */unsigned char) 14376364085680111015ULL);
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_15 ^= ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_3 [i_0]), (arr_3 [i_0]))))))), (min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) 2002730574422860248ULL)) ? (-262708502) : (((/* implicit */int) (unsigned char)133)))))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(8955036683271853299ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_2))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((arr_0 [i_0]), (arr_0 [i_0])))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) -2028386127643892605LL)) : (12797699201752313451ULL)))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 1) 
                {
                    {
                        arr_15 [i_2] = ((/* implicit */unsigned long long int) 1972779217);
                        arr_16 [i_1] [i_2] = -9223372036854775793LL;
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 3; i_5 < 22; i_5 += 2) 
                        {
                            arr_19 [i_1] [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned long long int) (~(min((-9028635330204938868LL), (((/* implicit */long long int) arr_3 [i_4 - 1]))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)31)), ((+(3912117813U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163))))) : ((-(((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_8 [i_1] [i_3]))))))));
                        }
                        var_18 += ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) var_11)), (arr_5 [i_1])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (-6476591156802315293LL));
                    }
                } 
            } 
        } 
        arr_20 [11LL] = ((/* implicit */unsigned char) 162066440);
    }
    for (int i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) -1876185119)))))), (max((((((/* implicit */_Bool) -6040977141300492217LL)) ? (var_3) : (var_10))), (min((12657647741302378922ULL), (((/* implicit */unsigned long long int) var_12))))))));
        var_19 = ((/* implicit */unsigned char) ((arr_17 [i_6] [i_6]) % ((+((+(arr_17 [i_6] [i_6])))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_7] [i_7])) ? (var_7) : (var_0))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)125)))));
            arr_30 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11274525012929079971ULL)) ? (563904061U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)11)) : (arr_22 [i_8])))) : (18446744073709551615ULL)));
            /* LoopSeq 2 */
            for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) : (((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */unsigned long long int) arr_34 [i_8] [i_9] [i_10] [i_11])) : (arr_1 [i_10])))));
                            arr_40 [i_9] = arr_23 [i_7];
                            arr_41 [i_9] [i_8] = var_1;
                            arr_42 [i_9] [i_9] [i_9] [i_10] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -299804071)) ? (11527825777376865126ULL) : (arr_12 [i_8] [i_10] [i_11])))) ? ((+(-5706388034809641433LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                            var_22 -= ((/* implicit */unsigned char) arr_38 [i_10] [i_10] [i_9] [i_10] [i_11]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_12 = 2; i_12 < 21; i_12 += 2) 
                {
                    var_23 = ((/* implicit */unsigned char) 2147483647);
                    var_24 = ((/* implicit */unsigned long long int) var_1);
                }
                for (signed char i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    arr_49 [i_9] = ((((arr_35 [i_8] [i_8] [18U] [i_13]) - (((/* implicit */unsigned long long int) arr_32 [i_13])))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_8]))));
                    arr_50 [i_7] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (2005661596U) : (var_1)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        arr_53 [i_7] [(unsigned char)9] [(unsigned char)9] [i_13] [(unsigned char)9] [i_13] [i_9] = var_7;
                        arr_54 [i_7] [i_9] [i_14] [i_7] [i_14] = arr_18 [i_7] [i_8] [i_9] [i_13] [i_14];
                        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-126)))))));
                    }
                }
            }
            for (unsigned char i_15 = 2; i_15 < 22; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 4) 
                {
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        {
                            arr_62 [i_7] [i_7] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) ((long long int) arr_57 [i_17] [i_17] [i_16] [i_17]))) ? (((((/* implicit */_Bool) 2110644735)) ? (((/* implicit */long long int) 4294967295U)) : (-1875646615171073057LL))) : (((/* implicit */long long int) arr_32 [i_15 - 1])));
                            arr_63 [i_7] [i_8] [i_15] [i_7] [i_17] [i_8] = ((/* implicit */unsigned char) ((arr_56 [i_15 + 1] [i_8] [i_16] [i_15 + 1]) / (arr_56 [i_15 - 1] [i_8] [i_15] [i_16])));
                        }
                    } 
                } 
                var_26 = ((/* implicit */long long int) (~(0U)));
            }
        }
        for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 4) 
        {
            arr_68 [i_7] = -6957160625839220257LL;
            var_27 += ((/* implicit */unsigned int) (~(((long long int) arr_46 [i_7] [i_7] [i_18]))));
        }
        var_28 = ((/* implicit */long long int) arr_8 [i_7] [i_7]);
    }
    var_29 = ((/* implicit */unsigned char) var_4);
}
