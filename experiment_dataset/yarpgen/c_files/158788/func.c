/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158788
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
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (1866606784369636044LL) : (((/* implicit */long long int) var_7))))))) ? (((((/* implicit */_Bool) (short)-16975)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16974)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)56))) : (arr_10 [i_1])))) : (3063878692378562965ULL))) : (((/* implicit */unsigned long long int) max((((510687470818042460LL) | (((/* implicit */long long int) ((/* implicit */int) (short)16974))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)50112))))))))));
                                arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_8)))) ? ((+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) arr_10 [i_1])) : (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_11)) : (var_14))))))))));
                                arr_15 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) var_14);
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((min((1866606784369636044LL), (((/* implicit */long long int) -1776401022)))) <= (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) << (((((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? ((-(-8616721466698757116LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_3]))))) - (8616721466698757111LL)))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((int) (+(arr_2 [i_4])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) (short)21349);
                                arr_23 [i_0] [i_0] [i_1] [19LL] [i_1] [i_5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_2] [i_5] [i_1])) ? (var_7) : (var_7)))) | (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_5] [i_6] [i_1])) ? (((/* implicit */long long int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_1] [i_1] [i_0])) : (var_6)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (arr_20 [i_6] [i_1] [i_2] [i_1] [i_0]) : (((/* implicit */int) var_4))))) ^ (min((var_14), (arr_4 [5U] [i_0]))))) : (((((((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_5]))))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)55441)) - (55441)))))));
                                arr_24 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_6])) & (((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) ((short) ((((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_5] [3] [(signed char)4] [i_6])) % (var_3))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned int) var_3))))) ? (((((/* implicit */_Bool) -1125540579)) ? (arr_0 [i_0]) : (arr_11 [i_0] [(unsigned char)2] [i_1] [(signed char)2] [i_5] [i_1]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [(short)0] [i_6]))) <= (var_14))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) min((((int) (-2147483647 - 1))), (var_3)))) ? (min((((/* implicit */unsigned long long int) max((89723079), (((/* implicit */int) arr_25 [i_7] [i_8]))))), (((((/* implicit */_Bool) arr_36 [12LL] [i_8] [i_9] [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9))) : (var_12))))) : (((/* implicit */unsigned long long int) max(((((_Bool)0) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_33 [i_11]))))))))));
                                arr_39 [17] [i_8] [7LL] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14)))))) ? (var_6) : (((/* implicit */long long int) ((unsigned int) arr_8 [i_7] [i_8] [i_9] [i_10] [i_7] [16]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 19; i_12 += 3) 
                {
                    for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (6983146690920891889ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252)))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_7] [i_8] [i_8] [i_8] [i_12] [i_13])) < (((/* implicit */int) arr_22 [i_7] [8] [i_12]))))) % (((/* implicit */int) arr_22 [i_13] [i_12] [i_8]))))) : (((((_Bool) (unsigned char)253)) ? (((((/* implicit */_Bool) arr_29 [i_12] [i_12])) ? (arr_5 [18LL] [i_13] [(short)20]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                            arr_47 [i_12] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) max((var_0), (((/* implicit */int) arr_46 [i_7] [(unsigned char)13] [i_7] [14] [i_7]))))) + (max((2525350621U), (((/* implicit */unsigned int) (unsigned short)20138)))))))));
                            arr_48 [i_8] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) arr_34 [i_7] [i_7] [i_12] [i_13])) >= (arr_12 [i_7] [i_7] [(unsigned short)7] [i_8])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
                {
                    for (unsigned short i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        {
                            arr_53 [i_15] [i_8] [i_15] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_35 [(short)5] [i_14] [(short)5]))))) ? (arr_43 [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_10)))))))));
                            arr_54 [6LL] [i_8] [i_8] [i_15] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_14))))))), (((((long long int) var_16)) ^ (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8])))))));
                            var_21 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max(((+(((/* implicit */int) (short)13587)))), (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) 1535631673)))))))), (((((/* implicit */_Bool) max(((unsigned char)199), (((/* implicit */unsigned char) arr_50 [i_15] [i_8] [(unsigned char)16] [i_8]))))) ? (((/* implicit */unsigned int) arr_27 [i_14])) : ((-(458591872U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 19; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        {
                            arr_61 [i_7] [16U] [i_8] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (arr_59 [i_7] [(unsigned short)6]) : (arr_4 [i_8] [i_17])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_55 [i_7] [i_7] [i_7]))))) : (((arr_4 [i_16] [i_8]) / (arr_4 [i_16] [(short)12])))));
                            arr_62 [11ULL] [i_8] [i_8] [i_8] [i_7] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (((arr_51 [i_8] [(_Bool)1] [i_16] [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6286)))))))) ? (((((/* implicit */_Bool) 2812154706599333742ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42560))) : (3392521367U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_49 [i_7] [i_17])) ? (((/* implicit */int) arr_25 [i_7] [i_8])) : (var_3))))))));
                            var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) <= (((((/* implicit */_Bool) arr_52 [i_8] [i_16] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37365))) : (0U)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (~(2147483647)))))))));
                            var_23 -= ((/* implicit */unsigned long long int) var_9);
                            arr_63 [i_7] [i_8] [i_8] [i_17] = ((/* implicit */unsigned char) (~(var_12)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    for (long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                    {
                        {
                            arr_70 [i_8] [i_8] [i_18] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((arr_0 [i_7]) != (((/* implicit */int) arr_45 [i_7] [i_19] [i_18]))))) + (((arr_45 [i_7] [i_7] [i_7]) ? (arr_0 [i_7]) : (arr_0 [i_7])))));
                            arr_71 [i_7] [i_8] [i_8] = ((((/* implicit */_Bool) min((((unsigned short) var_7)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1863035336)) || (arr_1 [i_18]))))))) ? (min((((/* implicit */int) (unsigned short)65533)), (((var_10) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_36 [i_7] [i_8] [i_8] [i_8] [i_19])))))) : (((/* implicit */int) ((unsigned short) arr_31 [i_8]))));
                            var_24 *= ((((((_Bool) var_4)) ? (((((/* implicit */_Bool) 902445929U)) ? (1555638651742547944LL) : (-6593309910991829993LL))) : (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) arr_9 [i_7] [i_7] [i_8] [i_8] [i_7] [i_19])))))))) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)6)) ? (-25) : (((/* implicit */int) (unsigned char)3))))), (((var_10) ? (arr_43 [i_7]) : (((/* implicit */unsigned long long int) arr_44 [i_19])))))) - (18446744073709551533ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
}
