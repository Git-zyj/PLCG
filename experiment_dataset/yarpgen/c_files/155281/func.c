/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155281
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_3 [(short)8] [i_0 + 1] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (var_3))) % (((((/* implicit */_Bool) 805306368)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_0))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_8 [i_0 - 1] [i_1] = ((/* implicit */short) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            var_10 += ((/* implicit */_Bool) ((((/* implicit */_Bool) -4699465423669884421LL)) ? (((/* implicit */int) (signed char)75)) : (((/* implicit */int) (signed char)-90))));
            var_11 ^= ((/* implicit */long long int) ((var_9) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) : (arr_6 [i_1])))));
        }
        arr_9 [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) (signed char)127))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) arr_5 [i_0])) : (var_5))) : (((/* implicit */unsigned int) arr_1 [i_0 - 1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))) > (var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) && (var_9))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_12 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_4 [i_2 - 1])) : (((/* implicit */int) arr_4 [i_2 - 1]))));
            var_13 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_2 - 1])) == (arr_5 [i_2 - 1])));
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 8; i_4 += 2) 
            {
                for (int i_5 = 3; i_5 < 10; i_5 += 1) 
                {
                    {
                        var_14 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)28672)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (short)30401)))) ^ (1073741808)));
                        arr_20 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 1]))) : (var_4)));
                    }
                } 
            } 
            var_15 = ((var_0) ? (((/* implicit */int) (short)30401)) : (((/* implicit */int) var_7)));
        }
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_29 [5U] [i_6] [i_6] [i_7] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [10U] [3LL] [i_2 - 1] [i_2])) ^ (((/* implicit */int) arr_27 [i_2]))))) ? (((((/* implicit */_Bool) arr_27 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1]))) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (-629942806492752597LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)97))))))));
                        var_16 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_7 [(_Bool)1] [(short)0] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) (unsigned short)24372)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) : (2450007647U)))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_5 [i_2]) << (((var_4) - (4190280563U)))))) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) arr_27 [i_2 - 1]))))) ? (((arr_6 [i_2 - 1]) % (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_8])) + (((/* implicit */int) (signed char)82))))))) : (((/* implicit */unsigned int) ((((var_6) ^ (((/* implicit */int) arr_16 [i_2] [i_7] [i_7] [(short)5])))) - (((/* implicit */int) arr_19 [i_2 - 1] [i_2 - 1])))))));
                        arr_30 [(_Bool)1] [i_6] [10ULL] |= ((/* implicit */unsigned long long int) (((((_Bool)1) ? (arr_23 [i_2 - 1] [5ULL]) : (arr_23 [i_2 - 1] [i_6]))) << (((/* implicit */int) ((((/* implicit */int) (unsigned short)65280)) > (var_6))))));
                    }
                } 
            } 
            arr_31 [i_2] [i_6] = ((/* implicit */int) ((((var_0) || (((/* implicit */_Bool) arr_18 [i_2 - 1] [i_2 - 1] [i_6] [i_2])))) ? ((((_Bool)0) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_6] [i_2 - 1] [i_6]))))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
        }
        for (int i_9 = 4; i_9 < 10; i_9 += 2) 
        {
            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned short)65267)) : (((/* implicit */int) (signed char)104))))) ? (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) var_0)) : (var_3))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_7)))))));
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 9; i_10 += 4) 
            {
                for (int i_11 = 1; i_11 < 10; i_11 += 1) 
                {
                    {
                        var_19 = ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_36 [(signed char)8] [i_9] [i_10 - 1] [(_Bool)1])) : (((/* implicit */int) var_2)))) - (((((/* implicit */_Bool) -629942806492752600LL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)239))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65280)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_0 [i_10 + 1])) ? (((/* implicit */unsigned long long int) 1183019913U)) : (var_1)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
                        {
                            var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32735)) & (-1361044717)))) ? (((((/* implicit */int) var_8)) - (((/* implicit */int) var_7)))) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_19 [9] [i_11])) : (var_6))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_2 - 1] [i_2])) || (((/* implicit */_Bool) (unsigned short)0)))))))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1832882585U)) ? (((/* implicit */int) (unsigned short)53814)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [10] [i_11 + 1] [i_10] [i_2 - 1])) ? (((/* implicit */int) arr_36 [i_11 - 1] [i_10 + 2] [(short)6] [2])) : (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (var_6) : (arr_40 [i_2] [i_9] [i_10] [i_11] [i_9])))))) : (((((/* implicit */_Bool) var_4)) ? (arr_26 [i_12] [i_10 + 1] [(signed char)7] [i_9 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (629942806492752587LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (16U)));
                            var_24 = ((/* implicit */signed char) ((arr_11 [i_9 - 4]) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) > (-1)));
                            var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (var_3)));
                            arr_45 [9U] [i_11 + 1] [i_10 + 2] [i_10 + 2] [1ULL] [i_9] [i_2] |= ((/* implicit */unsigned short) ((arr_42 [i_2 - 1] [i_2 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255)))));
                        }
                    }
                } 
            } 
            arr_46 [i_2] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_39 [i_9 - 3] [i_9] [i_9] [i_2 - 1] [5LL]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_22 [i_2 - 1]) == (arr_22 [i_2 - 1]))))) : (((((/* implicit */_Bool) arr_16 [i_2 - 1] [i_9] [i_9 - 3] [i_2])) ? (629942806492752592LL) : (((/* implicit */long long int) -1004800211)))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 697510948U)) ? (1528184262U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) | (((((/* implicit */_Bool) (signed char)55)) ? (var_1) : (((/* implicit */unsigned long long int) var_6))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    arr_51 [7LL] [i_14] [9LL] [5LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20541)) ? (arr_43 [i_2] [i_2 - 1] [3LL] [i_2 - 1] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((1895826117) >= (((/* implicit */int) var_0))))));
                    arr_52 [(signed char)10] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)20541)) >> (((1152921504590069760LL) - (1152921504590069731LL)))))) ? (((((/* implicit */_Bool) arr_42 [i_2 - 1] [(short)9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2 - 1] [i_2 - 1] [i_2] [i_14]))) : (arr_42 [i_2 - 1] [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12835)) ? (-4390481357679707874LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120))))))));
                }
            } 
        } 
        arr_53 [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (arr_5 [i_2 - 1]) : (arr_5 [i_2 - 1]))) == (((((/* implicit */int) (signed char)1)) >> (((arr_5 [i_2]) - (456343250)))))));
        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((629942806492752592LL) >> (((((/* implicit */int) (short)-31764)) + (31827)))))) ? (((((/* implicit */int) var_9)) / (arr_18 [i_2] [i_2] [2U] [i_2 - 1]))) : (((((/* implicit */_Bool) arr_18 [i_2 - 1] [i_2] [6U] [i_2 - 1])) ? (((/* implicit */int) var_7)) : (var_3))))))));
    }
}
