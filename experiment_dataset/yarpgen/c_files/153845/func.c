/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153845
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_11);
        var_19 *= ((/* implicit */signed char) ((unsigned int) ((unsigned char) arr_0 [i_0 + 2])));
    }
    for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */long long int) (((+(((((-751905236) + (2147483647))) >> (((((/* implicit */int) arr_0 [14LL])) + (81))))))) < (min((((/* implicit */int) max((((/* implicit */short) var_5)), (arr_10 [i_1 + 2] [i_2] [i_3])))), (var_6)))));
                    var_21 -= ((/* implicit */unsigned short) arr_7 [i_1] [i_2] [i_1]);
                    arr_12 [i_1] |= ((/* implicit */unsigned int) max((min((((long long int) arr_4 [i_1])), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_3] [i_2] [i_1])) * (((/* implicit */int) arr_0 [i_3]))))))), (((((/* implicit */_Bool) (+(var_6)))) ? (arr_8 [i_1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1])))))));
                    var_22 -= ((/* implicit */_Bool) arr_8 [i_2] [i_1]);
                }
            } 
        } 
        arr_13 [i_1 - 1] = ((/* implicit */unsigned long long int) arr_8 [(unsigned char)2] [2ULL]);
        /* LoopSeq 2 */
        for (short i_4 = 3; i_4 < 7; i_4 += 3) 
        {
            arr_17 [i_1] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((((/* implicit */_Bool) 9007627027510717541LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)33))) : (-9007627027510717553LL))) > (((/* implicit */long long int) ((var_1) / (((/* implicit */int) (signed char)76)))))))), ((signed char)25)));
            arr_18 [i_4] [i_1] [5] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) min((var_4), (24LL))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (-9007627027510717550LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))) : (6034245850632548117ULL))))))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(2935763021U)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((arr_8 [i_1 - 1] [7]) / (arr_8 [i_1 - 1] [i_1 - 1]))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                var_24 -= ((/* implicit */signed char) var_5);
                var_25 = ((/* implicit */long long int) ((arr_20 [(_Bool)1] [(unsigned short)2] [i_5]) ? (((/* implicit */int) (short)32760)) : (((arr_20 [(unsigned short)2] [i_4] [(unsigned short)2]) ? (arr_1 [i_4] [i_5]) : (((/* implicit */int) (_Bool)1))))));
            }
            for (int i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_21 [i_4] [10] [i_4 - 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [2U] [2U] [i_4 - 1]))))), (((/* implicit */unsigned int) arr_20 [8U] [i_1] [i_4 - 1]))));
                var_27 = ((((/* implicit */_Bool) 1359204274U)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2935763022U)) ? (arr_11 [i_6 + 3] [i_6] [i_4 - 3] [i_1 - 3]) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) 280925220896768ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (280925220896772ULL)))))));
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 1359204282U)) ? (var_6) : (((/* implicit */int) (short)-32758)))), (min((((/* implicit */int) (unsigned char)117)), (arr_11 [i_8] [i_7] [i_6] [i_4])))))) != (max((((/* implicit */unsigned long long int) 751905236)), (arr_4 [i_6 - 1]))))))));
                            var_29 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(2935763016U)))) * ((-(((unsigned long long int) arr_23 [i_7] [i_7] [i_7] [i_7]))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_9 = 2; i_9 < 8; i_9 += 3) 
            {
                var_30 = ((/* implicit */unsigned long long int) var_1);
                var_31 = ((/* implicit */short) var_11);
            }
            /* LoopSeq 1 */
            for (long long int i_10 = 2; i_10 < 10; i_10 += 2) 
            {
                arr_37 [i_4] [2ULL] [i_10] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_4 + 3]))) - (-5646211788066544895LL))), (((/* implicit */long long int) ((((/* implicit */int) (short)10111)) == (((/* implicit */int) (unsigned char)138)))))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        {
                            var_32 -= ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_5 [i_1] [8] [i_11])))) & ((~(((/* implicit */int) (short)32764))))));
                            var_33 *= ((/* implicit */unsigned short) (-(((18446744073709551612ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            var_34 = ((int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5728238151158009767LL)))))) / (max((var_15), (((/* implicit */long long int) var_16))))));
                            var_35 = ((/* implicit */short) var_1);
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            var_36 = ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)0)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) >> (((5646211788066544872LL) - (5646211788066544857LL)))))) ? (max((var_4), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1 + 2] [i_1 + 2] [i_13] [i_13]))))))));
            var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) var_16))));
            /* LoopSeq 2 */
            for (int i_14 = 0; i_14 < 11; i_14 += 3) /* same iter space */
            {
                var_38 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 1])) ? (arr_1 [i_1 + 2] [i_13]) : (arr_1 [i_14] [i_14]))), (max((arr_1 [i_1 - 3] [i_1]), (arr_1 [i_13] [i_14])))));
                var_39 ^= (+(((arr_35 [(unsigned short)1] [i_1] [i_1 - 3] [i_1]) * (arr_35 [i_1] [i_1] [i_1 + 2] [i_1]))));
                var_40 = ((/* implicit */signed char) ((arr_4 [i_14]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1 + 2] [(_Bool)1] [i_14])))));
                var_41 -= ((/* implicit */signed char) arr_22 [i_1] [i_1] [i_1]);
            }
            for (int i_15 = 0; i_15 < 11; i_15 += 3) /* same iter space */
            {
                arr_48 [i_15] = ((/* implicit */int) arr_39 [i_1] [i_13] [i_15]);
                var_42 -= ((/* implicit */long long int) arr_1 [i_1] [i_1]);
                var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) arr_23 [i_1] [i_1] [i_15] [i_15]))));
            }
        }
    }
    for (long long int i_16 = 0; i_16 < 22; i_16 += 2) 
    {
        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) var_8))));
        var_45 = ((/* implicit */signed char) max(((unsigned char)127), (((/* implicit */unsigned char) (signed char)-14))));
    }
    var_46 = ((/* implicit */long long int) (signed char)54);
    var_47 = ((/* implicit */int) ((5885502936814376314LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119)))));
}
