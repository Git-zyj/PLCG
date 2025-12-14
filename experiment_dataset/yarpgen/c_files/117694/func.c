/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117694
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
    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)52559))));
    var_19 -= ((/* implicit */int) var_17);
    var_20 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */int) ((8239177786761319960LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))), ((-(((/* implicit */int) (signed char)127))))))), (var_4)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_3 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (signed char)-45)) * (((/* implicit */int) (_Bool)0)))))) ? (var_0) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_0] [i_3] [i_1] [i_1] [i_1] [i_0])))))));
                            arr_10 [i_2] [i_1] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) -1383692093)) : (9223372036854775807LL)));
                            var_21 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_3] [i_1 + 2] [i_2] [i_3 - 2]))))) ? ((+(4294967286U))) : ((+(4294967280U)))))) ? (arr_5 [i_3] [i_3]) : (arr_5 [i_3] [i_1 + 2])));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((arr_12 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3]))))), (((/* implicit */unsigned long long int) ((short) arr_12 [i_0] [i_3] [i_1 + 1] [(short)2] [i_3] [i_3] [i_4]))))))));
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (signed char)125);
                            }
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */unsigned long long int) (((~(((int) arr_13 [i_0] [i_0] [i_1] [i_1])))) / (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 1])) >= (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))))));
                arr_15 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 12490792777380952334ULL)) ? (((/* implicit */unsigned long long int) 8239177786761319949LL)) : (402653184ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 + 1])) ? (8U) : (arr_4 [i_1]))))));
                var_24 = ((/* implicit */unsigned long long int) 2147483646);
                arr_16 [1U] [1U] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) 4294967280U)), (2305843009213693952LL)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_19 [i_5] = ((/* implicit */int) arr_4 [i_5]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)40343)) ? (((/* implicit */unsigned long long int) 3070853019U)) : (arr_3 [i_6] [i_6]))))));
            arr_22 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) : (arr_6 [i_6] [i_5] [i_5] [i_5])));
            arr_23 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) (_Bool)1);
        }
        for (int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            var_26 += ((/* implicit */unsigned long long int) arr_5 [i_5] [i_7]);
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                var_27 += ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_18 [i_8])))) % (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (arr_21 [i_5] [i_7] [i_8])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((3749900900522968275LL) > (var_15)))) % (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_7] [i_7]))))))) : (12498766605948380833ULL));
                arr_29 [i_7] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_11 [i_8] [i_7] [(short)6] [i_5]);
                var_28 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) arr_24 [i_5] [i_7]))))) ? (min((arr_7 [i_5] [i_7] [i_8] [i_5]), (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_17 [i_8]))))));
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 16; i_9 += 4) 
            {
                arr_32 [i_5] [i_7] [i_5] = ((/* implicit */unsigned char) var_2);
                arr_33 [i_5] [i_5] [i_9 + 1] = ((/* implicit */unsigned int) ((short) (-(var_3))));
            }
        }
        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            arr_37 [i_5] [i_10] [9LL] = ((/* implicit */unsigned long long int) ((2147483647) | ((-(((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5]))))));
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */long long int) arr_4 [i_10]);
                var_30 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_35 [i_5] [i_10])) ? (arr_4 [i_10]) : (((/* implicit */unsigned int) arr_35 [i_10] [i_10])))) & ((~(var_1)))));
                arr_40 [i_11] [i_10] [i_10] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_28 [i_5] [i_10] [i_10] [i_11])) && (((/* implicit */_Bool) arr_20 [i_5])))) && ((_Bool)0)));
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
                {
                    arr_43 [i_10] = (-(((((((/* implicit */int) (short)(-32767 - 1))) / (arr_7 [8LL] [8LL] [8LL] [8LL]))) * (((((/* implicit */int) arr_2 [i_10])) / (((/* implicit */int) arr_31 [i_5] [i_5] [0ULL])))))));
                    var_31 += ((/* implicit */unsigned char) (~(arr_41 [i_5] [i_5] [i_10] [i_11] [i_11] [i_12])));
                }
                arr_44 [i_11] [i_11] [i_10] [(short)3] = ((/* implicit */unsigned long long int) var_9);
            }
            for (long long int i_13 = 0; i_13 < 18; i_13 += 4) /* same iter space */
            {
                var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_5] [i_10] [i_13] [i_13] [i_10] [i_13] [i_10])) && (arr_17 [i_5])))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_5] [i_10] [i_13] [i_5]))))))))));
                arr_47 [i_5] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) (+(var_1)));
            }
            arr_48 [i_5] [i_5] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) ((short) (_Bool)0))) != (((/* implicit */int) ((((/* implicit */_Bool) 4609398015973430667LL)) || (((/* implicit */_Bool) (signed char)14))))))))));
            /* LoopNest 2 */
            for (long long int i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                for (unsigned int i_15 = 1; i_15 < 15; i_15 += 4) 
                {
                    {
                        var_33 *= ((/* implicit */unsigned long long int) 1674900413668639455LL);
                        /* LoopSeq 1 */
                        for (short i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            arr_57 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) arr_12 [i_5] [i_10] [i_10] [i_10] [i_10] [i_15] [i_16])))));
                            var_34 = ((((((((/* implicit */_Bool) arr_31 [i_10] [i_10] [i_5])) ? (1383692093) : (((/* implicit */int) (_Bool)1)))) > (((((/* implicit */int) (short)9335)) / (((/* implicit */int) arr_0 [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(var_14)))))) : (arr_53 [i_5] [i_10] [i_14] [i_15 - 1]));
                            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_56 [i_5] [i_10] [i_14] [i_16] [i_16] [i_14] [i_5]))) ? (arr_26 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((short) arr_36 [i_10] [i_14] [i_10])))))));
                        }
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((((/* implicit */unsigned long long int) ((((_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))) : (((((/* implicit */_Bool) (short)2064)) ? (1224114270U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) / (((arr_42 [i_5] [i_5] [i_5] [i_5]) / (arr_42 [i_5] [12LL] [i_5] [i_5])))))));
    }
    for (short i_17 = 0; i_17 < 24; i_17 += 3) 
    {
        var_37 -= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_58 [(signed char)2] [i_17])), ((-(-2082157043043998143LL))))) / (((((/* implicit */_Bool) (+(-1383692093)))) ? (arr_59 [4LL]) : (arr_60 [22ULL] [i_17])))));
        var_38 += ((/* implicit */short) arr_61 [i_17] [(unsigned char)22]);
    }
}
