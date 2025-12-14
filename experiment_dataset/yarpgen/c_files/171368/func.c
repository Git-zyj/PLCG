/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171368
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
    for (int i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2] [i_3] [(signed char)7] = ((/* implicit */signed char) max(((+(8364066250834948168LL))), (((/* implicit */long long int) max((var_0), (var_3))))));
                                var_17 = ((/* implicit */long long int) arr_6 [i_0]);
                            }
                        } 
                    } 
                    var_18 *= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_7 [i_0]))));
        var_20 ^= ((/* implicit */int) 8364066250834948164LL);
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            arr_16 [i_0] [i_5] [i_0] = ((/* implicit */int) arr_2 [i_0]);
            var_21 = ((long long int) arr_7 [i_5]);
            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) var_8);
            arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8364066250834948168LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6567766860337798079ULL)))))) : (8364066250834948149LL)));
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -779081404)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_7] [i_7] [i_0]))) : (arr_2 [i_6]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0 + 3])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_15 [i_0] [3LL]))))))));
                            var_23 = ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */long long int) arr_7 [i_8])), (min((arr_2 [(unsigned short)7]), (((/* implicit */long long int) arr_14 [i_0] [i_6])))))) : (8364066250834948164LL));
                            arr_29 [i_0] = var_7;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 10; i_9 += 2) 
                {
                    for (unsigned int i_10 = 1; i_10 < 8; i_10 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0 + 1] [i_9 + 1] [i_10 - 1] [(short)4] [i_10 - 1]))) + (var_4))))));
                            arr_35 [i_0] [i_0] = ((/* implicit */_Bool) min((min((8364066250834948173LL), (-8364066250834948188LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_13)) : (var_8)))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) (-((~(min((8191ULL), (((/* implicit */unsigned long long int) var_5))))))));
                arr_36 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_25 [i_0] [i_5])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5] [i_0]))) : (var_2)));
            }
        }
        /* vectorizable */
        for (short i_11 = 2; i_11 < 10; i_11 += 3) 
        {
            var_26 = ((8364066250834948164LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))));
            var_27 *= ((/* implicit */unsigned int) var_16);
            var_28 -= ((/* implicit */unsigned short) arr_33 [0] [i_11] [0] [2LL] [0U]);
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                for (int i_13 = 2; i_13 < 10; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        {
                            arr_49 [i_0] [i_11] [i_14] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_43 [i_12]))));
                            var_29 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_13])) ? (((/* implicit */int) arr_10 [i_14] [i_14] [i_14] [i_0])) : (((/* implicit */int) arr_41 [i_14]))))) ? (((var_8) | (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) arr_40 [i_12]))));
                            arr_50 [i_0] [i_0] [i_0] [i_12] [i_13] [i_14] [i_0] = ((/* implicit */_Bool) arr_22 [i_0]);
                            var_30 = ((/* implicit */unsigned char) -512388559);
                            var_31 = ((/* implicit */unsigned short) ((long long int) arr_15 [i_11 + 1] [i_0 + 3]));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            for (unsigned short i_16 = 3; i_16 < 10; i_16 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        var_32 ^= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -8364066250834948217LL)) ? (8364066250834948167LL) : (((/* implicit */long long int) arr_40 [i_15]))))) ? (((/* implicit */int) (short)-30437)) : (((/* implicit */int) (signed char)123))))));
                        var_33 ^= ((/* implicit */unsigned int) arr_2 [i_0]);
                        var_34 += ((/* implicit */int) max((min((((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_16 + 1] [i_17] [i_15])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) arr_41 [(short)2])))))))));
                        var_35 *= ((/* implicit */unsigned long long int) arr_25 [i_0] [i_15]);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_36 = ((/* implicit */short) min((var_7), (((/* implicit */long long int) var_14))));
                        var_37 |= ((/* implicit */unsigned char) var_15);
                    }
                    var_38 += ((/* implicit */unsigned long long int) var_9);
                    var_39 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_31 [(short)10] [i_16 - 3] [(short)9] [i_15] [i_0 + 1]))))) | (((arr_44 [i_0] [i_0] [i_15] [i_16] [i_16] [i_16]) / (-1294658402528784956LL)))));
                }
            } 
        } 
    }
    for (long long int i_19 = 0; i_19 < 16; i_19 += 3) 
    {
        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_62 [i_19])) ? (((/* implicit */int) (short)-25993)) : (((/* implicit */int) var_14)))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (((var_8) % (-1573085130909701574LL))))))));
        arr_64 [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((1731547697), (((/* implicit */int) var_9)))), (((((/* implicit */int) (short)-1987)) / (1056948654)))))) ? (((/* implicit */unsigned long long int) min((8364066250834948167LL), (((((/* implicit */_Bool) arr_62 [i_19])) ? (var_10) : (((/* implicit */long long int) var_1))))))) : (max((((/* implicit */unsigned long long int) var_9)), (((arr_61 [i_19]) - (arr_62 [i_19])))))));
        var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24790)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32433))) : (-1573085130909701563LL)))) ? (((/* implicit */long long int) -380632237)) : (var_8)))) ? (((/* implicit */unsigned int) -380632226)) : ((+(var_2))))))));
    }
    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            var_42 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 8364066250834948188LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32752))) : (17987337667408810558ULL)));
            arr_70 [i_20] [i_21] [i_21] = ((/* implicit */unsigned short) var_14);
            var_43 = ((/* implicit */_Bool) ((arr_69 [i_20] [i_21 - 1]) | (arr_69 [i_20] [i_21 - 1])));
            arr_71 [i_20] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_68 [i_20] [i_21]))));
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) arr_66 [5ULL] [5ULL]))));
            arr_74 [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((8364066250834948168LL), (((/* implicit */long long int) arr_67 [i_20] [i_22])))))));
            arr_75 [i_20] [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_65 [i_20]))))));
        }
        var_45 = ((/* implicit */short) min((arr_65 [i_20]), (((/* implicit */long long int) ((_Bool) (short)(-32767 - 1))))));
    }
    /* vectorizable */
    for (int i_23 = 2; i_23 < 12; i_23 += 2) 
    {
        arr_78 [i_23] = ((/* implicit */_Bool) ((signed char) 1573085130909701574LL));
        arr_79 [4ULL] = ((/* implicit */int) arr_62 [i_23 - 2]);
        var_46 = ((/* implicit */unsigned short) (-(arr_76 [i_23 + 1])));
        var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) 8364066250834948188LL)))))));
    }
    var_48 &= ((/* implicit */unsigned short) ((var_3) && (var_12)));
}
