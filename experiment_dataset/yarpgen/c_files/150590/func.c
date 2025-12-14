/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150590
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 += ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_2 [i_0 - 1]))) >> (((((/* implicit */int) (short)29194)) - (29192)))));
                var_13 *= ((unsigned char) ((((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 - 1])) - (((/* implicit */int) var_5))));
                var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-121))))), (((unsigned int) (unsigned short)37782))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 3; i_2 < 8; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        arr_9 [i_2] [i_3] [i_0] = max((arr_6 [i_3 + 1] [i_3] [i_3] [i_3 - 1] [i_3 + 1]), (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_2 [i_3 - 1])) - (((/* implicit */int) (unsigned short)27753)))), ((~(((/* implicit */int) (unsigned short)46834))))))));
                        arr_10 [i_0] [i_0] [i_3] [i_1] = ((/* implicit */unsigned char) max(((signed char)-104), (((/* implicit */signed char) (!(((/* implicit */_Bool) -1563321472)))))));
                    }
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (unsigned short)37783))));
                    var_16 = ((unsigned char) ((((/* implicit */_Bool) (short)23209)) ? (2102773647U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0 + 1] [i_1] [i_0 - 1])))));
                }
                /* vectorizable */
                for (short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    var_17 += ((/* implicit */unsigned long long int) ((int) ((short) 2147483647)));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 1])))))));
                }
                var_19 = ((/* implicit */short) ((unsigned char) min((min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (3216201380473982897ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28679)) | (((/* implicit */int) var_1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_20), (min((((/* implicit */unsigned short) var_9)), (var_6)))));
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
        {
            {
                var_21 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) min(((unsigned char)75), ((unsigned char)180)))))));
                var_22 -= ((/* implicit */int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_6] [i_5] [i_5])), (9ULL)))) ? ((-(-475341628))) : ((+(((/* implicit */int) (unsigned short)34289)))))) == (922483007)));
                arr_19 [i_5] = ((/* implicit */signed char) ((long long int) (~((~(-2147483647))))));
                arr_20 [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)65519)) >> ((((((-2147483647 - 1)) - (-2147483628))) + (24))))), ((-(((/* implicit */int) (signed char)-63))))))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [(unsigned short)5])))), (((((/* implicit */int) (signed char)-62)) != (((/* implicit */int) var_2))))))) : (var_3)));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] [i_7] = ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_7] [i_7] [i_7]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)63699)) : (((/* implicit */int) arr_23 [i_7]))))) : (((((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7]))) : (arr_14 [i_7]))));
        arr_25 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)103))))) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_13 [i_7])));
        arr_26 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) (unsigned short)178)) : (922483018)));
    }
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */_Bool) arr_15 [i_8]);
        var_24 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)-32737)) : (((/* implicit */int) (signed char)62))))) / (var_4)));
        arr_30 [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) (unsigned char)152)))));
    }
    for (short i_9 = 4; i_9 < 11; i_9 += 2) 
    {
        arr_35 [(signed char)2] = ((/* implicit */int) (unsigned char)85);
        arr_36 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */int) (unsigned short)17016)) : (((/* implicit */int) var_6))))) <= ((-(arr_28 [(unsigned short)4])))))) : (((int) var_8))));
        /* LoopSeq 2 */
        for (short i_10 = 3; i_10 < 10; i_10 += 3) 
        {
            arr_39 [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) min(((~(arr_14 [i_9 - 1]))), ((~(arr_14 [i_9 - 4])))));
            var_25 *= ((/* implicit */signed char) ((((/* implicit */int) (short)-26795)) | (((/* implicit */int) (short)-7918))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (((-2147483647 - 1)) % (-922483004)))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43050))) : (9223372036854775807LL)))))) : (((((((/* implicit */int) (signed char)-127)) == (((/* implicit */int) arr_21 [i_10 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29916))) : (max((6191663891653787400ULL), (((/* implicit */unsigned long long int) (signed char)100))))))));
            /* LoopSeq 1 */
            for (unsigned char i_11 = 1; i_11 < 10; i_11 += 1) 
            {
                arr_43 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (4444586476031037452LL) : (((/* implicit */long long int) ((((((/* implicit */_Bool) -1382740392)) ? (-922483008) : (-882343171))) | (((/* implicit */int) min(((unsigned short)45112), (((/* implicit */unsigned short) arr_16 [i_10 + 1]))))))))));
                arr_44 [i_9] [i_9] [i_11] = ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_9 - 4] [9] [i_9])) || (((/* implicit */_Bool) arr_23 [i_9 - 2]))))) != (((/* implicit */int) ((unsigned char) arr_31 [i_11])))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)186))))) ? (((/* implicit */int) arr_34 [i_10 - 3])) : ((+(((/* implicit */int) (short)-13067)))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 2; i_12 < 10; i_12 += 2) 
                {
                    for (unsigned short i_13 = 2; i_13 < 11; i_13 += 2) 
                    {
                        {
                            arr_49 [i_11] [i_12] [i_11 + 1] [i_10] [12] [i_11] = ((/* implicit */int) ((((((((/* implicit */_Bool) 922483008)) ? (arr_28 [i_11]) : (arr_29 [i_9] [i_10 - 3]))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_11 + 2])) ? (((/* implicit */int) (short)-3346)) : (((/* implicit */int) var_6))))))) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-54)))));
                            var_27 += ((/* implicit */short) (-(((((/* implicit */_Bool) arr_45 [(unsigned short)12] [0] [(unsigned short)12] [i_10 - 1] [i_13 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_21 [(signed char)12])))) : (((((/* implicit */unsigned int) arr_17 [i_9] [i_12] [i_13])) / (8U)))))));
                            arr_50 [i_9] [i_10 + 2] [i_11] [i_9] |= ((/* implicit */unsigned short) (~(((/* implicit */int) min((((short) (short)12596)), (arr_38 [i_9 + 2]))))));
                        }
                    } 
                } 
            }
            arr_51 [i_9 + 1] [i_10 + 2] &= ((/* implicit */int) min((((/* implicit */short) ((((((/* implicit */_Bool) arr_48 [i_9] [i_10] [i_10] [i_10])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12590))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)25109), (((/* implicit */short) (unsigned char)183))))))))), (((short) (_Bool)1))));
        }
        for (unsigned int i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) max((((/* implicit */short) arr_22 [i_9] [i_14])), (((short) 4294967282U)))))));
            var_29 = ((/* implicit */short) var_0);
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (_Bool)1))));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5455))))) ? (((/* implicit */unsigned long long int) ((((487767950) | (((/* implicit */int) (_Bool)1)))) | (var_3)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)12589))) & (3433003724583760594ULL))))))));
        }
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_33 [i_9])))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)73))));
    }
    for (unsigned short i_15 = 4; i_15 < 11; i_15 += 3) 
    {
        arr_56 [i_15] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_40 [i_15] [i_15 - 4] [i_15 - 3])) ? (arr_40 [i_15] [i_15 - 4] [i_15 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_40 [i_15] [i_15] [i_15]), (((/* implicit */unsigned int) arr_47 [i_15] [i_15]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_15])) || (((/* implicit */_Bool) arr_47 [i_15] [i_15 - 4]))))) : (((/* implicit */int) max(((short)-11263), ((short)-5455)))))))));
        arr_57 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)32542), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_53 [i_15 + 2] [12])))))))) && ((!((!(((/* implicit */_Bool) (unsigned short)21135))))))));
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
        {
            arr_61 [i_16] = ((/* implicit */unsigned char) arr_54 [i_15]);
            var_33 *= (unsigned char)246;
            arr_62 [i_15] [i_15] [i_16] = ((/* implicit */unsigned int) var_10);
            var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_16] [i_15] [i_15])) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_22 [i_15] [i_16])), (var_0))))) | (((((/* implicit */_Bool) arr_41 [i_15] [i_15] [i_16] [i_15 + 1])) ? (3259313253U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
            var_35 -= ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) 14U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967281U))), (((/* implicit */unsigned int) arr_18 [i_15 - 4] [i_15 - 4] [i_15 - 4]))))));
        }
        var_36 ^= ((/* implicit */signed char) ((unsigned short) arr_45 [i_15] [i_15 - 4] [i_15 + 2] [i_15 + 1] [i_15 - 4]));
        var_37 = ((/* implicit */unsigned long long int) max((-2145714347), (((/* implicit */int) ((unsigned char) (~(258692971438748108ULL)))))));
    }
}
