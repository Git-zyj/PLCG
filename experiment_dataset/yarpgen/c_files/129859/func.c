/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129859
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
    var_18 ^= ((/* implicit */_Bool) var_8);
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned short)21]))) : (2147483647LL)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)18188)) : (var_15))) : (((/* implicit */int) ((_Bool) arr_0 [(short)3])))))));
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)63349)));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) var_7)))) && (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_0 [i_0]))))))) * (((/* implicit */int) (unsigned short)24625))));
    }
    for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) arr_6 [i_1])) | (((/* implicit */int) arr_6 [i_1])))) : ((~(((/* implicit */int) arr_6 [i_1]))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1])))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (arr_1 [i_1]))) : (((((/* implicit */_Bool) 7701409287894437795ULL)) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 10; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) arr_4 [i_2]);
        var_23 ^= ((/* implicit */unsigned long long int) ((short) (-(var_8))));
        var_24 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 - 2]))) - (var_13)));
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 - 1] [i_2 - 1])) ? (arr_10 [i_2 - 2] [i_2 + 1] [i_2 + 2]) : (arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_1 [i_2]))));
            arr_12 [(short)11] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [4U])) ? (((/* implicit */int) arr_8 [i_2] [i_2 - 3])) : (((/* implicit */int) arr_5 [i_2 - 1]))));
            var_27 = ((/* implicit */long long int) (-(arr_10 [i_2 + 2] [i_2 + 1] [i_2 - 2])));
        }
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            arr_16 [i_2] [i_4] = ((/* implicit */unsigned int) (+(7422524691330591583ULL)));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((-1961072994797948834LL) - (((/* implicit */long long int) var_1))))) : (((unsigned long long int) (signed char)112))));
            arr_17 [(unsigned short)0] &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) arr_13 [i_2 - 3] [4ULL])) : (((/* implicit */int) arr_14 [i_2] [i_2] [i_2]))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_7 = 3; i_7 < 11; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)112))) > (-1961072994797948837LL))))));
                            var_30 = ((/* implicit */unsigned short) arr_0 [i_6]);
                            arr_29 [i_7] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(var_6)))) - (var_7)));
                            arr_30 [i_8] [(unsigned short)10] [2] [(unsigned short)10] = ((/* implicit */unsigned char) ((unsigned int) var_2));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned short i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        {
                            arr_36 [i_2 + 2] [i_5] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_9] [i_9])) ? (((/* implicit */int) arr_19 [i_2 + 1] [i_2 - 2])) : (1594329381)));
                            arr_37 [i_2] = ((/* implicit */long long int) var_3);
                            var_31 ^= ((/* implicit */int) (unsigned short)63328);
                        }
                    } 
                } 
                var_32 &= ((/* implicit */unsigned short) ((var_8) ^ (((/* implicit */int) arr_24 [i_2] [i_5]))));
                arr_38 [i_2] [i_5] [i_6] [i_6] = ((/* implicit */int) var_11);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_41 [i_11] [i_11] [5U] [i_2] = ((/* implicit */_Bool) (short)17555);
                var_33 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1961072994797948823LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 3]))) : (var_4)))) ? (109555145) : ((~(var_10)))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(4U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2 + 2]))) : (arr_43 [i_2 - 3] [i_2 + 1] [i_2 + 2])));
                var_35 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) ^ (var_6)));
            }
            for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                var_36 |= ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 - 1]))) == (((((/* implicit */_Bool) arr_24 [i_2] [i_5])) ? (var_17) : (arr_25 [i_2] [i_2] [i_5] [i_13] [i_13]))));
                arr_48 [i_2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2 - 3] [i_2 + 2] [i_2 + 1] [i_2 - 1])) & (((/* implicit */int) (unsigned short)44428))));
                var_37 *= ((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) 1048575LL))));
            }
            var_38 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_46 [i_2] [i_2 - 2] [i_2] [i_2]))));
        }
        /* LoopSeq 3 */
        for (long long int i_14 = 1; i_14 < 11; i_14 += 4) 
        {
            arr_53 [i_2] = ((/* implicit */unsigned short) var_16);
            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_50 [i_2 + 2] [(unsigned char)5] [i_2 + 2]))))) ? (((((/* implicit */_Bool) arr_43 [i_14] [i_14] [i_2 - 3])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) (unsigned short)65530)))) : (((/* implicit */int) arr_9 [i_2 + 2])))))));
            arr_54 [6] [6] &= ((/* implicit */short) ((((/* implicit */int) arr_26 [i_2 + 1] [i_14 + 1])) == (((/* implicit */int) arr_23 [i_2 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1]))));
            arr_55 [i_14 + 1] [i_2] = ((/* implicit */unsigned short) var_13);
        }
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            arr_58 [i_15] [i_15] [i_15] = (-(((/* implicit */int) arr_13 [i_2 - 3] [i_2 + 1])));
            /* LoopSeq 2 */
            for (unsigned int i_16 = 3; i_16 < 11; i_16 += 4) 
            {
                var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_52 [i_15] [(unsigned char)1])) / (arr_18 [i_2]))))));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned char i_18 = 4; i_18 < 9; i_18 += 1) 
                    {
                        {
                            arr_68 [i_2 + 1] [i_15] [i_16] [7ULL] [i_17] [i_17] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_43 [i_2 + 2] [i_15] [i_16])) / (var_17)));
                            var_41 = (_Bool)1;
                        }
                    } 
                } 
            }
            for (unsigned short i_19 = 3; i_19 < 10; i_19 += 4) 
            {
                var_42 += ((/* implicit */unsigned char) (-(-109555130)));
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 12; i_20 += 4) 
                {
                    for (short i_21 = 0; i_21 < 12; i_21 += 1) 
                    {
                        {
                            var_43 *= ((/* implicit */unsigned long long int) (!(arr_73 [i_15] [i_2])));
                            var_44 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775802LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-121))));
                        }
                    } 
                } 
                arr_77 [i_2] [(unsigned char)11] [i_19 + 1] [i_15] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_2] [i_2 - 1]))));
                var_45 = ((/* implicit */unsigned int) 16403896239431582771ULL);
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 2; i_22 < 11; i_22 += 3) 
                {
                    for (unsigned char i_23 = 1; i_23 < 11; i_23 += 3) 
                    {
                        {
                            var_46 -= ((/* implicit */signed char) (~(((arr_56 [i_15] [i_23 - 1]) ? (((/* implicit */int) (short)(-32767 - 1))) : (var_6)))));
                            var_47 *= ((/* implicit */unsigned int) arr_49 [i_23]);
                            var_48 = ((/* implicit */signed char) (!(arr_11 [i_23 - 1])));
                            arr_84 [7U] [i_22] [i_19 - 3] [i_19] [i_15] [i_2] &= ((/* implicit */unsigned int) arr_51 [2ULL] [i_2]);
                        }
                    } 
                } 
            }
            arr_85 [i_2] [i_15] [i_2 - 1] = ((/* implicit */unsigned short) arr_35 [1ULL] [i_2 - 3]);
        }
        for (unsigned short i_24 = 0; i_24 < 12; i_24 += 3) 
        {
            var_49 = ((unsigned char) (unsigned short)14980);
            arr_89 [(short)6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_74 [i_2 - 3] [i_24]))) - (var_1)));
        }
    }
}
