/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152708
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46697)) ? (((/* implicit */int) (unsigned short)1844)) : (((/* implicit */int) var_13))))) ? (var_11) : (arr_1 [i_1 + 1])))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((((/* implicit */_Bool) ((403658874U) + (((/* implicit */unsigned int) -709346552))))) || (((((/* implicit */int) ((signed char) 403658874U))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            var_21 ^= ((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0] [i_0]);
                            var_22 |= ((/* implicit */int) var_16);
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 6934772971813960367ULL))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_24 ^= ((/* implicit */_Bool) 17266661582539289857ULL);
                            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((arr_1 [i_1 + 1]) > (arr_1 [i_1 - 1]))))));
                            var_26 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) < (((3891308421U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                            var_27 = ((/* implicit */unsigned char) ((333373256) < (arr_16 [(unsigned char)13] [i_2] [i_3] [i_3] [i_3])));
                        }
                        arr_19 [i_0] [(unsigned short)18] [i_2] = (unsigned short)63693;
                        arr_20 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3])) > (var_6)))), (min((arr_13 [i_3] [i_2] [i_2] [i_1 + 1] [i_0]), (arr_13 [i_0] [i_1 - 1] [i_2] [i_0] [i_3])))));
                        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (-((-(arr_17 [i_0] [i_1] [i_2] [i_3] [i_3]))))))));
                    }
                    arr_21 [i_0] [i_1] [i_2] = ((/* implicit */int) arr_15 [11] [11] [i_2] [11] [15ULL]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_6 = 3; i_6 < 22; i_6 += 1) 
        {
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)1)) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_6 - 2] [i_6 - 2] [i_6 - 3] [12ULL])) && (((/* implicit */_Bool) var_10)))))));
            var_30 *= ((/* implicit */_Bool) min((((min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_6] [i_0] [i_6] [i_6])), (1180082491170261758ULL))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)122))) / (arr_17 [i_0] [(signed char)10] [i_0] [i_0] [i_6])))))), (((/* implicit */unsigned long long int) var_18))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) var_5)) << (((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7]))))), (min((arr_17 [i_7] [i_7] [i_7] [i_7] [i_7]), (((((/* implicit */_Bool) arr_13 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_14)))))));
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (signed char)0))));
        arr_27 [i_7] = ((/* implicit */unsigned int) arr_22 [i_7] [i_7]);
    }
    for (unsigned char i_8 = 1; i_8 < 9; i_8 += 3) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1180082491170261758ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -333373257)) / (3891308422U))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (-709346552))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8 - 1])) == (((/* implicit */int) min(((unsigned char)255), ((unsigned char)240)))))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                {
                    arr_34 [i_9] [i_10] = ((/* implicit */short) arr_8 [i_8] [i_8 - 1] [i_9] [i_10]);
                    arr_35 [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) (+((-(9223372036854775807LL)))));
                    arr_36 [i_8] [i_9] [i_9] [i_10] = var_18;
                    arr_37 [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                var_33 ^= ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_22 [i_8 - 1] [i_8 - 1]))))));
                arr_42 [i_8] [8ULL] [i_12] = ((/* implicit */signed char) arr_13 [i_12] [(unsigned short)2] [i_11] [i_8 + 1] [i_8]);
                var_34 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                var_35 = ((((/* implicit */_Bool) min((arr_6 [i_8] [(short)12] [i_12]), (arr_6 [i_12] [i_11] [i_8 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_11] [i_11] [i_11] [i_12])) - (arr_6 [i_8] [i_8] [i_12])))) : (min((((/* implicit */unsigned long long int) (unsigned char)165)), (1180082491170261758ULL))));
                arr_43 [i_8] [i_11] [i_12] |= ((/* implicit */long long int) min((1180082491170261759ULL), (min((((/* implicit */unsigned long long int) arr_29 [i_12] [i_8 - 1])), (((((/* implicit */_Bool) 377074705)) ? (arr_23 [i_12]) : (1180082491170261758ULL)))))));
            }
            arr_44 [i_8] [i_8] [i_8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned short) var_13)), (arr_40 [8U] [(unsigned char)0] [i_8 + 1] [i_8]))), (((/* implicit */unsigned short) ((-709346552) > (((/* implicit */int) (short)-32751)))))))) ? (((arr_28 [i_11] [i_8]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_40 [i_8 + 1] [i_8 + 1] [i_11] [i_11])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) 333373256)) : (9223372036854775807LL)))) ? (min((arr_0 [i_8]), (((/* implicit */int) var_13)))) : (((((/* implicit */int) arr_38 [(_Bool)1] [i_11])) - (((/* implicit */int) (_Bool)1))))))));
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                for (signed char i_14 = 1; i_14 < 9; i_14 += 1) 
                {
                    {
                        arr_49 [i_14] [i_14] [i_14] [i_8 + 1] = ((/* implicit */_Bool) min((arr_7 [i_8] [(short)3] [16ULL]), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_8] [i_11] [5] [5]))) / (8191LL)))))));
                        var_36 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55010))) == ((~(3891308422U)))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_48 [i_8 + 1] [i_8 + 1] [i_8 + 1]))))))))));
                        arr_50 [i_8] [i_8] [i_14] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255)))))));
                        arr_51 [i_11] |= ((/* implicit */unsigned short) var_0);
                        var_37 = ((/* implicit */unsigned short) arr_14 [i_14] [i_14] [i_13] [(short)9] [i_8 + 1]);
                    }
                } 
            } 
            var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8] [i_11] [i_11] [i_11] [i_8])) ? (var_8) : (((/* implicit */unsigned long long int) 2160158861U))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_13), (var_13))))) : (min((((/* implicit */long long int) arr_10 [i_11] [i_8 - 1] [i_11] [i_11])), (var_3))))), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_18))) == (-301708219019540769LL))) ? ((+(var_4))) : (((/* implicit */int) min(((short)-32751), (((/* implicit */short) arr_45 [(unsigned short)7] [i_11] [i_11])))))))))))));
            var_39 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) var_0))))) % ((-(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_11])) ? (((/* implicit */int) arr_45 [i_8 - 1] [i_11] [i_11])) : (-505007137)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : ((~(arr_23 [i_11])))))));
        }
        for (long long int i_15 = 1; i_15 < 8; i_15 += 4) 
        {
            arr_56 [i_15] [i_8] [i_8] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_10)) * (var_16)))) ? (((/* implicit */int) var_1)) : (arr_0 [3LL])))), ((+(arr_13 [i_8 - 1] [i_8] [i_15] [16LL] [i_15 + 1])))));
            arr_57 [i_15] [i_15] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_8 + 1])) ? (((/* implicit */int) arr_29 [i_8 - 1] [i_15 + 2])) : (-505007122)))), (((((/* implicit */_Bool) -709346552)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8 - 1] [i_15 - 1])))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 1; i_16 < 9; i_16 += 3) /* same iter space */
    {
        arr_62 [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned char)194))));
        var_40 &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)174)) / (-333373257)));
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            for (short i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_19 = 2; i_19 < 9; i_19 += 1) 
                    {
                        arr_70 [i_17] [i_17] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_38 [i_16] [i_16])) : (((/* implicit */int) var_18))))));
                        arr_71 [i_16] [i_18] = ((/* implicit */unsigned long long int) var_4);
                        var_41 = ((/* implicit */unsigned long long int) ((unsigned char) arr_48 [i_19] [i_16 + 1] [i_19 + 1]));
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) arr_58 [i_19 - 2] [i_16 + 1]))));
                    }
                    for (int i_20 = 2; i_20 < 9; i_20 += 1) 
                    {
                        var_43 *= ((/* implicit */unsigned short) ((arr_58 [i_16 - 1] [i_16 - 1]) == (((/* implicit */long long int) ((/* implicit */int) var_17)))));
                        arr_74 [i_16] [i_16] [i_18] [0LL] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 709346551)) ? (678920907U) : (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)23))));
                        var_44 = ((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_16 + 1])) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_16 - 1])))));
                        var_45 *= ((unsigned long long int) ((unsigned long long int) var_17));
                    }
                    var_46 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_17))));
                }
            } 
        } 
    }
    var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned short)39291)))))))));
}
