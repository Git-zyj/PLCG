/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159854
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
    var_11 &= ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7)));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)65)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-11932)) ? (((/* implicit */int) (short)25531)) : (((/* implicit */int) var_1)))) | ((~(((/* implicit */int) (short)-11932))))))))))));
                var_13 = ((/* implicit */short) min((min((((3585479223U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))))), (((/* implicit */unsigned int) (short)32742)))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) % (((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (_Bool)0))))))))));
                arr_6 [i_0] [i_0] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)32752)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)84))) % (2597494892788828428ULL))) : (((/* implicit */unsigned long long int) ((var_5) << (((/* implicit */int) arr_4 [i_0]))))))) - (((/* implicit */unsigned long long int) (~(((2975352332U) % (var_3))))))));
                /* LoopSeq 4 */
                for (int i_2 = 4; i_2 < 17; i_2 += 4) 
                {
                    var_14 += ((/* implicit */long long int) (~(((/* implicit */int) min(((!(((/* implicit */_Bool) (unsigned short)55459)))), ((!(((/* implicit */_Bool) -877757626)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_1] [i_1] [14U] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) & (9223372036854775807LL)))) - (((((/* implicit */_Bool) arr_14 [16ULL] [i_3] [i_0 + 2])) ? (arr_16 [i_2] [i_1] [17U]) : (((/* implicit */unsigned long long int) arr_1 [i_0] [i_2])))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) min((arr_7 [i_1]), (((/* implicit */unsigned short) (short)-32741))))) : (((/* implicit */int) ((200327934922672731LL) != (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1])))))))))));
                                arr_18 [i_0] [i_1] [i_1] [(signed char)16] [i_4] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) -456978946)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32740))) : (9226173050171344257ULL))) != (((/* implicit */unsigned long long int) arr_2 [i_1]))));
                                arr_19 [i_4] [i_1] [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */unsigned short) 4294967295U);
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    var_15 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1110783945694632518ULL)))) ? (((/* implicit */int) max(((unsigned short)59325), (((/* implicit */unsigned short) arr_10 [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) (short)32753)) != (1306538284))))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) min(((unsigned short)3), (((/* implicit */unsigned short) (unsigned char)190))))) ? ((-(((/* implicit */int) (short)32728)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))))));
                    var_16 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)43960)) ? (((/* implicit */unsigned long long int) max((1948269586U), (((/* implicit */unsigned int) (unsigned short)5))))) : (21ULL))), (((/* implicit */unsigned long long int) (unsigned short)65535))));
                    arr_24 [i_1] [i_1] = ((/* implicit */short) min((max((3433394180U), (((/* implicit */unsigned int) (unsigned short)65522)))), (((/* implicit */unsigned int) var_7))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 14; i_6 += 4) 
                    {
                        for (int i_7 = 4; i_7 < 17; i_7 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((-4606079444290224933LL) < (((/* implicit */long long int) ((/* implicit */int) (short)32753))))))));
                                var_18 += ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6])))))));
                                arr_30 [i_0] [12] [i_5] [12] |= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_14 [i_0 + 2] [i_6 - 1] [i_7 - 1])), ((~(1110783945694632509ULL))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_7])))));
                                var_19 *= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 21ULL))))), (((((/* implicit */_Bool) min((4606079444290224935LL), (-641916573826480500LL)))) ? (arr_29 [i_0] [i_0] [i_5] [(unsigned char)16] [i_7] [i_5]) : (max((((/* implicit */unsigned int) (short)-13291)), (var_3)))))));
                                arr_31 [i_1] [i_5] [i_5] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [14ULL] [14ULL] [i_6 + 2] [16U] [i_6 + 2])) && (((/* implicit */_Bool) (short)-1772)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)9)), ((~(((/* implicit */int) arr_22 [i_1]))))))) : (4294967295U)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        for (short i_10 = 1; i_10 < 15; i_10 += 4) 
                        {
                            {
                                var_20 &= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)9))))) + (((((/* implicit */int) ((1008313601U) > (4294967295U)))) * (((/* implicit */int) ((((/* implicit */long long int) -1073186850)) == (4606079444290224931LL))))))));
                                arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_36 [i_0] [i_1] [i_1] [i_1] [i_10])), (var_5))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0)))))))) || (((/* implicit */_Bool) -1241062096))));
                                arr_39 [i_8] [i_8] [i_9] &= ((/* implicit */unsigned long long int) var_9);
                                var_21 = ((/* implicit */long long int) (unsigned short)65535);
                                var_22 = ((/* implicit */unsigned int) (+(min((((/* implicit */unsigned long long int) arr_34 [i_1] [i_9] [i_1] [i_0])), (arr_16 [i_0 + 1] [i_0 + 1] [i_10 + 3])))));
                            }
                        } 
                    } 
                    arr_40 [i_0] [i_1] |= ((/* implicit */signed char) (~(((((/* implicit */int) (unsigned char)65)) | (((/* implicit */int) (unsigned short)65535))))));
                    arr_41 [i_0] [i_0] [(short)12] |= ((/* implicit */int) (-(min((((/* implicit */unsigned int) min((((/* implicit */int) var_8)), (21763124)))), (var_5)))));
                    var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) max((3231906929U), (((/* implicit */unsigned int) (unsigned short)0))))) : (arr_26 [i_1] [i_0] [i_0 + 2] [i_0 - 2] [i_0] [i_1]))), (max((-3901208079839127290LL), (((/* implicit */long long int) -1631860322))))));
                }
                for (unsigned char i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)63373)) | (((/* implicit */int) ((((((/* implicit */_Bool) (short)17651)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)255)))) <= (((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_11] [i_11] [(short)8])))))));
                    var_25 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_0] [i_1])) ? (17786639054476946746ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (((/* implicit */unsigned long long int) (unsigned char)30))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)2162)))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)32744)))))))) : (-1073186850)));
                    var_26 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)20)) ? (((/* implicit */unsigned long long int) ((((12292039502518519912ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54595))))) ? (((/* implicit */int) ((6154704571191031703ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) arr_34 [i_0] [(unsigned short)1] [i_0] [i_0 - 2]))))) : (min(((+(9149765305796595390ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-32754)), (1285648771U))))))));
                }
            }
        } 
    } 
}
