/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180552
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
    var_10 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) var_4)) <= ((~(((/* implicit */int) var_3))))))), (min((((/* implicit */long long int) var_4)), ((-(-2948577860577441015LL)))))));
    var_11 = ((/* implicit */signed char) min((((/* implicit */int) var_2)), (max((((-563809132) % (((/* implicit */int) var_0)))), (((/* implicit */int) ((unsigned short) var_4)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_2] = ((/* implicit */unsigned short) (unsigned char)255);
                                arr_15 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 3824857139U)) ? (var_6) : (((/* implicit */unsigned int) 36893486)))))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((+(max((563809131), (((/* implicit */int) (short)7245)))))) / (((/* implicit */int) max((((/* implicit */short) min((var_3), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]))))), ((short)32761))))));
                    arr_17 [i_2] [7] = ((/* implicit */unsigned char) min((var_5), (((((/* implicit */_Bool) (short)3525)) ? ((-(0ULL))) : (var_5)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_12 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16418))) <= (470110157U))))) - (((unsigned int) (unsigned char)205))));
                        /* LoopSeq 4 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_13 = arr_31 [i_0 + 1];
                            arr_33 [i_0 - 1] [i_5] [i_5] [i_5] [i_7] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_5] [(unsigned short)0] [i_8]))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)62569)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (arr_6 [i_6]))) >= (var_6))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_22 [i_0 + 1]))));
                            arr_36 [i_9] [i_7] [i_6] [i_5] [i_0] &= ((/* implicit */unsigned long long int) arr_23 [i_0 + 3] [i_0 + 3] [(unsigned char)1]);
                            var_15 = ((/* implicit */signed char) ((min(((-(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_7])) && (((/* implicit */_Bool) arr_13 [i_9] [i_7] [4ULL] [(unsigned short)10]))))))) / (((/* implicit */unsigned long long int) -1441215881321328172LL))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned int) (~(((724624691) / (((((/* implicit */_Bool) arr_32 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) (unsigned char)218)) : (((/* implicit */int) (short)1069))))))));
                            var_17 = min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)50))))))), (min((arr_3 [i_0 - 1]), ((unsigned char)218))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_18 += ((/* implicit */_Bool) max(((-(var_6))), (((/* implicit */unsigned int) (short)16418))));
                            var_19 = ((/* implicit */long long int) (unsigned char)72);
                        }
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_12 = 3; i_12 < 13; i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_12] [i_6] [i_6] [2] [i_0 - 1] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-7246))));
                        arr_44 [i_12] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_7))) <= (((/* implicit */int) (short)-16434))));
                    }
                    for (unsigned char i_13 = 3; i_13 < 13; i_13 += 1) /* same iter space */
                    {
                        var_20 *= ((/* implicit */unsigned int) arr_32 [i_13] [i_13] [i_13] [6] [i_13]);
                        var_21 ^= ((/* implicit */signed char) (-(var_9)));
                        /* LoopSeq 3 */
                        for (signed char i_14 = 1; i_14 < 14; i_14 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) (unsigned short)34617);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (4294967295U)))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */int) arr_42 [(unsigned char)5] [i_13 + 1] [i_6] [0] [i_14] [0])) <= (((/* implicit */int) var_1)))))))) : (min((((((/* implicit */_Bool) (short)7246)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))))), (((/* implicit */unsigned int) arr_19 [i_0] [i_0])))))))));
                        }
                        for (signed char i_15 = 1; i_15 < 14; i_15 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) var_3);
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((((_Bool)1) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_6]))))) : (((/* implicit */int) arr_23 [i_0] [i_5] [i_6]))))) >= (max((((/* implicit */unsigned long long int) ((1727522292607944282LL) - (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_0] [i_5] [3U] [i_13] [i_15])))))), (13706693156825193633ULL)))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 1; i_16 < 13; i_16 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_0 + 3] [i_13 + 1] [i_13 - 1] [i_13 - 1])) || (((/* implicit */_Bool) 62914560))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_7))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (3293049858767591447LL)))));
                            var_28 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_0] [i_0]))));
                        }
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((3464833255726966130LL), (arr_7 [i_0] [i_0 + 1] [(unsigned char)9] [11LL])))) ? (((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) arr_32 [i_0] [i_0 + 1] [i_0] [i_0] [i_0])))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_2)), (arr_32 [i_0] [i_0 + 1] [i_0 - 1] [(short)10] [i_0]))))));
                    }
                }
            } 
        } 
    }
}
