/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134963
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_10 = ((/* implicit */unsigned char) ((var_2) - (((/* implicit */unsigned long long int) arr_1 [i_1] [i_3]))));
                        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4258971566446496180LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_1] [i_0]))));
                        var_12 ^= ((/* implicit */short) 18446744073709551615ULL);
                        arr_10 [i_3] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_6);
                    }
                } 
            } 
            var_13 = var_1;
        }
        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (short i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_1))));
                            var_15 ^= ((/* implicit */signed char) arr_19 [i_0] [i_4] [i_4 - 2] [i_7]);
                            var_16 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)120))));
                        }
                    } 
                } 
            } 
            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_4 + 2] [i_0] [i_0] [i_4 + 2])))));
            var_18 -= (_Bool)1;
        }
        for (signed char i_8 = 1; i_8 < 11; i_8 += 2) 
        {
            arr_22 [i_0] [i_8] = ((/* implicit */short) ((((3471499996571260360ULL) & (arr_7 [i_0] [i_0] [8ULL]))) >> (((((/* implicit */int) arr_11 [i_8])) - (42316)))));
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 2216396319U)) ? (arr_18 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1] [i_0]) : (((/* implicit */unsigned int) arr_0 [i_8 + 1]))));
            var_20 = ((/* implicit */unsigned int) arr_19 [i_0] [i_8 + 1] [i_0] [i_8 + 3]);
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) (~(arr_7 [i_0] [i_9] [i_9])));
            var_22 = ((/* implicit */signed char) ((arr_7 [i_9] [i_9] [i_0]) * (arr_8 [i_9] [i_9] [10ULL] [10ULL])));
        }
        var_23 += arr_15 [i_0] [i_0] [i_0] [i_0];
        var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) arr_23 [i_0] [i_0])) / (-1618634530)))));
        /* LoopNest 2 */
        for (short i_10 = 1; i_10 < 13; i_10 += 1) 
        {
            for (unsigned short i_11 = 1; i_11 < 10; i_11 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) ((14975244077138291256ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_10] [i_10 + 1] [i_0])))));
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -550957174)) ? (((/* implicit */int) (_Bool)1)) : (2016786002)));
                        var_27 = ((15085558822307448912ULL) > (((/* implicit */unsigned long long int) arr_14 [i_10 - 1] [i_11 - 1])));
                    }
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_24 [i_0] [i_10] [i_0])) - (18446744073709551611ULL)));
                        var_29 = ((/* implicit */unsigned char) var_2);
                        var_30 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 1618634530)) >= (((unsigned int) 18446744073709551615ULL))));
                        var_31 = ((/* implicit */short) var_4);
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_14 = 0; i_14 < 19; i_14 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
        {
            arr_44 [i_14] = ((/* implicit */long long int) (short)32308);
            var_32 = ((/* implicit */_Bool) 6ULL);
            var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (((((((/* implicit */int) arr_41 [i_14])) >= (((/* implicit */int) arr_41 [i_14])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775798LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)27230))))) : (10680589122602013568ULL)))));
        }
        /* LoopNest 2 */
        for (short i_16 = 1; i_16 < 17; i_16 += 3) 
        {
            for (unsigned char i_17 = 3; i_17 < 16; i_17 += 2) 
            {
                {
                    var_34 ^= ((/* implicit */short) (-(var_3)));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 1; i_18 < 16; i_18 += 1) 
                    {
                        arr_53 [i_18] [i_18] [i_14] [0] [i_14] = ((/* implicit */_Bool) var_3);
                        var_35 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_1)) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_1)) : (var_8))) : (((/* implicit */unsigned long long int) ((2147483647) >> (((/* implicit */int) var_9))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_19 = 0; i_19 < 19; i_19 += 1) 
                        {
                            var_36 *= ((/* implicit */_Bool) arr_48 [i_18] [i_16]);
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_18 + 1] [i_16 - 1])) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_42 [i_18 + 2] [i_16 + 1]))));
                            var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((_Bool) arr_41 [(unsigned char)2])))));
                        }
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            arr_60 [i_20] [i_14] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(18446744073709551610ULL))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) / (3471499996571260360ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27223))) : (min((((14975244077138291255ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15487))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-9223372036854775804LL))))))));
            var_39 = ((/* implicit */unsigned short) var_7);
        }
        for (unsigned long long int i_21 = 0; i_21 < 19; i_21 += 3) 
        {
            var_40 &= -1558532170;
            var_41 = ((/* implicit */int) var_0);
            var_42 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(127)))) ? (((unsigned long long int) -9223372036854775804LL)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_63 [4ULL])) - (((/* implicit */int) arr_63 [(_Bool)1])))))));
            var_43 -= (unsigned short)65535;
            var_44 ^= ((/* implicit */unsigned long long int) (signed char)(-127 - 1));
        }
        arr_64 [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_51 [i_14] [i_14] [i_14] [i_14]) ? (((/* implicit */int) arr_51 [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_56 [i_14] [i_14] [i_14] [i_14] [i_14])))))));
        var_45 -= ((/* implicit */short) ((((/* implicit */_Bool) ((2144402954779436919ULL) << (((/* implicit */int) arr_50 [i_14]))))) ? ((+(((/* implicit */int) arr_50 [i_14])))) : (((/* implicit */int) max((arr_50 [i_14]), (arr_50 [i_14]))))));
    }
}
