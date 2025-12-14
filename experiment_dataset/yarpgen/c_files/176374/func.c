/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176374
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */unsigned int) var_11);
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) >> (((-1589959874794255413LL) + (1589959874794255433LL)))))) ? (((1589959874794255413LL) << (((1589959874794255424LL) - (1589959874794255422LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_2 + 1]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    for (unsigned short i_5 = 4; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) (~(min((((1589959874794255413LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) max((arr_8 [i_1] [i_1] [i_1] [(unsigned char)11] [i_1]), (arr_1 [i_1] [i_4]))))))));
                            arr_15 [i_0] [i_1] [i_1] [i_5 - 4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-6784))) | (3743175445U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [8LL]), (((/* implicit */signed char) arr_4 [i_1] [i_1]))))))))) : (min((((/* implicit */unsigned int) min((-810588214), (((/* implicit */int) (signed char)121))))), (((551791850U) << (((((/* implicit */int) var_1)) - (65203)))))))));
                            var_19 = ((/* implicit */long long int) arr_3 [i_5] [i_4] [i_4]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned char) (~(0U)));
                            arr_22 [i_7] [i_1] [i_7] = ((/* implicit */_Bool) (short)27784);
                            arr_23 [i_0] [i_1] [i_0 - 1] [i_0] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_6 - 1] [i_6])))), (((((/* implicit */int) (unsigned char)101)) & (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1]))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) && (((/* implicit */_Bool) 2631107155U))))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-25)) : (((/* implicit */int) var_10))))));
                            var_22 = ((/* implicit */_Bool) (((+(1589959874794255443LL))) / (min((((/* implicit */long long int) (signed char)127)), (var_0)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_8 = 2; i_8 < 17; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        {
                            arr_28 [i_8 + 1] [i_1] [i_8 + 1] [i_0] [i_1] [i_0] = ((/* implicit */short) ((unsigned short) var_6));
                            arr_29 [i_1] [i_8 - 2] = ((/* implicit */unsigned char) min((((((long long int) (short)26097)) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521))))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)25)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        for (long long int i_11 = 1; i_11 < 21; i_11 += 4) 
        {
            for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_43 [i_10] [4ULL] [4ULL] [i_12] [i_13] [i_14] [i_14] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) arr_34 [(signed char)21] [i_11] [i_11 - 1] [i_11 - 1])))));
                                var_23 = ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)116)), ((unsigned char)26)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_15 = 2; i_15 < 23; i_15 += 4) 
                    {
                        for (unsigned long long int i_16 = 2; i_16 < 20; i_16 += 4) 
                        {
                            {
                                arr_48 [22LL] [i_16] = ((/* implicit */signed char) ((min((var_0), (((/* implicit */long long int) var_2)))) % (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-25))))), (var_9)))));
                                arr_49 [i_12] [i_12] [i_12] [i_12] [(unsigned char)16] [i_12] = (unsigned short)4618;
                                var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_10] [i_10] [i_10])) >> (((((/* implicit */int) var_2)) - (58839)))))) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */int) (signed char)56)) << (((((/* implicit */int) min((((/* implicit */short) (signed char)-25)), ((short)5)))) + (48)))))));
                                var_25 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)5540)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25594))) : (-8361778453029652801LL))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_11] [i_11 + 3] [i_10] [i_11] [i_15 + 1] [i_11 + 3] [(unsigned short)11]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_17 = 1; i_17 < 15; i_17 += 4) 
    {
        for (long long int i_18 = 1; i_18 < 12; i_18 += 2) 
        {
            for (signed char i_19 = 0; i_19 < 16; i_19 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_20 = 0; i_20 < 16; i_20 += 4) 
                    {
                        for (int i_21 = 1; i_21 < 13; i_21 += 3) 
                        {
                            {
                                arr_64 [i_17 - 1] [i_17] [i_17] [i_20] [i_20] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(31U)))), (((((/* implicit */_Bool) 13449464948759804846ULL)) ? (arr_6 [i_18 + 4] [i_21 + 3] [i_17 - 1]) : (arr_6 [i_18 - 1] [i_21 - 1] [i_17 + 1])))));
                                var_26 = ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_18] [i_18 - 1]))))) - (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)46268))))) ? (((arr_4 [8] [i_17]) ? (8361778453029652785LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (min((((/* implicit */long long int) (signed char)-40)), (-602271228415595629LL)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_22 = 3; i_22 < 14; i_22 += 2) 
                    {
                        for (short i_23 = 0; i_23 < 16; i_23 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-1)), (max((arr_6 [i_17 - 1] [i_18 + 1] [i_22 + 2]), (((/* implicit */unsigned long long int) var_9)))))))));
                                var_28 = ((/* implicit */unsigned int) (-((-((~(((/* implicit */int) (unsigned short)46263))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 3) 
                    {
                        for (long long int i_25 = 0; i_25 < 16; i_25 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((signed char) arr_73 [i_17] [i_18] [i_17] [i_25]))) ? (((((/* implicit */_Bool) arr_35 [i_24] [i_24] [i_25] [i_25])) ? (-9223372036854775792LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20044))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_21 [i_19] [i_18 - 1]))))))) / (((/* implicit */long long int) (~(((/* implicit */int) var_15)))))));
                                arr_77 [i_17] [i_17] [(unsigned char)0] [i_17] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)63504)) < (((/* implicit */int) (unsigned short)46250))))), ((+(var_16)))));
                                var_30 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned char)4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_26 = 2; i_26 < 20; i_26 += 4) 
    {
        for (signed char i_27 = 0; i_27 < 21; i_27 += 4) 
        {
            for (unsigned char i_28 = 1; i_28 < 19; i_28 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_29 = 2; i_29 < 20; i_29 += 2) 
                    {
                        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned char) var_7);
                                var_32 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */int) (short)11)) : (((/* implicit */int) (unsigned short)49396)))) >= (((/* implicit */int) var_15))));
                                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)11))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        for (short i_32 = 1; i_32 < 20; i_32 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_39 [i_26 - 1] [i_26 - 2] [i_26 - 2] [i_26 + 1]) : (((/* implicit */unsigned long long int) ((arr_46 [i_26 + 1] [i_28 + 1] [i_28 + 1] [i_32 - 1] [i_32 - 1] [(unsigned short)4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_82 [i_26 - 2]))) : (max((9223372036854775792LL), (((/* implicit */long long int) 3300164032U)))))))));
                                var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)5))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(602271228415595630LL)))))) : (min((9223372036854775792LL), (((/* implicit */long long int) arr_98 [i_26] [i_26] [i_26] [i_26 + 1] [18U] [i_28 - 1] [i_32 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_33 = 3; i_33 < 18; i_33 += 1) 
                    {
                        for (long long int i_34 = 1; i_34 < 17; i_34 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) arr_37 [i_26] [i_26])) >= (((/* implicit */int) var_10))))), ((unsigned short)46275)))) && (((/* implicit */_Bool) ((-602271228415595624LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46268))))))));
                                arr_103 [i_26 - 2] [i_27] [i_28] [(unsigned short)3] [i_33] [i_34] = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) max((arr_84 [i_27] [i_27] [i_26] [i_27]), ((unsigned short)46268))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (602271228415595630LL)))) ? (9223372036854775764LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                                var_37 *= (unsigned char)240;
                                arr_104 [i_26] [(unsigned char)16] = arr_34 [i_26 + 1] [i_26] [i_26] [i_26];
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_35 = 0; i_35 < 21; i_35 += 4) 
                    {
                        for (unsigned int i_36 = 0; i_36 < 21; i_36 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_97 [i_36] [i_35] [i_28 + 1] [i_27] [i_26])) ? (((((/* implicit */_Bool) (((_Bool)1) ? (-3969362396378572333LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30034)))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) arr_38 [(signed char)1] [15] [(signed char)1] [i_35])) : (arr_94 [18LL] [i_27] [i_28] [i_35] [i_36] [i_27]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 556737904444102741LL))))))))));
                                arr_110 [i_26] [i_36] [i_28 + 2] [i_35] [i_35] [(_Bool)1] [i_36] = ((/* implicit */short) min((max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (2725588163074917964LL)))), (1977464937U))), (((/* implicit */unsigned int) ((short) (unsigned short)46268)))));
                                var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_108 [15LL] [(signed char)14] [i_28] [i_27] [(unsigned short)14]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_37 = 1; i_37 < 17; i_37 += 1) 
    {
        for (unsigned long long int i_38 = 4; i_38 < 18; i_38 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_39 = 0; i_39 < 21; i_39 += 2) 
                {
                    for (unsigned short i_40 = 3; i_40 < 19; i_40 += 2) 
                    {
                        for (unsigned long long int i_41 = 0; i_41 < 21; i_41 += 3) 
                        {
                            {
                                arr_122 [i_40] [i_40] [i_40] [i_37] [19U] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)44065)) & (-874036537)))) ? (-1922285685255432673LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-22849))))), (((/* implicit */long long int) (unsigned short)13630))));
                                var_40 = ((/* implicit */long long int) min((var_40), (((((/* implicit */_Bool) (unsigned short)40851)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (556737904444102741LL)))));
                                var_41 = ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-602271228415595629LL));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
                {
                    for (unsigned char i_43 = 0; i_43 < 21; i_43 += 4) 
                    {
                        for (signed char i_44 = 4; i_44 < 20; i_44 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */long long int) (!(((((/* implicit */int) (signed char)-10)) >= (((/* implicit */int) (_Bool)1))))));
                                var_43 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_37] [i_42] [i_43] [i_43])) ? (1222484546U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_125 [i_37])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_43] [i_43] [i_43]))) : (((arr_102 [(short)1] [i_38] [(short)1] [i_37] [i_44] [i_43] [i_37]) >> (((((/* implicit */int) arr_88 [i_44] [i_42] [i_37 + 2] [i_37 + 2])) - (37085)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
