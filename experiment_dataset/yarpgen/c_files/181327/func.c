/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181327
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
    var_15 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) (signed char)-63))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) var_0);
        var_17 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (arr_4 [i_1 - 1])));
        var_19 = ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 1]))) : (((var_12) >> (((arr_4 [i_1 - 1]) - (6169529215739722997LL))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            var_20 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_2 - 1] [i_1 - 1])) ^ (((/* implicit */int) arr_7 [i_2 - 2] [i_1 - 1]))));
            var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2])) ? (1964576510U) : (((arr_6 [i_1] [i_1 - 1]) & (arr_6 [i_1] [i_2])))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_22 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) & (2330390791U)))));
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2330390778U)))))));
                arr_11 [i_2] &= ((/* implicit */unsigned int) (unsigned char)203);
            }
            for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                var_24 = ((/* implicit */short) var_13);
                arr_16 [i_1 - 1] [i_2] [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1 - 1]))));
                var_25 = ((/* implicit */long long int) ((unsigned char) ((1601772583286680870ULL) == (17507149565361764104ULL))));
                var_26 = ((/* implicit */short) var_0);
            }
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) arr_5 [i_5]);
                        arr_21 [i_1] [i_1] [i_1] [i_6 + 2] = ((/* implicit */unsigned char) ((-1614689919520143555LL) / (arr_14 [i_2] [i_6 + 1])));
                        arr_22 [i_1 - 1] [i_2] [i_6] [i_1] &= ((/* implicit */short) ((((((/* implicit */int) arr_13 [i_6] [i_5] [i_2] [i_1])) == (((/* implicit */int) (unsigned char)232)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1]))) : (((13961829185663945053ULL) - (((/* implicit */unsigned long long int) var_11))))));
                        /* LoopSeq 3 */
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            var_28 ^= ((/* implicit */unsigned short) arr_5 [19ULL]);
                            arr_26 [i_1 - 1] [i_2] [i_6] [i_7] = ((/* implicit */short) (unsigned char)241);
                            var_29 = ((/* implicit */unsigned short) ((((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((var_6) + (2011425649440806846LL))) - (7LL))))) % (((/* implicit */int) arr_13 [i_1 - 1] [i_6 + 1] [i_5] [i_6]))));
                            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1 - 1])) / (((/* implicit */int) var_4)))))));
                        }
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                        {
                            arr_31 [i_6] [i_6] [i_6] [i_8] [i_8] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)23))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30753))) : (((((/* implicit */_Bool) 756878413919009340ULL)) ? (arr_30 [9LL] [9LL] [i_5] [i_6] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37373)))))));
                            var_31 = ((/* implicit */unsigned short) (~(4294967290U)));
                            var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_8] [i_6 - 1] [i_6 - 1] [i_6] [i_2 + 3])) || (((/* implicit */_Bool) arr_25 [1U] [i_6 - 1] [i_5] [i_8] [i_2 - 2]))));
                            var_33 &= ((/* implicit */long long int) (+(2330390785U)));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_34 [i_1 - 1] [7U] [i_5] [16ULL] [i_9] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_2] [i_2 - 1] [i_5] [i_6 - 1])) ? (((/* implicit */int) arr_15 [i_1] [i_2 - 1])) : (((/* implicit */int) arr_28 [i_2 + 2] [i_2 - 1] [i_2 + 3] [i_6 - 1] [i_9] [i_9]))));
                            arr_35 [i_1] [(short)12] [i_5] [15U] [15U] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)39071))));
                            arr_36 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_2 + 2] [i_6 + 3] [i_2] [i_6 + 3]))));
                            var_34 *= ((/* implicit */long long int) (~(2330390791U)));
                            var_35 = ((/* implicit */long long int) min((var_35), (((((/* implicit */long long int) ((((/* implicit */int) (short)0)) % (((/* implicit */int) (unsigned char)251))))) / (((long long int) (unsigned short)24727))))));
                        }
                    }
                } 
            } 
        }
        for (long long int i_10 = 2; i_10 < 18; i_10 += 2) 
        {
            var_36 &= ((/* implicit */long long int) 18446744073709551588ULL);
            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) var_3))));
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) 2684572268U)) ? (939594508347787511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10815))))))));
                var_39 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) && ((!(((/* implicit */_Bool) (short)32767))))));
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_11] [i_10])) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (short)32750))))) ? (16844971490422870736ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32887)) % (((/* implicit */int) (short)-4128)))))));
            }
            for (short i_12 = 1; i_12 < 21; i_12 += 2) 
            {
                var_41 ^= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)138)) || (((/* implicit */_Bool) arr_38 [i_12] [17LL] [i_1])))))));
                arr_45 [i_12 - 1] = ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) (short)3014)) - (3014)))))));
            }
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    arr_50 [i_1] [i_1] [i_14] [i_14] |= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_14]))) : (arr_49 [i_1] [i_13] [i_10] [i_1] [i_1])))));
                    arr_51 [i_13] [i_10] [i_13] [i_14] [i_14] &= ((/* implicit */long long int) (short)-3025);
                }
                for (unsigned char i_15 = 1; i_15 < 21; i_15 += 1) 
                {
                    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))));
                    var_43 = ((/* implicit */short) var_8);
                }
                for (short i_16 = 1; i_16 < 20; i_16 += 2) 
                {
                    var_44 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_1] [i_1] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)32887))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11)));
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)10815))) - (11ULL)))) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) (unsigned char)150)) << (((((/* implicit */int) arr_7 [i_1] [5ULL])) - (51444))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 3; i_17 < 20; i_17 += 4) 
                    {
                        var_46 = ((/* implicit */unsigned int) ((short) (unsigned char)117));
                        arr_59 [i_13] [i_16] [i_10] [i_16] [i_17] [i_16] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_17 + 1] [i_16 + 2] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_10])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_1])))))));
                    }
                    var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) << (((arr_14 [i_10] [(signed char)16]) - (6926633707404496513LL)))))) ? (16844971490422870743ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_16 + 1] [(unsigned short)18] [i_1 - 1] [i_10 + 4])))));
                }
                var_48 = arr_55 [i_13] [i_10] [i_13];
            }
            arr_60 [i_1 - 1] |= ((/* implicit */unsigned short) var_13);
        }
    }
}
