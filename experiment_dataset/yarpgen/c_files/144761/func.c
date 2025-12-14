/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144761
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
    var_10 = ((/* implicit */unsigned int) (short)-10173);
    var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_5)))))))), (((((/* implicit */int) var_2)) % (((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    var_12 = ((/* implicit */long long int) arr_0 [i_0] [i_2 + 3]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)248))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_5))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)11)), (arr_13 [(short)5] [i_1] [(short)5] [(short)5] [i_1] [i_2] [i_3])))) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (_Bool)1))))))) : (((/* implicit */int) var_5))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)51741)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) (signed char)9)))) * (((((/* implicit */_Bool) 738521092U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))) ? (((/* implicit */int) (short)-10173)) : (((((/* implicit */int) (signed char)96)) & (((/* implicit */int) (short)-10173))))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */long long int) min((((/* implicit */int) var_8)), ((~(((/* implicit */int) arr_2 [i_0] [i_3 + 1] [i_1 + 1]))))));
                                var_13 = ((/* implicit */short) arr_2 [i_0] [i_1] [i_2 + 2]);
                            }
                        } 
                    } 
                    arr_17 [i_0] [2LL] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_7))));
                }
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            {
                                arr_27 [i_6 - 1] [i_0] [15] [i_0] = ((/* implicit */int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-20)) : (((/* implicit */int) (signed char)63))))), (max((arr_6 [i_7] [i_6 - 1] [i_5] [i_0]), (((/* implicit */long long int) (short)-10159)))))), (((/* implicit */long long int) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_11 [i_1])) ? (arr_22 [i_0] [i_1] [i_5] [i_6 - 1] [i_7]) : (((/* implicit */int) var_8)))))))));
                                arr_28 [i_0] [i_0] [i_5] [i_6] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6)))) ? (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_4))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (var_1))))))));
                                var_14 *= ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [2LL] [i_5] [13] [i_0] [i_0])) ? (var_6) : (var_6)))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        for (short i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) != ((+((~(((/* implicit */int) var_3))))))));
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 13; i_10 += 3) 
                {
                    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_12 = 0; i_12 < 14; i_12 += 4) 
                            {
                                var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_8] [i_10 - 2] [i_9])))))));
                                arr_45 [i_8] &= max((((((/* implicit */_Bool) arr_1 [i_10 + 1])) ? (var_6) : (((/* implicit */long long int) arr_1 [i_10 + 1])))), (((/* implicit */long long int) ((unsigned char) 9096253958064130464LL))));
                            }
                            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_35 [i_8] [i_10 - 2] [i_10] [i_10 - 2])) ? (9096253958064130464LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-16746))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_26 [i_13] [i_11] [i_11] [7U] [i_9] [i_9] [i_8])) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (short)10159)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_21 [i_9] [i_13])) : (((/* implicit */int) var_8)))))))));
                                arr_48 [1LL] [i_9] [(_Bool)0] [i_11] = arr_34 [i_13] [i_13] [i_13];
                                arr_49 [i_8] [i_8] [i_11] [i_8] [i_11] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_4)), ((~(max((5053434933967752225LL), (((/* implicit */long long int) (unsigned short)12615))))))));
                                arr_50 [i_11] [i_11] [i_11] [i_11] [i_11] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) -7529259236753407440LL))), (max((arr_3 [i_11] [i_11]), (((/* implicit */long long int) var_2))))))) ? (((/* implicit */long long int) (~((((_Bool)0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)28187))))))) : (max(((+(var_6))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)52304)))))))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_14 = 1; i_14 < 11; i_14 += 1) 
                            {
                                var_18 = ((/* implicit */long long int) (unsigned short)0);
                                var_19 ^= ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) min(((_Bool)1), (var_4))))))) ? (max((((/* implicit */long long int) max((var_1), (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) var_5)), (arr_8 [i_11] [i_14]))))) : (((/* implicit */long long int) (+(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_5)))))))));
                                var_20 = max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) max((arr_35 [i_14] [(_Bool)1] [(_Bool)1] [(_Bool)1]), (2108517684)))) : (((arr_19 [i_8] [i_8]) ? (-1093012991885112453LL) : (-1048272718829354270LL))))), ((+(min((-4176454836555537416LL), (arr_6 [i_8] [i_9] [i_11] [i_8]))))));
                                arr_54 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] &= ((/* implicit */unsigned short) var_4);
                                var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)65512)) ? (9223372036854775780LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (arr_7 [i_10 - 2] [i_9]) : (((/* implicit */int) arr_42 [i_14]))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_2))));
                    arr_59 [i_8] [i_9] [i_15] [i_15] = ((/* implicit */_Bool) (signed char)26);
                }
                for (unsigned char i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_1)) : (arr_26 [i_8] [i_8] [i_9] [i_8] [i_9] [i_16] [i_16])))));
                    var_24 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (max((arr_41 [i_8]), (((/* implicit */unsigned int) var_0)))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) >> (((/* implicit */int) arr_2 [i_8] [i_9] [i_8]))))) && (((/* implicit */_Bool) arr_3 [i_8] [i_9]))))))));
                    var_25 += (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_8 [i_8] [i_8]))));
                }
            }
        } 
    } 
}
