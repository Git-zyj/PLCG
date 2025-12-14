/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124887
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((-1771158446) % (((/* implicit */int) var_1))))))) ? (var_4) : (((/* implicit */unsigned long long int) min((var_0), (var_9))))));
    var_12 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)81))))) ? (min((var_5), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 808885309)) : (-1838196869872406220LL))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3341))) == (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) (short)12191))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2591469944U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) : (var_4)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */signed char) arr_1 [i_2]);
                        /* LoopSeq 2 */
                        for (long long int i_4 = 4; i_4 < 22; i_4 += 2) /* same iter space */
                        {
                            arr_17 [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_4] [i_4 - 1] [i_4] [i_3] [i_0 - 1] [i_0] [i_0])) ? (arr_15 [i_4] [i_4 + 1] [i_4] [i_3] [i_0 + 1] [i_0] [i_0]) : (9223372036854775807LL)))) ? (((((/* implicit */_Bool) 171924815)) ? (-1460318329) : (924996926))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((/* implicit */int) arr_0 [i_1] [i_4]))))) ? (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_4])))) : (((/* implicit */int) (signed char)-116))))));
                            arr_18 [i_2] [i_1] [i_2] [i_3] = ((/* implicit */short) arr_16 [i_0 - 2] [i_3] [i_4 - 4] [i_4] [i_4]);
                            arr_19 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((int) arr_12 [i_0 + 1] [i_4 - 2] [i_2] [i_3] [i_4]))));
                            arr_20 [i_2] [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) (-(((var_4) + (((/* implicit */unsigned long long int) max((var_10), (arr_4 [i_0] [i_1] [i_2] [i_3]))))))));
                            arr_21 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((var_5) <= (((/* implicit */unsigned long long int) arr_5 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_4 - 2] [i_3])) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9339))) : (var_8)))) ? (arr_13 [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35968)))))));
                        }
                        for (long long int i_5 = 4; i_5 < 22; i_5 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_7 [i_2]))))));
                            var_15 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(4294967295U)))), (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))) : (((/* implicit */unsigned long long int) min((3116948049U), (((/* implicit */unsigned int) -352216394)))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) /* same iter space */
                        {
                            arr_28 [i_2] [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)12288)) : (var_3)))))) ? (((((/* implicit */int) arr_11 [i_0 - 2] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 2])) - ((~(var_0))))) : (((/* implicit */int) arr_6 [i_6 + 1] [i_6 - 1] [i_2] [i_6 + 1])));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_1]) ? ((-(979459440U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))) < (min((var_5), (((/* implicit */unsigned long long int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 1393239206)))))))));
                            var_17 += ((/* implicit */unsigned int) var_6);
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 3) /* same iter space */
                        {
                            var_18 += ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((((/* implicit */_Bool) 5017106978884199254ULL)) ? (var_9) : (((/* implicit */int) arr_2 [i_7 + 2] [i_0 - 1])))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4116322307U)) ? (max((((/* implicit */long long int) 2725833746U)), (-4475147130740321502LL))) : (((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_3] [i_2] [i_1] [i_0]))) & (-4652419965862362255LL)))))) < (((((/* implicit */_Bool) (unsigned short)40552)) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (4441087330218400957LL) : (((/* implicit */long long int) 4231391500U))))) : (max((((/* implicit */unsigned long long int) (short)-22362)), (arr_25 [i_0]))))))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) 12762604838263740039ULL)) ? (799441318U) : (994328740U)));
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) var_0);
                            arr_36 [i_3] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_32 [i_2] [i_0 - 2] [i_2]), (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2])))))))) ? (((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) ((signed char) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (82))))) : (min((((/* implicit */int) arr_7 [i_2])), (var_3)))));
                        }
                        for (int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((!(((/* implicit */_Bool) min((17592185520128ULL), (((/* implicit */unsigned long long int) -809704608705205955LL))))))) ? (var_9) : ((~(((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])))))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_34 [i_1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3272393854046937791LL)) ? (((((/* implicit */_Bool) var_4)) ? (17592186044415LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_0] [i_1] [i_1] [i_2] [i_3] [i_9] [i_9])))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(var_7)))) || (((/* implicit */_Bool) ((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11377))))))))) : ((-((~(((/* implicit */int) (unsigned short)29279)))))));
                            arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (short)-25962)) ? (var_4) : (var_8))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_1))))))) / (((/* implicit */unsigned long long int) var_3))));
                        }
                        arr_40 [i_2] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)2529);
                    }
                    for (unsigned int i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        arr_43 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_6);
                        var_24 = ((/* implicit */unsigned short) min((((long long int) (+(980681219)))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_27 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1])) : (var_3))))))));
                        arr_44 [i_2] [i_1] [i_2] [i_10] [i_0] [i_1] = (~(max((((/* implicit */unsigned long long int) ((signed char) (unsigned char)73))), (2585627453231270770ULL))));
                    }
                    for (int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        arr_48 [i_2] [i_2] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)90)), (((var_9) + (arr_37 [i_0] [i_1] [i_2] [i_11] [i_1] [i_2])))))) ? ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_33 [i_1] [i_1] [i_2])) : (arr_41 [i_0] [i_1] [i_2] [i_11]))))) : ((+(((/* implicit */int) arr_2 [i_0] [i_0 - 2]))))));
                        arr_49 [i_0] [i_1] [i_2] [i_2] = (i_2 % 2 == zero) ? (((4745216440932150201ULL) >> (((((var_0) >> (((((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0 - 1] [i_0 - 1])) - (31))))) - (129334506))))) : (((4745216440932150201ULL) >> (((((((var_0) >> (((((((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_0 - 1] [i_0 - 1])) - (31))) + (100))))) - (129334506))) + (113167707)))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_16 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 2])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_0 - 2] [i_0 - 1] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)238)) ? (arr_16 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1]) : (((/* implicit */unsigned int) var_0))))));
                    }
                    for (long long int i_12 = 1; i_12 < 24; i_12 += 1) 
                    {
                        arr_52 [i_0] [i_2] [i_2] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((arr_5 [i_12] [i_2] [i_1] [i_0]) | (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-28772))))))))));
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_41 [i_12] [i_12 - 1] [i_0] [i_0 - 1]), (((/* implicit */int) var_1))))) ? ((+(8444968429416616528ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_41 [i_12] [i_12 - 1] [i_0] [i_0 + 1])) ? (var_0) : (((/* implicit */int) (signed char)-30)))))));
                    }
                    arr_53 [i_2] = ((/* implicit */int) 6444578473275612504LL);
                }
            } 
        } 
        arr_54 [i_0] [i_0] = ((/* implicit */unsigned char) (-((~(arr_47 [i_0 - 1] [i_0] [i_0] [i_0] [i_0])))));
        arr_55 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_4)))) && (((/* implicit */_Bool) var_5))))) : ((+(((int) 460445240U))))));
        arr_56 [i_0] = ((/* implicit */unsigned char) var_10);
    }
    for (short i_13 = 0; i_13 < 20; i_13 += 2) 
    {
        arr_59 [i_13] [i_13] = ((/* implicit */int) arr_9 [i_13] [i_13] [i_13]);
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
        {
            for (short i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                {
                    var_27 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_60 [i_13])) ? (10040592652150413281ULL) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (127LL) : (7381522924710571080LL)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32652)))))));
                    /* LoopSeq 2 */
                    for (short i_16 = 1; i_16 < 18; i_16 += 1) 
                    {
                        var_28 = 9223372036854775807LL;
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (arr_58 [i_16 - 1] [i_16 + 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4042)) ? (((/* implicit */int) (unsigned short)55225)) : (((/* implicit */int) (unsigned char)65))))) ? (2147483647) : (2147483647)))) : (var_5)));
                    }
                    for (int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        arr_70 [i_13] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_60 [i_15])) : (var_10)))), (var_8)))));
                        arr_71 [i_17] [i_15] [i_15] [i_14] [i_13] [i_13] = ((/* implicit */int) max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!((_Bool)1)))), (var_10)))), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_13] [i_14] [i_15])))))));
                        var_30 = var_8;
                    }
                    arr_72 [i_13] [i_13] [i_13] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) 13879917894926437025ULL)))));
                }
            } 
        } 
        arr_73 [i_13] = ((((/* implicit */_Bool) max((var_4), (arr_68 [i_13] [i_13] [i_13])))) ? (((arr_68 [i_13] [i_13] [i_13]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
        arr_74 [i_13] [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-36)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */_Bool) 13606014754762526733ULL)) || (((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */unsigned int) -96487133)) : (var_7)));
    }
}
