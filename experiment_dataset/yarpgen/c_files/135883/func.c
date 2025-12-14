/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135883
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_10))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)52320))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)13214)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) arr_1 [i_0] [i_0])))))) : (((/* implicit */int) (unsigned short)52291))));
        var_17 = ((/* implicit */int) max((var_17), (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) (unsigned short)40567)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_8))))), ((~(((/* implicit */int) (unsigned short)4))))))));
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))) - ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        var_19 ^= ((/* implicit */signed char) (-(arr_3 [0ULL])));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] = ((/* implicit */signed char) -1003804964);
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_1] [i_1])))), (((/* implicit */int) ((((/* implicit */int) arr_7 [(_Bool)1])) <= (((/* implicit */int) arr_4 [i_1 + 1] [i_1]))))))))));
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */signed char) ((max((((/* implicit */int) (unsigned short)42650)), (((((/* implicit */_Bool) (short)26457)) ? (arr_6 [i_1] [i_1]) : (((/* implicit */int) arr_2 [i_1])))))) < (((/* implicit */int) (unsigned short)52320))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = (-(((/* implicit */int) var_2)));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
        {
            var_21 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_1))))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((int) var_0)) % (((/* implicit */int) ((((/* implicit */int) (unsigned short)22886)) != (arr_3 [i_6])))))))));
                            var_23 += ((/* implicit */_Bool) (unsigned short)54548);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_9 = 1; i_9 < 20; i_9 += 3) 
        {
            var_24 = ((/* implicit */int) min((var_24), (arr_3 [(unsigned short)8])));
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_10] [i_10] [i_10])) ? (((/* implicit */int) (short)17034)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52320))) : (arr_8 [i_9] [i_9 - 1])));
                arr_29 [i_4] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1030994989)) != (var_7)));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65531)))))));
                            var_27 = ((((/* implicit */int) arr_12 [i_11 + 1])) != (arr_6 [i_9 - 1] [i_9 - 1]));
                        }
                    } 
                } 
            }
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 2) 
            {
                var_28 = (i_9 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_9 - 1] [i_9 + 1] [i_9])) >> (((((/* implicit */int) arr_26 [i_9 - 1] [i_9 + 1] [i_9])) - (21562)))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_9 - 1] [i_9 + 1] [i_9])) >> (((((((/* implicit */int) arr_26 [i_9 - 1] [i_9 + 1] [i_9])) - (21562))) + (18054))))));
                arr_37 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)250))))) ? ((-(((/* implicit */int) var_2)))) : ((-(((/* implicit */int) arr_22 [i_13] [18] [i_13] [i_13])))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                var_29 = ((/* implicit */_Bool) (~(arr_30 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1])));
                arr_40 [i_4] [i_4] [i_4] [i_9] = ((/* implicit */signed char) (unsigned short)1);
            }
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                var_30 = ((((/* implicit */int) (unsigned short)8191)) / (((var_8) - (arr_6 [i_4] [i_4]))));
                var_31 ^= ((/* implicit */unsigned char) var_3);
                var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_41 [i_4 + 2] [(signed char)14] [i_4])) : (((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [(unsigned short)12]))));
            }
            for (unsigned short i_16 = 0; i_16 < 21; i_16 += 4) 
            {
                var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_9 - 1] [i_9 + 1] [i_9])) % (((/* implicit */int) arr_26 [i_9 - 1] [i_9 + 1] [i_9]))));
                var_34 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_16 [i_16])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_16]))) - (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_4 + 1] [i_4 + 2])))));
                /* LoopSeq 1 */
                for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        var_35 = ((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_49 [i_4] [i_4] [i_9] [i_4 + 2] [i_4])) : (((/* implicit */int) arr_49 [i_17] [i_17] [i_9] [i_17] [i_17]))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (((/* implicit */int) arr_50 [i_17] [i_17] [i_17] [i_17] [(signed char)20] [i_17] [i_17])) : (((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_51 [i_4] [i_4] [i_9] [i_4] [i_4])) | (-1)))));
                    }
                    for (short i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        var_37 = (i_9 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) arr_43 [i_9])) - (((/* implicit */int) (short)-12821)))) << (((((((/* implicit */unsigned long long int) arr_46 [19U] [i_9] [i_9])) & (13900423880519112509ULL))) - (13900423880384763406ULL)))))) : (((/* implicit */signed char) ((((((/* implicit */int) arr_43 [i_9])) - (((/* implicit */int) (short)-12821)))) << (((((((((/* implicit */unsigned long long int) arr_46 [19U] [i_9] [i_9])) & (13900423880519112509ULL))) - (13900423880384763406ULL))) - (18446744073295457551ULL))))));
                        arr_55 [i_9] [i_9] = ((/* implicit */int) var_5);
                        arr_56 [i_4] [i_9] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_42 [i_4 + 3] [i_4 + 3] [i_4 - 1]))));
                    }
                    for (int i_20 = 1; i_20 < 20; i_20 += 1) 
                    {
                        var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1325728623)) ? (((/* implicit */unsigned int) var_10)) : (arr_18 [i_4] [i_4 + 2] [i_4 + 2] [i_4 + 2])))) || (((/* implicit */_Bool) arr_23 [i_9 - 1] [i_9] [i_9] [i_9] [i_9 + 1]))));
                        arr_59 [i_4] [i_4] [i_4] [i_9] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (unsigned short)52316);
                    }
                    arr_60 [i_9] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) 1881672851593492657ULL))) ? (((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) (signed char)-1)) : (arr_20 [i_16] [i_16] [i_16] [i_16]))) : (((/* implicit */int) arr_45 [i_4 + 1] [i_4] [i_4] [i_9]))));
                }
            }
        }
    }
}
