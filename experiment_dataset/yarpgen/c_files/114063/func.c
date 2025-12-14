/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114063
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
    var_19 = ((/* implicit */_Bool) min((((((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_12)))) * (((/* implicit */int) var_15)))), (var_1)));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) min((arr_1 [i_0] [i_0]), (min((((/* implicit */unsigned long long int) ((long long int) var_6))), (max((arr_3 [i_0 - 2] [i_0] [i_1]), (((/* implicit */unsigned long long int) (short)-32755))))))));
            var_21 = ((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)-127))));
            var_22 = ((/* implicit */unsigned short) ((unsigned long long int) (+(0U))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8190)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_9 [i_3] [i_2] [i_3])), (((int) arr_4 [i_0]))))), (0ULL)));
                var_25 ^= ((/* implicit */unsigned int) var_15);
                arr_11 [i_0] [i_3] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_0 + 1] [i_0 + 1])), ((signed char)-121))))) > (((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */unsigned long long int) 4294967287U)) : (arr_1 [i_0] [i_0 + 1]))));
            }
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
            {
                var_26 = ((((arr_12 [i_0 + 2] [i_0 + 1]) >= (arr_12 [i_0 + 2] [i_0 + 1]))) && ((!(((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_0] [i_0 - 1])))));
                arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((int) (short)-32764)), (((/* implicit */int) (!(((/* implicit */_Bool) (short)6619)))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (var_11))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))) / (arr_1 [i_0] [i_0 - 1])))));
                /* LoopSeq 1 */
                for (int i_5 = 2; i_5 < 20; i_5 += 3) 
                {
                    var_27 *= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) min((((/* implicit */short) (signed char)126)), ((short)19597))))));
                    var_28 = ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_9 [i_0] [i_2] [i_2])) ^ (((/* implicit */int) arr_5 [i_0] [i_5]))))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))));
                    arr_18 [i_0] [i_0] [(signed char)20] [(signed char)6] [(signed char)20] [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [11ULL] [11ULL]);
                }
            }
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned char) var_16);
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                var_29 = ((/* implicit */unsigned int) arr_4 [i_0]);
                var_30 = ((/* implicit */_Bool) (~(0ULL)));
                var_31 |= ((/* implicit */long long int) arr_10 [(short)0] [(_Bool)1] [(short)0]);
                arr_22 [i_0] [i_0] [i_6] [i_0] = (~(((/* implicit */int) (short)-14525)));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_25 [i_0] [i_0] [i_7] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [i_0 - 2])) ? (((/* implicit */long long int) var_10)) : (arr_2 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (2147483647) : (((/* implicit */int) (unsigned char)43))))) : (var_16)));
                arr_26 [i_7] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) ((arr_20 [0ULL]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3741)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    var_32 ^= ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) arr_2 [2ULL] [2ULL])))), (((((/* implicit */unsigned long long int) 2147483630)) > (((((/* implicit */_Bool) -1524489626)) ? (arr_4 [(signed char)20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103)))))))));
                    var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */int) ((unsigned short) (short)397))) / ((~(arr_10 [(short)0] [i_7] [(short)0]))))))));
                    /* LoopSeq 4 */
                    for (int i_9 = 1; i_9 < 20; i_9 += 3) 
                    {
                        arr_31 [(short)9] [i_0] [i_0] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) | (max((((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0]))), (((arr_10 [i_0] [i_2] [i_2]) | (((/* implicit */int) arr_8 [i_0] [i_7] [i_0]))))))));
                        var_34 = ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) != (((/* implicit */unsigned int) ((int) (short)32746)))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_35 -= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                        var_36 = ((/* implicit */unsigned int) var_9);
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0])) ? (((arr_20 [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))) : (0ULL)));
                        var_38 += ((((/* implicit */_Bool) (signed char)62)) ? (3797981329U) : (3797981303U));
                    }
                    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_39 = min((((unsigned long long int) (short)23700)), (arr_20 [i_8]));
                        var_40 ^= ((/* implicit */unsigned short) var_1);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_41 = (~(((/* implicit */int) ((arr_20 [i_0 - 1]) < (((/* implicit */unsigned long long int) var_0))))));
                        var_42 = ((/* implicit */short) min(((+(((496985974U) - (var_10))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14774956163894824020ULL)) ? (((/* implicit */int) arr_34 [(short)22] [i_2] [i_7])) : (((/* implicit */int) (unsigned char)248))))) && (((/* implicit */_Bool) ((4294967289U) + (((/* implicit */unsigned int) arr_27 [i_0] [i_2] [i_7] [i_8] [(short)4] [(short)4]))))))))));
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [7ULL] [i_0] [i_7] [i_8] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 11LL)))) : (((unsigned int) -2147483621))))) ? (((/* implicit */int) arr_5 [11LL] [i_7])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_12]))));
                        arr_41 [i_0] [i_0] [i_7] [i_8] [i_12] = ((/* implicit */unsigned short) max(((((~(((/* implicit */int) (unsigned char)1)))) % (((((/* implicit */_Bool) 2)) ? (((/* implicit */int) (short)18115)) : (arr_37 [i_2] [i_2] [i_2] [i_2]))))), ((+(((/* implicit */int) var_5))))));
                    }
                }
            }
        }
        var_44 = ((/* implicit */unsigned char) arr_33 [i_0] [i_0] [i_0] [i_0]);
        var_45 *= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-18125)) || (((/* implicit */_Bool) 18446744073709551612ULL)))))));
    }
    for (short i_13 = 0; i_13 < 15; i_13 += 4) /* same iter space */
    {
        var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) var_2))));
        arr_44 [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_17))));
    }
    for (short i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_15 = 1; i_15 < 12; i_15 += 4) 
        {
            /* LoopSeq 3 */
            for (signed char i_16 = 1; i_16 < 13; i_16 += 1) /* same iter space */
            {
                var_47 ^= ((((/* implicit */_Bool) var_13)) ? (var_1) : (((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_14])))))) ? (((/* implicit */int) (unsigned char)170)) : (-24))));
                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_16])) ? (((((/* implicit */unsigned long long int) arr_45 [13U])) | (arr_1 [i_16] [i_16]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_14] [(short)19])) ? (arr_37 [i_14] [i_15] [i_15] [21LL]) : (((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_18))))))) : (((((14774956163894824020ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_14]))))))))));
                arr_55 [i_16] = ((/* implicit */long long int) arr_6 [i_16]);
            }
            for (signed char i_17 = 1; i_17 < 13; i_17 += 1) /* same iter space */
            {
                var_49 -= ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)143)))) ? (((/* implicit */unsigned long long int) ((arr_17 [i_14] [i_14] [i_15] [i_14] [i_17]) - (((var_8) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199)))))))) : (min((((((/* implicit */_Bool) 134217727)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) : (17259366832430594843ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) + (((/* implicit */int) var_4))))))));
                var_50 = ((/* implicit */int) 7334921641602654439ULL);
                var_51 = max((10ULL), (12787484874987558807ULL));
                var_52 |= ((/* implicit */short) ((941113386) + (((/* implicit */int) max(((unsigned char)243), (((/* implicit */unsigned char) var_8)))))));
            }
            for (signed char i_18 = 1; i_18 < 13; i_18 += 1) /* same iter space */
            {
                var_53 = ((/* implicit */short) ((((/* implicit */int) min(((signed char)127), (((/* implicit */signed char) (_Bool)1))))) / (arr_10 [i_14] [i_14] [i_14])));
                var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)26868)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_14] [(unsigned char)8] [i_14] [i_18] [(unsigned short)22] [i_18 + 2])))))) ? (((((/* implicit */_Bool) max((254778828U), (((/* implicit */unsigned int) (unsigned short)16320))))) ? (((((/* implicit */_Bool) arr_13 [i_15] [i_15] [i_15] [i_15])) ? (14774956163894824026ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(var_9))))))));
            }
            var_55 += ((/* implicit */short) (_Bool)1);
            var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_43 [i_15 + 2]))))) ? (((((/* implicit */_Bool) arr_43 [i_15 - 1])) ? (((/* implicit */int) arr_43 [i_15 + 1])) : (((/* implicit */int) arr_9 [i_15 + 2] [i_15 + 1] [i_15 + 3])))) : ((~(((/* implicit */int) arr_9 [i_15 - 1] [i_15 - 1] [i_15 - 1]))))));
        }
        for (unsigned int i_19 = 1; i_19 < 12; i_19 += 3) 
        {
            var_57 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_14] [i_14] [i_19] [i_14])) ? (var_9) : (((/* implicit */long long int) 959666822))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 33ULL)) ? (((/* implicit */int) arr_34 [i_14] [i_14] [5ULL])) : (-959666827)))) : (((unsigned int) 67108863U))))) ? (arr_56 [i_14] [i_14] [i_14] [(unsigned char)13]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 11549459986403647656ULL)) ? (((/* implicit */int) (short)24938)) : (((/* implicit */int) (_Bool)1))))) ? (arr_54 [i_19 + 2] [i_19 + 2]) : (((/* implicit */unsigned long long int) ((int) arr_9 [i_14] [i_19] [i_14])))))));
            var_58 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (347664058) : (((/* implicit */int) var_17))))) + ((-(var_9)))))));
            var_59 = ((/* implicit */signed char) (!(min((var_8), (var_5)))));
            arr_62 [i_14] = arr_4 [i_14];
        }
        /* LoopSeq 1 */
        for (unsigned short i_20 = 2; i_20 < 13; i_20 += 4) 
        {
            var_60 |= ((/* implicit */int) var_5);
            var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) -959666814))));
            var_62 = ((unsigned int) ((arr_21 [i_20 + 2] [12LL] [i_14] [19LL]) / (arr_21 [i_20 - 2] [i_20 + 2] [i_20 + 1] [i_20 + 1])));
            arr_67 [i_14] [i_14] [i_14] = ((/* implicit */short) min((arr_28 [i_20 - 2] [i_20 - 2]), (arr_10 [i_14] [i_20] [20])));
        }
        var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) var_10))));
    }
}
