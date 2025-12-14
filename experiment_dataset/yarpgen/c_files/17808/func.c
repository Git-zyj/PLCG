/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17808
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) && (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                    var_17 ^= (signed char)127;
                    arr_8 [i_0] [5] [6ULL] = ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) 3497919625U);
        var_19 = (_Bool)1;
    }
    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_5 = 3; i_5 < 8; i_5 += 3) 
        {
            var_20 = ((/* implicit */long long int) ((((min((((/* implicit */unsigned long long int) var_5)), (arr_12 [1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) var_5))));
            var_21 = ((/* implicit */signed char) max((var_1), (((arr_3 [i_4 + 2]) ? (((/* implicit */int) arr_0 [(unsigned short)4] [(unsigned short)4])) : (((/* implicit */int) arr_3 [i_4 + 2]))))));
            var_22 = ((/* implicit */unsigned long long int) arr_2 [6] [2]);
        }
        for (unsigned long long int i_6 = 2; i_6 < 8; i_6 += 4) 
        {
            arr_19 [2U] [i_6] [i_6 + 1] = arr_1 [i_6];
            arr_20 [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) arr_7 [i_4] [i_6] [i_6 + 2] [(short)5])), (arr_4 [i_6])))));
            var_23 = ((/* implicit */signed char) arr_12 [i_4]);
            var_24 = ((((((/* implicit */_Bool) max((arr_6 [(unsigned short)2] [i_6] [i_6]), (((/* implicit */int) (signed char)-64))))) ? (((/* implicit */int) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [(_Bool)1])))))) : (arr_17 [i_6 - 2] [(unsigned short)0] [i_6]))) >> ((((-(571294089))) + (571294118))));
            var_25 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6]))) | (arr_4 [i_6])))))) ? (((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_6] [i_4]))) && (((/* implicit */_Bool) var_13)))))));
        }
        /* vectorizable */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    {
                        arr_29 [i_4] [i_7] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_9] [i_4 + 1])) ? (((/* implicit */int) arr_9 [i_7] [i_8])) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (_Bool)1))))));
                        var_26 = ((/* implicit */unsigned char) ((unsigned int) var_0));
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [2LL])) | (arr_16 [i_4] [i_9] [i_10])))) ? (((((((/* implicit */int) arr_25 [i_8] [i_9] [i_9])) + (2147483647))) << (((((/* implicit */int) arr_15 [(_Bool)1] [i_7] [6])) - (164))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_10] [i_10])))))));
                            var_28 = ((/* implicit */signed char) ((_Bool) ((arr_1 [i_9]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))))));
                            arr_32 [4ULL] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_4 + 2] [i_4 - 1])) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34124)))));
                            var_29 = ((((/* implicit */_Bool) arr_0 [i_10] [i_4 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_9 [i_4 - 1] [i_4 + 1])));
                        }
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4 - 1]))) / ((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                            arr_35 [i_11] [1ULL] [(short)7] [i_7] [i_4] [1ULL] [i_4] = ((signed char) (unsigned char)243);
                        }
                        arr_36 [i_4] [i_4] [(short)9] [i_7] [i_8] [i_4] = ((((/* implicit */_Bool) 14932140124950919917ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (18446744073709551602ULL))))) : (arr_24 [i_4 + 2] [i_4] [i_4]));
                        var_31 ^= ((/* implicit */int) arr_14 [i_4 - 1] [i_4 + 1]);
                    }
                } 
            } 
            var_32 ^= ((/* implicit */_Bool) ((signed char) arr_22 [i_4 + 2] [i_4 + 2]));
            var_33 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_4] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_3 [i_4 + 1]))));
            arr_37 [i_4 + 1] [i_7] [i_4 + 1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_34 [i_4] [i_4] [i_4])) / (-269103499))) * (((/* implicit */int) arr_23 [2U]))));
        }
        var_34 = ((/* implicit */long long int) ((short) ((((/* implicit */int) arr_11 [i_4 + 2])) & (((/* implicit */int) arr_11 [i_4 + 2])))));
    }
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
    {
        var_35 = ((/* implicit */unsigned long long int) var_2);
        var_36 = ((/* implicit */short) (signed char)-103);
        var_37 = arr_39 [i_12];
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            arr_43 [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */unsigned long long int) -9103343882815147778LL)) != (((((/* implicit */_Bool) arr_40 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))) : (2340504752189827313ULL)))));
            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_12]))) / (-9103343882815147778LL))))));
            var_39 = ((/* implicit */short) arr_40 [7U]);
        }
        for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            var_40 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [(unsigned short)13] [16] [(signed char)0])) ? (((/* implicit */int) arr_41 [(_Bool)1])) : (((/* implicit */int) (_Bool)0))));
            /* LoopNest 3 */
            for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                for (unsigned short i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */_Bool) max((((/* implicit */int) (short)-22685)), (((((/* implicit */_Bool) (short)-19864)) ? (((/* implicit */int) max(((unsigned char)25), (((/* implicit */unsigned char) var_13))))) : (((/* implicit */int) (_Bool)1))))));
                            arr_53 [i_12] [0] [0] = ((/* implicit */unsigned short) ((((((3458764513820540928LL) == (((/* implicit */long long int) arr_44 [i_12] [i_14])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) : (289989531U))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_54 [i_15] = ((/* implicit */unsigned short) (short)17520);
                        }
                    } 
                } 
            } 
            var_42 = ((/* implicit */short) max((((/* implicit */int) ((unsigned char) var_1))), (((((((/* implicit */int) arr_51 [i_12] [(_Bool)1] [i_12] [13U] [i_14])) + (2147483647))) << (((((((/* implicit */_Bool) (unsigned char)239)) ? (7191481666474228794LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))) - (7191481666474228794LL)))))));
        }
        for (short i_18 = 0; i_18 < 19; i_18 += 1) 
        {
            var_43 -= ((/* implicit */signed char) 2271985639U);
            arr_57 [i_18] [i_18] [(signed char)6] = ((/* implicit */unsigned short) arr_52 [i_12] [i_12] [i_12] [i_18] [i_18] [i_12]);
            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_14) + (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_12] [i_12] [i_12] [i_12] [i_12])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ? (arr_44 [14] [14]) : (((/* implicit */int) arr_55 [i_18]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */_Bool) 0ULL)) ? (max((((/* implicit */unsigned long long int) 5382853975427156783LL)), (arr_50 [(unsigned short)9] [(_Bool)1] [(_Bool)1] [i_12] [i_12]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))))));
            arr_58 [i_18] [i_18] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_42 [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_48 [i_12] [i_18] [i_18])) : ((+(((/* implicit */int) (unsigned short)240))))))));
        }
    }
    for (int i_19 = 2; i_19 < 22; i_19 += 1) 
    {
        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) (~(((/* implicit */int) arr_59 [i_19 - 2])))))));
        /* LoopSeq 1 */
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_46 = ((/* implicit */unsigned int) (_Bool)1);
            var_47 = ((/* implicit */_Bool) min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_61 [i_19 - 1] [i_20])) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_65 [i_20])) && (((/* implicit */_Bool) (signed char)64)))))))));
            var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_15)))) ? (max((((/* implicit */long long int) (signed char)-103)), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))) ? (max((arr_60 [i_19 + 2]), (arr_60 [i_19 - 1]))) : (((/* implicit */int) max(((short)-27599), ((short)16690)))))))));
        }
        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(2097151)))) ? (((((/* implicit */_Bool) (short)15360)) ? (arr_65 [i_19 + 2]) : (arr_65 [i_19 + 2]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-48)))))));
    }
    var_50 = ((/* implicit */short) ((var_10) - (((/* implicit */long long int) var_14))));
}
