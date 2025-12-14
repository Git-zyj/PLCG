/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165359
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1571363313U)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (short)28594))))) ? (((/* implicit */int) (short)-28594)) : (1525447298)));
                arr_10 [i_1] [(unsigned char)2] [(unsigned char)12] &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 666379018662658226LL))))));
            }
            for (unsigned char i_3 = 1; i_3 < 10; i_3 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 3; i_5 < 11; i_5 += 2) 
                    {
                        arr_18 [4ULL] [i_1] [i_1] [i_0] [4ULL] [i_1] [(unsigned char)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-28577)) ? (((/* implicit */int) (short)-28594)) : (((/* implicit */int) arr_17 [i_5] [i_5] [i_5] [i_5] [i_5 + 1]))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_18)) >> (((379789012) - (379788981)))));
                        var_22 *= ((/* implicit */unsigned long long int) -379789019);
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3 - 1] [i_3])))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_24 -= ((/* implicit */unsigned short) var_2);
                        var_25 = ((/* implicit */unsigned int) ((arr_0 [i_3 - 1]) != (((/* implicit */int) arr_17 [i_4] [i_4] [(_Bool)1] [(unsigned char)8] [i_4]))));
                        arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3562550766867569320ULL)) ? (((/* implicit */int) (short)688)) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6 + 1]))) : (var_13)));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1225917795U)) ? (((/* implicit */unsigned int) var_7)) : (((unsigned int) 4190208U))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_3 - 1])) + (((/* implicit */int) arr_2 [i_3 + 2]))));
                    }
                    for (unsigned char i_8 = 4; i_8 < 13; i_8 += 1) 
                    {
                        arr_30 [i_0] [11U] [i_0] [i_4] = ((/* implicit */long long int) ((arr_23 [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_8 - 4]) && (arr_23 [i_3 + 1] [i_3] [8ULL] [i_3 + 1] [i_8 - 2])));
                        arr_31 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) != (var_13)))) * (((/* implicit */int) arr_28 [i_1] [i_1] [(unsigned char)6] [i_4] [i_3 + 2] [i_8 - 2] [i_0]))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_24 [i_0] [i_3 + 2] [i_3 + 4] [i_4] [i_8 + 1])))))));
                        arr_32 [i_0] [i_0] [i_3] [i_4] [12ULL] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_8 + 1] [i_3 + 4] [(unsigned short)8]))));
                    }
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) 3069049492U))));
                    arr_33 [i_0] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_21 [i_0] [i_3 + 1] [i_3] [i_4] [i_3] [i_3 + 1])) ? (arr_21 [(unsigned short)5] [i_3 + 2] [i_3 + 2] [(unsigned short)5] [i_3] [i_3]) : (arr_21 [i_1] [i_3 + 1] [i_3] [i_4] [13U] [i_4])));
                }
                for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                {
                    arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((var_14) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_19)) : (var_14)))));
                    arr_37 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))));
                }
            }
            for (unsigned short i_10 = 2; i_10 < 12; i_10 += 1) 
            {
                arr_41 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_1] [i_10 - 2])) ? (((/* implicit */int) arr_39 [i_0] [i_0])) : (var_1)));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    for (short i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (+(1442477783))))));
                            arr_47 [i_0] = ((/* implicit */int) 3069049497U);
                        }
                    } 
                } 
            }
            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)28581))) + (0U)));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 3; i_13 < 13; i_13 += 2) 
            {
                arr_52 [i_0] = (+(((((/* implicit */unsigned int) 960)) + (2074092273U))));
                arr_53 [i_0] [i_1] [i_1] = ((/* implicit */signed char) arr_38 [i_0] [9U] [i_1] [9U]);
                var_32 = ((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_13])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])) : (2019718292))) * (((/* implicit */int) (_Bool)1)));
                var_33 = ((/* implicit */unsigned int) min((var_33), ((+(var_14)))));
            }
            arr_54 [i_0] = ((/* implicit */short) var_8);
        }
        /* LoopSeq 2 */
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            var_34 &= ((/* implicit */short) var_7);
            /* LoopSeq 3 */
            for (int i_15 = 2; i_15 < 10; i_15 += 1) 
            {
                arr_59 [i_14] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_14] [i_15])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) * (arr_44 [i_0] [i_15 - 2] [9ULL] [i_15] [i_15 - 2])));
                arr_60 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 222469114U)) ? (((/* implicit */unsigned int) -379789013)) : (0U)));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_17 = 0; i_17 < 14; i_17 += 4) 
                {
                    arr_65 [i_17] [i_14] [i_0] [(unsigned short)8] [i_0] |= ((((((/* implicit */int) arr_42 [i_14] [i_14] [i_14] [i_14])) >> (((/* implicit */int) arr_63 [i_0] [i_14] [i_16] [i_0])))) ^ (((/* implicit */int) arr_4 [i_0] [i_14] [i_17])));
                    arr_66 [i_0] [i_14] [(unsigned char)10] [i_0] [3ULL] = ((/* implicit */_Bool) ((arr_26 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) % (((/* implicit */unsigned int) arr_35 [i_0] [i_0] [i_0] [i_0]))));
                }
                arr_67 [i_0] [i_14] [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_20 [i_16])));
                arr_68 [i_0] [i_16] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 379789012))));
            }
            for (short i_18 = 0; i_18 < 14; i_18 += 1) 
            {
                arr_71 [i_14] [i_14] [i_0] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [(signed char)13] [i_14] [i_14] [i_14] [0U])) ? (((/* implicit */int) arr_24 [i_0] [(unsigned char)1] [i_14] [i_18] [i_18])) : (((/* implicit */int) var_17))));
                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_0] [i_14] [i_18] [i_18]))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_19 = 0; i_19 < 14; i_19 += 3) 
            {
                var_36 = ((/* implicit */unsigned char) ((((-505949447) + (2147483647))) << (((((/* implicit */int) (short)25020)) - (25020)))));
                arr_74 [i_0] [i_14] [i_0] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_0] [i_14] [i_19] [i_19] [i_0] [i_0] [i_14])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_28 [i_0] [i_14] [i_19] [i_14] [i_14] [i_19] [i_14]))));
                arr_75 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
            }
            arr_76 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_0]) != (arr_0 [i_0])));
        }
        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
        {
            var_37 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)255)) << (((var_13) - (8519810279594094613ULL))))) | (((/* implicit */int) arr_15 [i_20] [i_20]))));
            arr_80 [i_0] [i_0] = ((/* implicit */unsigned short) 2986964640U);
            arr_81 [i_0] [(short)2] |= ((/* implicit */unsigned long long int) ((((var_13) > (((/* implicit */unsigned long long int) arr_49 [i_0] [i_0] [i_20])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_42 [i_0] [i_20] [i_0] [(unsigned short)0])) - (((/* implicit */int) var_10)))))));
        }
    }
    var_38 = ((/* implicit */signed char) min(((+(((/* implicit */int) (unsigned char)37)))), (((/* implicit */int) var_18))));
    var_39 *= ((/* implicit */int) ((((/* implicit */_Bool) 960)) || (((/* implicit */_Bool) 379789018))));
}
