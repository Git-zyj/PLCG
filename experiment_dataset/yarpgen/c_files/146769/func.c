/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146769
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 9223372036854775807LL))));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_5))));
                arr_6 [i_1] [(short)8] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned long long int) var_14))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8397)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (unsigned short)10829))))) : (arr_2 [i_0])))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    arr_11 [i_1] [i_2] [i_1 + 1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)54706)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10829)) ? (arr_4 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28411)))))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10829)))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(signed char)8] [i_2])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((int) 22502085)) : (var_3))))));
                    arr_12 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_7 [i_0] [i_1 - 1] [i_2] [i_3 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_14))))) ? (((/* implicit */int) (unsigned short)10829)) : (((/* implicit */int) var_7))))) : (arr_8 [9ULL])));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_15))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 3; i_4 < 13; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)10829)) ? (1178177851267275338ULL) : (((/* implicit */unsigned long long int) 2147483647)))))));
                        arr_15 [5] [5] [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)54720)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)10829))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)54706)) : (((/* implicit */int) (short)0))))) ? (var_8) : (((((/* implicit */_Bool) var_11)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_4 [i_0] [i_2] [i_1]) : (3U)))))) ? (((unsigned long long int) max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_1] [i_0] [i_3] [i_0])), (arr_0 [i_0] [i_4])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10U)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-1))))))))));
                        arr_16 [i_0] [i_4] [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (arr_9 [i_0] [i_1] [(signed char)2] [i_3])))), (((var_6) % (((/* implicit */unsigned long long int) arr_9 [14] [i_1] [i_0] [i_3]))))))) ? (((((/* implicit */_Bool) (short)0)) ? (261632LL) : (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) max((2312802333U), (((/* implicit */unsigned int) (signed char)127)))))));
                    }
                }
                var_24 ^= ((/* implicit */unsigned long long int) (-(1720048601697810157LL)));
            }
            for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                arr_19 [i_1] [(short)8] [(short)8] [i_0] &= ((/* implicit */unsigned int) (signed char)-17);
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    var_25 -= (+(((int) arr_18 [i_1 - 1] [i_1 - 1])));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_6] [i_7] = ((/* implicit */signed char) arr_1 [i_1 - 1] [i_1 + 1]);
                        var_26 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_13))) >> ((((-(1617219980U))) - (2677747312U)))));
                        var_27 ^= ((/* implicit */int) arr_0 [i_0] [14]);
                    }
                    for (signed char i_8 = 1; i_8 < 14; i_8 += 4) /* same iter space */
                    {
                        arr_29 [2U] [2U] [i_5] [i_6] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-102)) != (((int) ((((/* implicit */_Bool) arr_26 [i_0] [i_1 + 1] [i_5] [i_6] [i_6] [i_8 + 2])) ? (((/* implicit */unsigned long long int) -327524103)) : (0ULL))))));
                        var_28 += ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)-10227)) : (var_9)))) >= (var_6))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 327524102)) ? (((/* implicit */int) arr_24 [i_0] [i_1 + 1] [5LL] [(signed char)6] [i_0] [i_8])) : (((/* implicit */int) (unsigned short)46945))))))) : (var_6)));
                        var_29 -= ((/* implicit */long long int) 3U);
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) var_1))));
                    }
                    for (signed char i_9 = 1; i_9 < 14; i_9 += 4) /* same iter space */
                    {
                        var_31 &= ((/* implicit */unsigned long long int) (short)0);
                        var_32 *= ((/* implicit */unsigned char) ((long long int) var_14));
                    }
                    var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((+(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (327524103))))) : (((((/* implicit */_Bool) arr_4 [i_1 - 1] [(short)6] [i_6])) ? (((/* implicit */int) arr_18 [i_6] [(unsigned short)4])) : (max((((/* implicit */int) (short)-17166)), (-327524104))))))))));
                    var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-99)) ? (max((((/* implicit */long long int) max((694066602), (327524082)))), ((+(-5368580280503827368LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (signed char)-79)) : (((327524103) / (-694066602)))))))))));
                }
                /* vectorizable */
                for (short i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) (short)-9)) : (-694066597))))));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_0] [i_1 - 1] [i_1] [i_5] [i_10] [i_10])) - (-327524104))))));
                    arr_36 [i_0] [i_0] [(short)2] &= ((/* implicit */signed char) (+(((var_9) + (((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_1] [0U] [i_5] [i_10]))))));
                }
                for (short i_11 = 0; i_11 < 17; i_11 += 3) /* same iter space */
                {
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((((/* implicit */_Bool) (+(5198049230755367398ULL)))) ? (((/* implicit */unsigned int) (+(arr_14 [i_0] [i_0] [i_1 - 1] [i_11] [i_5])))) : (((((/* implicit */_Bool) 3828565189762623824ULL)) ? (var_0) : (((/* implicit */unsigned int) 694066597)))))))));
                    var_38 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) var_5)))))) ? (((((/* implicit */_Bool) (-(1550263916067987664LL)))) ? (arr_7 [i_1] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-90)) - (((/* implicit */int) arr_33 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2044)) ? (-327524104) : (((/* implicit */int) var_14)))))));
                    var_39 = ((/* implicit */int) arr_7 [i_0] [i_0] [i_5] [i_11]);
                    var_40 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) max(((+(((/* implicit */int) (signed char)101)))), (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (unsigned short)51376))))))), (((((/* implicit */_Bool) max((((/* implicit */int) arr_24 [i_0] [i_1] [i_1] [i_1] [i_5] [i_11])), (var_16)))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned char)0)))))))));
                }
            }
            for (int i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_13 = 1; i_13 < 15; i_13 += 4) 
                {
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [(unsigned short)11] [i_13] [i_1] [i_1 - 1] [i_13 - 1])) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)34801)) : (((/* implicit */int) (short)-16655)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-65)))))));
                    arr_44 [i_0] [(signed char)13] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) var_4);
                    var_42 &= ((/* implicit */unsigned int) (signed char)10);
                }
                /* LoopSeq 3 */
                for (unsigned short i_14 = 1; i_14 < 14; i_14 += 3) 
                {
                    var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) (short)17166)) : (((/* implicit */int) (short)-17135))))) ? (5198049230755367410ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)17135)))))))))));
                    var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)10)), (1969511148U)))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) arr_13 [i_0] [i_12] [8LL])))))));
                }
                for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) /* same iter space */
                {
                    var_45 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) ((5198049230755367394ULL) > (((/* implicit */unsigned long long int) arr_28 [i_12] [i_12] [i_12] [i_12] [i_12]))))), (arr_17 [i_15] [i_12] [i_1 - 1] [i_0])))) ? (arr_26 [0] [i_12] [i_12] [i_0] [i_0] [i_0]) : (((unsigned int) ((((/* implicit */_Bool) 2135377347)) ? (((/* implicit */int) arr_27 [i_0] [i_1])) : (((/* implicit */int) arr_17 [i_0] [(signed char)11] [i_12] [13ULL])))))));
                    var_46 ^= ((/* implicit */unsigned int) ((1150141830) >= (((/* implicit */int) (unsigned short)62536))));
                }
                for (unsigned int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
                {
                    var_47 -= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1639312936U)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) max((((/* implicit */short) var_14)), ((short)17135))))))), (arr_5 [i_12] [i_1])));
                    var_48 = ((/* implicit */unsigned int) max((var_48), (max((((/* implicit */unsigned int) ((var_3) << (((1639312922U) - (1639312921U)))))), (2655654364U)))));
                    arr_52 [16U] [(unsigned short)4] [16U] [(unsigned short)4] [i_0] |= arr_43 [i_0] [i_1] [i_12] [15ULL];
                    var_49 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_1 + 1] [i_1 - 1]))))), ((((-9223372036854775807LL - 1LL)) - (((/* implicit */long long int) ((/* implicit */int) (short)-4832)))))));
                }
            }
            var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) arr_47 [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_0]))));
        }
        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 1) 
        {
            var_51 -= ((/* implicit */unsigned int) (+((-(((/* implicit */int) (signed char)-10))))));
            var_52 += ((/* implicit */unsigned int) ((unsigned long long int) arr_40 [(signed char)8] [(signed char)8]));
            var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) (signed char)-10))));
            var_54 |= ((/* implicit */short) (signed char)-73);
            var_55 = ((/* implicit */short) min((var_55), (((/* implicit */short) ((((/* implicit */int) arr_20 [i_17] [i_17] [i_17] [i_17] [i_17])) == (((/* implicit */int) ((signed char) arr_32 [i_0] [i_0] [i_0] [(signed char)4] [i_17] [i_17] [i_17]))))))));
        }
    }
    for (int i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
    {
        var_56 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-4306)) ? (((/* implicit */int) ((319533133) == (((/* implicit */int) (signed char)10))))) : (((/* implicit */int) (short)-4832))));
        var_57 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-17135)) : (((/* implicit */int) (signed char)-10)))) - (((((/* implicit */_Bool) var_9)) ? (327524119) : (var_16)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_18])))));
    }
    var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_18)) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)4831))))) : (var_5))))))));
    var_59 += var_3;
}
