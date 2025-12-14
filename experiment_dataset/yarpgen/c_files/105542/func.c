/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105542
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned char)180), (((/* implicit */unsigned char) var_5))))) | (((arr_12 [i_0] [i_0] [i_2] [i_0] [i_0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_2] [i_3] [i_1]))))));
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_8 [i_4] [i_3])) ? (var_12) : (((/* implicit */int) arr_6 [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) var_3);
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)11915)) : (((/* implicit */int) arr_7 [i_6] [i_2] [i_1] [i_0]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_5]))) / (arr_10 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_5] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0])))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_3 [i_2] [i_2] [i_2]), (((/* implicit */unsigned char) (signed char)-2)))))))) : (min((var_8), ((~(var_8)))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), ((-(arr_15 [i_0] [i_0] [i_0] [i_2] [i_6] [i_1])))))) ? ((~(((/* implicit */int) (unsigned char)3)))) : (((/* implicit */int) (unsigned short)15))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        {
                            arr_29 [i_8] [i_10] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) (unsigned short)0);
                            var_22 = -3387088088297090994LL;
                            var_23 = ((/* implicit */unsigned char) arr_19 [i_8]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        {
                            arr_36 [i_8] [i_8] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) (unsigned short)11927)))) ? (((/* implicit */int) arr_28 [i_7] [i_7] [i_7])) : (((/* implicit */int) (unsigned char)252))))));
                            arr_37 [i_8] [i_7] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */long long int) var_15)) - (var_0)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)242)) - (((/* implicit */int) (unsigned char)75))))) : (min((var_8), (((/* implicit */unsigned long long int) arr_23 [i_8] [i_11])))))) > (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_26 [i_8] [i_8] [i_8] [i_8])), ((+(var_14))))))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 154924335622964810ULL)) ? (((/* implicit */long long int) 2804517296U)) : (7364918990030794700LL)));
                            var_25 = ((/* implicit */int) min((((/* implicit */long long int) arr_23 [i_7] [i_7])), (arr_32 [i_7] [i_8] [i_8])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        {
                            arr_42 [i_7] [i_7] [i_7] [i_13] [i_7] [i_8] = ((/* implicit */signed char) min(((~((+(((/* implicit */int) (unsigned short)32900)))))), (((/* implicit */int) min((var_17), (((/* implicit */unsigned short) (signed char)121)))))));
                            arr_43 [i_7] [i_8] [i_8] [i_8] [i_14] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) -3387088088297090989LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13)))), ((+(((/* implicit */int) (unsigned short)4095)))))), ((~(((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)53638))))))));
                            var_26 = ((/* implicit */unsigned long long int) arr_39 [i_7] [i_7]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_15 = 0; i_15 < 14; i_15 += 3) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 14; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_18 = 0; i_18 < 14; i_18 += 1) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 14; i_19 += 4) 
                        {
                            {
                                var_27 -= ((/* implicit */unsigned short) min((var_8), (var_8)));
                                arr_58 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) arr_15 [i_15] [i_15] [i_15] [i_17] [i_17] [i_15]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 14; i_21 += 3) 
                        {
                            {
                                arr_67 [i_15] [i_15] [i_15] [i_15] [i_21] = ((/* implicit */unsigned char) (-(min(((~(((/* implicit */int) (signed char)-2)))), (((/* implicit */int) arr_11 [i_15] [i_15] [i_15] [i_20] [i_21]))))));
                                var_28 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (7331307632123764957ULL) : (1980308782659239458ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_22 = 0; i_22 < 18; i_22 += 2) 
    {
        for (unsigned short i_23 = 0; i_23 < 18; i_23 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_24 = 0; i_24 < 18; i_24 += 2) 
                {
                    for (unsigned short i_25 = 0; i_25 < 18; i_25 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2)))))) ? (((/* implicit */int) arr_23 [i_23] [i_24])) : (((/* implicit */int) arr_28 [i_22] [i_22] [i_24])))), (((((/* implicit */_Bool) (unsigned short)11896)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) arr_27 [i_22] [i_22] [i_22] [i_22] [i_22]))))));
                            var_30 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)10)), (var_16)));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((unsigned short) ((((/* implicit */_Bool) arr_39 [i_22] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_24] [i_22]))) : (-7364918990030794701LL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_26 = 0; i_26 < 18; i_26 += 4) 
                {
                    for (unsigned int i_27 = 0; i_27 < 18; i_27 += 1) 
                    {
                        {
                            arr_84 [i_27] [i_23] [i_26] [i_23] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_22] [i_23] [i_26])) ? (((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */unsigned long long int) -1200291917)) : (11599073287965087075ULL))) : (((/* implicit */unsigned long long int) (-(0U))))));
                            var_32 = ((/* implicit */signed char) var_0);
                            var_33 &= ((/* implicit */unsigned short) var_8);
                            var_34 = ((/* implicit */short) 14968144951860059401ULL);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_28 = 0; i_28 < 18; i_28 += 4) 
                {
                    for (unsigned long long int i_29 = 0; i_29 < 18; i_29 += 4) 
                    {
                        for (unsigned long long int i_30 = 0; i_30 < 18; i_30 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(45481991242143033ULL)))) ? (((unsigned long long int) arr_89 [i_22] [i_23] [i_22] [i_29] [i_30] [i_30])) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_80 [i_23] [i_23] [i_23])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_77 [i_22] [i_23] [i_22] [i_22]))))))))));
                                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_89 [i_30] [i_23] [i_23] [i_23] [i_23] [i_22])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)81)))))) : (12213397332371691412ULL)));
                                var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(var_8)))))) ? (min(((+(arr_32 [i_29] [i_29] [i_30]))), (((/* implicit */long long int) arr_88 [i_22] [i_23] [i_22] [i_22] [i_29] [i_29])))) : (min((((/* implicit */long long int) arr_24 [i_29] [i_29] [i_29] [i_22])), (((((/* implicit */_Bool) arr_79 [i_30] [i_30])) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_10))))))))));
                                var_38 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_24 [i_22] [i_23] [i_30] [i_23])) : (((/* implicit */int) arr_30 [i_22] [i_30] [i_22]))))) ? (((arr_76 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_22] [i_28] [i_29] [i_30]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_30])))))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_41 [i_28] [i_28]))))))) : (4329096249815401261ULL)));
                                arr_94 [i_22] [i_23] [i_23] [i_28] [i_29] [i_29] [i_30] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26131))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_85 [i_22] [i_23] [i_23] [i_23]))) - (7299841897484954125ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_30])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_31 = 0; i_31 < 18; i_31 += 4) 
                {
                    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
                    {
                        {
                            arr_99 [i_23] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) (unsigned char)162))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_85 [i_22] [i_22] [i_31] [i_23])))))))));
                            arr_100 [i_23] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_92 [i_22] [i_23] [i_23] [i_23] [i_31])) ? (var_12) : (((/* implicit */int) arr_89 [i_22] [i_23] [i_23] [i_32] [i_32] [i_22])))), (((/* implicit */int) (unsigned short)25))))) ? (((((/* implicit */_Bool) 2343346360U)) ? (min((0LL), (((/* implicit */long long int) -1949338855)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_26 [i_22] [i_22] [i_31] [i_23])) ? ((~(-5990897873528408480LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_22])))))))));
                            arr_101 [i_22] [i_22] [i_22] [i_23] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 45481991242143049ULL))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
