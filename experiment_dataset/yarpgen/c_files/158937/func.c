/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158937
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
    var_15 = ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_5))));
    var_16 |= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) -1978680691)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (16140901064495857664ULL)))))) ? ((~((-(2305843009213693951ULL))))) : (min((arr_1 [i_0] [i_0]), (arr_0 [8LL])))));
        var_18 = ((/* implicit */unsigned short) (+(((arr_1 [i_0] [i_0]) & (arr_0 [i_0])))));
        var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (2305843009213693952ULL) : (arr_0 [i_0])))));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_20 -= ((/* implicit */unsigned short) min((((arr_2 [i_1] [i_1 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16724))))), (min((arr_2 [i_1] [i_1 + 2]), (arr_2 [i_1] [i_1 + 2])))));
        var_21 = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)4096)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)46747))))), (((9046513177011849669LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)216))))))) >> (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), (5686411510150835764ULL)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 13; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
        {
            var_22 += ((/* implicit */_Bool) arr_6 [i_2]);
            /* LoopSeq 1 */
            for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [(unsigned char)1])))))));
                var_24 = ((/* implicit */short) ((((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_0)))) >> (((/* implicit */int) arr_4 [i_2]))));
            }
            var_25 = ((/* implicit */unsigned int) (~(var_13)));
        }
        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_26 = ((/* implicit */unsigned long long int) (!((_Bool)0)));
            var_27 = arr_0 [i_2];
            var_28 = ((/* implicit */long long int) (+(((((/* implicit */int) var_7)) >> (((11695032355945188624ULL) - (11695032355945188607ULL)))))));
            var_29 = ((/* implicit */short) 2305843009213693953ULL);
            var_30 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)53))))) ^ (12760332563558715823ULL));
        }
        var_31 = ((/* implicit */short) (signed char)-50);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
    {
        var_32 = ((((/* implicit */_Bool) arr_5 [(short)7] [i_6])) || (((/* implicit */_Bool) arr_5 [i_6] [i_6])));
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) /* same iter space */
        {
            var_33 = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_7] [i_7] [i_6]))));
            var_34 = ((/* implicit */_Bool) 4294967295U);
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned short) ((5686411510150835763ULL) == (((/* implicit */unsigned long long int) 256U))));
            var_36 += ((/* implicit */unsigned short) 18446744073709551615ULL);
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 4; i_10 < 12; i_10 += 2) 
                {
                    var_37 = ((/* implicit */unsigned short) (+(arr_15 [i_10 - 4])));
                    var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_9] [i_10 - 4] [(unsigned short)4] [i_10] [i_10 - 2] [i_10 + 1]))));
                }
                var_39 = ((/* implicit */unsigned short) ((1978680673) - (var_13)));
                var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [(signed char)3]))));
            }
            var_41 = ((/* implicit */long long int) (unsigned short)65535);
        }
        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
        {
            var_42 = arr_22 [i_6] [i_11] [i_11] [i_11];
            /* LoopNest 2 */
            for (long long int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    {
                        var_43 |= ((/* implicit */_Bool) (unsigned char)195);
                        var_44 = 576460752303423484ULL;
                        var_45 |= ((/* implicit */short) (unsigned short)27783);
                    }
                } 
            } 
        }
        var_46 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)61)) % (((/* implicit */int) (unsigned char)73))));
    }
    for (unsigned short i_14 = 2; i_14 < 19; i_14 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_47 |= var_8;
            var_48 = ((/* implicit */short) ((((/* implicit */_Bool) 15074506323508095852ULL)) ? (25ULL) : (18446744073709551583ULL)));
        }
        /* vectorizable */
        for (long long int i_16 = 1; i_16 < 19; i_16 += 2) /* same iter space */
        {
            var_49 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))) & ((~(arr_1 [i_14] [i_16])))));
            var_50 = ((/* implicit */short) (!(((/* implicit */_Bool) 4123168604160ULL))));
            var_51 = ((/* implicit */unsigned long long int) max((var_51), (((/* implicit */unsigned long long int) arr_38 [i_14] [i_14] [14U]))));
            var_52 = ((/* implicit */int) max((var_52), (((/* implicit */int) ((arr_2 [i_16 + 1] [i_14 - 2]) ^ (arr_2 [i_16 + 1] [i_14 - 2]))))));
            var_53 = var_7;
        }
        for (long long int i_17 = 1; i_17 < 19; i_17 += 2) /* same iter space */
        {
            var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) (~((~(arr_34 [i_14 + 1] [i_14 - 1]))))))));
            var_55 += ((/* implicit */_Bool) (unsigned char)189);
            var_56 = ((/* implicit */unsigned short) var_6);
            var_57 = ((/* implicit */short) min((var_57), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_39 [i_14 - 1] [12ULL] [i_17 - 1])) || (((/* implicit */_Bool) (unsigned short)27005)))))) != (((((/* implicit */long long int) 4294967291U)) / (34634616274944LL))))))));
        }
        var_58 = ((/* implicit */unsigned char) min(((-(arr_34 [i_14] [(unsigned char)19]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_33 [i_14 - 2])))))));
        var_59 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_38 [i_14 - 1] [i_14 - 1] [4LL])) && ((_Bool)1))), (((((/* implicit */_Bool) arr_36 [i_14 - 2])) || (((/* implicit */_Bool) arr_35 [i_14 - 2]))))));
        var_60 += ((/* implicit */short) 256U);
    }
    var_61 = ((/* implicit */_Bool) (unsigned char)60);
}
