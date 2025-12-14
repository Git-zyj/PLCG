/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169431
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_13 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 63U)) ? (arr_2 [i_0 - 3]) : (var_1)))) ? (max((arr_1 [i_0]), (((/* implicit */unsigned int) var_8)))) : (((var_12) << (((((/* implicit */int) var_3)) + (12235))))))) + (((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))));
        arr_3 [8U] = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) ^ (arr_2 [i_0 - 1])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (var_9)))) ? (min((((/* implicit */long long int) 1048575U)), (137381983285479954LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))))))));
        var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)(-32767 - 1)))));
        arr_8 [i_1] [13U] = ((/* implicit */unsigned long long int) 2024724238U);
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((signed char) var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_1 [i_1]), (arr_2 [i_1])))) && (((/* implicit */_Bool) arr_4 [i_1] [i_1])))))) : (var_12))))));
    }
    /* LoopSeq 4 */
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
    {
        var_16 -= ((/* implicit */unsigned int) arr_10 [i_2]);
        arr_13 [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? ((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) ^ (var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_17 [i_3] &= ((/* implicit */_Bool) (-(69U)));
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)37)), ((short)-19294)))) ? (((((-103507695009909261LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))))) ? (arr_15 [i_3] [i_6]) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_4])) >= (((/* implicit */int) arr_16 [i_3]))))))));
                        var_18 += ((/* implicit */unsigned char) var_5);
                        var_19 *= ((/* implicit */unsigned long long int) var_0);
                        var_20 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((-103507695009909253LL), (((/* implicit */long long int) (short)-128))))), (((((var_4) ? (arr_15 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_5])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))))))))));
                    }
                } 
            } 
        } 
        arr_24 [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_19 [i_3] [i_3]) < (var_10)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 268435455U)) : (var_10)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_27 [(unsigned char)20] &= ((/* implicit */long long int) arr_19 [i_7] [i_3]);
            arr_28 [i_3] [18ULL] [i_3] |= ((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_20 [i_3] [(signed char)6] [i_3])));
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                arr_31 [(_Bool)1] [i_7] [(_Bool)1] |= ((((/* implicit */int) arr_30 [i_8])) > (((((/* implicit */int) arr_26 [0U] [i_7] [2U])) | (((/* implicit */int) arr_25 [i_3] [i_3])))));
                var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_3]))))) ? (((/* implicit */unsigned long long int) 4012757846U)) : (((unsigned long long int) var_12))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_10 = 1; i_10 < 21; i_10 += 2) 
                {
                    var_22 = ((/* implicit */unsigned int) (short)-29382);
                    arr_39 [i_3] [i_3] [(short)16] [i_9] [i_3] [(unsigned char)4] &= ((/* implicit */unsigned int) arr_32 [i_3] [i_3] [i_3]);
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
                    {
                        arr_43 [i_7] [i_7] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_3] [i_7] [i_3] [i_10] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_9] [i_9] [i_10 + 2]))) : (var_7)));
                        arr_44 [i_3] [i_3] [i_3] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_11])) ? (((/* implicit */long long int) 2356513586U)) : (-945375442124817933LL)))) ? (((2565841442U) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10 + 1] [i_10 + 1] [i_10 + 1])))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_34 [i_3] [8U] [i_10 - 1] [i_10 + 1]))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((473073308U) | (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) arr_22 [i_10 + 2]))));
                        var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) -2059547001)) : (arr_29 [i_3] [i_3] [(short)19] [i_10 + 1])));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) var_8);
                        arr_49 [18LL] [i_7] [i_7] [i_9] [(signed char)8] [i_13] |= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_48 [14U] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_13] [i_13]))));
                        var_27 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_12)))) >= (1911642470U)));
                        arr_50 [i_7] [i_7] [i_7] [i_7] [(short)7] = ((arr_47 [i_3] [i_7] [i_9] [i_3] [i_3] [i_3]) & (((/* implicit */unsigned long long int) var_9)));
                    }
                }
                for (unsigned int i_14 = 2; i_14 < 21; i_14 += 1) 
                {
                    var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) -8605441890371197299LL)))));
                    arr_53 [i_3] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_7]))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_29 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_12)) ? (arr_15 [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                    /* LoopSeq 1 */
                    for (short i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        var_30 |= ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) (unsigned char)251)))));
                        arr_58 [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)143))));
                        var_31 ^= ((/* implicit */unsigned char) 281125465);
                        arr_59 [i_3] [i_7] [i_7] [i_3] [17ULL] [i_7] [i_3] = ((/* implicit */unsigned char) arr_30 [i_3]);
                        var_32 = (i_7 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(_Bool)1] [(_Bool)1]))) > (var_0)))) << (((((/* implicit */int) arr_37 [i_7] [i_3] [i_3] [i_3] [i_7])) - (156)))))) : (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [(_Bool)1] [(_Bool)1]))) > (var_0)))) << (((((((/* implicit */int) arr_37 [i_7] [i_3] [i_3] [i_3] [i_7])) - (156))) + (63))))));
                    }
                }
                for (short i_17 = 0; i_17 < 23; i_17 += 1) 
                {
                    arr_62 [i_17] [i_7] [i_7] [i_3] = ((/* implicit */short) (~(((/* implicit */int) var_8))));
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 4; i_18 < 21; i_18 += 4) 
                    {
                        arr_67 [i_7] [i_7] [i_7] [i_7] [i_18 - 1] = ((/* implicit */_Bool) 2U);
                        arr_68 [i_7] [i_17] [i_9] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 6562163356283975223LL)) ? (((/* implicit */int) arr_66 [i_3] [i_3] [i_3])) : (2059547001))));
                    }
                    for (short i_19 = 1; i_19 < 21; i_19 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned int) ((unsigned long long int) (signed char)-3));
                        var_34 *= ((/* implicit */signed char) var_11);
                    }
                    var_35 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_63 [i_3] [i_3] [i_9] [i_3] [i_17])) > (((/* implicit */int) arr_56 [i_7] [i_7] [i_9] [i_17] [i_3] [i_17] [i_17]))));
                }
                var_36 = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_55 [i_3] [i_3] [i_9])) ? (arr_41 [i_7] [i_3] [i_3] [i_3] [i_7]) : (((/* implicit */unsigned long long int) arr_36 [i_7])))) : (((/* implicit */unsigned long long int) arr_38 [i_9])));
            }
        }
        var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_54 [i_3] [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned char) arr_56 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)118), (((/* implicit */unsigned char) (_Bool)1)))))) : (2312487629U)));
    }
    for (unsigned int i_20 = 0; i_20 < 20; i_20 += 2) 
    {
        var_38 = ((/* implicit */short) (!(((/* implicit */_Bool) 12609765974407056524ULL))));
        var_39 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1078258011)))))) > (((unsigned long long int) 943229366U))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2270243033U)) ? (67108860) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) arr_64 [i_20] [14U] [i_20])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))) : (arr_36 [i_20]))));
        arr_74 [i_20] = max((((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_14 [i_20])) ? (((/* implicit */int) arr_30 [i_20])) : (((/* implicit */int) var_3)))) + (2147483647))) >> (((min((((/* implicit */unsigned int) -67108844)), (var_0))) - (2413632317U)))))), (((unsigned long long int) arr_45 [i_20] [i_20])));
        arr_75 [11ULL] |= ((/* implicit */long long int) 12380202926750215614ULL);
        var_40 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min(((unsigned char)197), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)50)) ? (((((/* implicit */_Bool) -3485748014506756159LL)) ? (1467531904) : (((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) arr_60 [i_20] [i_20]))))));
    }
    /* vectorizable */
    for (unsigned char i_21 = 0; i_21 < 20; i_21 += 2) 
    {
        var_41 |= ((/* implicit */unsigned int) var_10);
        arr_78 [i_21] = ((/* implicit */unsigned long long int) (((~(var_9))) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)237)) | (67108858))))));
    }
    var_42 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (((var_4) ? (var_10) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (+(2910027664755883457LL)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) (unsigned char)3)), (3874076499U))))))));
}
