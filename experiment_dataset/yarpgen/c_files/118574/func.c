/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118574
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
    var_15 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_10)), ((~((~(var_7)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9083988187243379550ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))))), (((/* implicit */unsigned long long int) ((9223372036854775798LL) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((min((var_3), (var_3))) ? (max((var_1), (((/* implicit */unsigned int) (short)-21919)))) : (1794765786U)))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_12))))))))));
        /* LoopSeq 4 */
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) var_4))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-70))) | (17179869184ULL)))))) || (var_3)));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_19 = ((/* implicit */long long int) var_12);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2709646024U)) ? (var_2) : (((/* implicit */int) (short)-21914))))) ? (4150811755847838685ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) | (var_1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (1476638849))))));
                }
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_14)))) * (((unsigned long long int) arr_0 [i_4])))))));
                var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)21914)) : (((/* implicit */int) arr_1 [i_0])))) / (var_2)));
            }
            for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 2) 
            {
                arr_16 [i_1] = max((9362755886466172063ULL), (16808880668775357010ULL));
                var_23 = ((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) 1631053896112605697LL))));
            }
            for (unsigned int i_6 = 2; i_6 < 8; i_6 += 3) 
            {
                arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (~((-(9223372036854775807LL)))));
                var_24 += ((/* implicit */unsigned long long int) var_14);
            }
            var_25 = ((/* implicit */unsigned long long int) -765571789940714306LL);
        }
        for (int i_7 = 2; i_7 < 9; i_7 += 3) 
        {
            var_26 |= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) (+(4294967295U)))), (min((((/* implicit */unsigned long long int) var_11)), (arr_9 [6U] [8U] [(unsigned char)8] [6U])))))));
            var_27 = 3252780209U;
        }
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_28 |= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)74))));
            arr_26 [7U] [i_8] [2U] = ((/* implicit */int) (short)21913);
            arr_27 [i_0] [i_8] = ((/* implicit */long long int) ((arr_23 [6] [i_0] [i_0 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [0U] [i_0 - 1] [i_0] [0U])))));
        }
        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            arr_30 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)222))))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) arr_22 [i_0]))))) ^ (arr_9 [i_0 - 1] [i_0] [i_9] [i_9])))));
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 10; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(arr_12 [i_0] [i_0] [i_0 - 1] [5U])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-83))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_5))))))))));
                        var_30 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4199813173U)) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)2046)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((unsigned long long int) arr_2 [i_9] [i_10])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [1ULL]) > (3031476306U)))))))));
                    }
                } 
            } 
            arr_37 [(unsigned char)6] [i_9] [1LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 5409602705312862834ULL)) || (((/* implicit */_Bool) 2908979354U)))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) -6LL)) ? (173303709U) : (((/* implicit */unsigned int) -1768694042))))), ((-(var_7)))))));
            arr_38 [i_0] = min((((var_14) / (((/* implicit */long long int) arr_22 [i_0 - 1])))), (((/* implicit */long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) ((signed char) 2908979349U)))))));
        }
    }
    for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
    {
        var_31 = ((((/* implicit */_Bool) max(((unsigned short)36764), (((/* implicit */unsigned short) (unsigned char)136))))) ? ((~(arr_41 [i_12] [i_12]))) : (((/* implicit */unsigned long long int) ((arr_40 [i_12]) / (((/* implicit */int) var_8))))));
        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1986673172)) || (((/* implicit */_Bool) 11459133410192105024ULL))));
    }
    /* vectorizable */
    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
        {
            arr_48 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_13])) ? ((-(((/* implicit */int) (signed char)-97)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            var_33 &= ((/* implicit */unsigned int) var_0);
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_43 [i_13 + 1])) ? (((/* implicit */int) arr_43 [i_13 - 1])) : (((/* implicit */int) arr_43 [i_13 + 1]))));
        }
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_13 + 2] [i_13])) && (((/* implicit */_Bool) (signed char)-71))));
    }
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)70)) ? (((/* implicit */int) (short)2046)) : (((/* implicit */int) (signed char)51))))) | ((+(var_7)))));
}
