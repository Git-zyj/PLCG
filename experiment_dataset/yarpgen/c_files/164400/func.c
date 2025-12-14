/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164400
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 1022412306962636724ULL)) ? (((/* implicit */unsigned int) var_4)) : (arr_2 [i_1])))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) var_8)) : (arr_5 [i_0] [i_1])))))));
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    arr_11 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)4012)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)4] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_9 [i_1] [(signed char)10] [(_Bool)1] [(unsigned short)10]))))) ? (arr_7 [i_2 + 1] [i_2 - 1] [i_1] [11ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_14 += min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)3))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40423))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 1] [i_1])) ? (1230508615U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                                var_15 = ((/* implicit */int) min((((var_10) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))))), (min((var_2), (((/* implicit */unsigned int) var_0))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_17 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2 + 1] [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 1]))) : (min((arr_5 [i_3] [i_3 - 1]), (((/* implicit */long long int) var_9))))))) ? (((((/* implicit */_Bool) min(((unsigned char)65), ((unsigned char)65)))) ? (((var_1) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11)))))) : (((arr_16 [i_4 + 2] [(unsigned short)0] [i_4] [(unsigned short)0] [i_4] [i_2 - 1] [i_1]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((arr_3 [i_0] [i_3]), (((/* implicit */unsigned short) arr_16 [i_4 + 1] [i_3 - 3] [i_4] [i_2] [i_4] [i_1] [i_0])))))))));
                                var_17 ^= ((/* implicit */signed char) min((min((((((/* implicit */_Bool) 0LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned char)65), ((unsigned char)190)))) ? (((/* implicit */int) max((((/* implicit */signed char) var_10)), (arr_13 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) -1227307433656684280LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [4])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_0] [(short)8] [i_0] [(short)8])) : (((/* implicit */int) (unsigned char)128)))), (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)78)), (arr_19 [i_0] [(unsigned char)12] [(unsigned short)9] [i_5]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (0LL)))) ? (min((((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_1] [i_5] [i_6])), (arr_20 [i_0] [i_6] [i_5] [i_5] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11469)) ? (((/* implicit */long long int) var_4)) : (1227307433656684279LL))))));
                                arr_22 [i_0] [i_1] [i_1] [i_2] [i_0] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) max((14LL), (1227307433656684279LL)))) ? (((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_1])) ? (12158873874242584166ULL) : (((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_2 - 1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))));
                                var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)19)), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_2)))) ? (min((((/* implicit */long long int) var_0)), (-7680978893009962023LL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_14 [i_0] [i_1] [(_Bool)1] [i_5 - 1] [(_Bool)1]) : (arr_2 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25289))) : (arr_7 [i_0] [i_0] [i_0] [i_0])))) : (min((((/* implicit */long long int) var_12)), (1227307433656684279LL)))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 2; i_8 < 12; i_8 += 4) 
                    {
                        for (signed char i_9 = 1; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((min((var_4), (((/* implicit */int) var_1)))), (min((min((((/* implicit */int) var_9)), (arr_0 [i_1]))), (((((/* implicit */_Bool) arr_19 [i_0] [i_9 - 1] [i_7] [i_0])) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) var_9))))))));
                                arr_30 [i_0] [i_7] [i_9 + 1] = min((((((/* implicit */_Bool) 1227307433656684279LL)) ? (arr_12 [i_9 - 1] [i_9] [i_9 + 1] [i_9 + 1] [i_8 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_1) ? (((/* implicit */int) arr_9 [i_0] [i_0] [6LL] [i_9])) : (((/* implicit */int) var_7))))), (min((arr_14 [i_0] [i_1] [0] [i_1] [i_9 + 1]), (((/* implicit */unsigned int) var_7))))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_8])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_8)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1227307433656684273LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))))))) ? (((((/* implicit */_Bool) (short)11469)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_19 [i_8] [i_8 - 2] [i_8 - 2] [i_8])) : (((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_0] [i_0] [(short)6] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned int) var_9))))) ? (((var_10) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [(signed char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))) : (3843031488U)))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_7] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_20 [i_0] [i_0] [i_0] [(signed char)0] [i_7] [i_7]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_7])) ? (var_8) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) -1227307433656684301LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))))))));
                    var_22 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((arr_6 [i_0]), (((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0] [i_7]))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_1] [i_0] [i_1])) ? (2338972466U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [(signed char)0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)54790), (var_7))))))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_0])))))));
                }
                arr_32 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((var_1) ? ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_1]))) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1]))) : (arr_8 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [(short)4])) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1227307433656684303LL) : (8388607LL)))) ? (((((/* implicit */_Bool) (short)-1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) min((var_4), (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_2))) : (((/* implicit */unsigned int) var_8))))));
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            {
                var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_26 [i_10] [i_10] [i_10] [8LL] [i_11] [i_11])), (arr_20 [i_10] [i_10] [i_11] [i_10] [i_10] [i_10])))) ? (((arr_25 [i_10] [i_11]) ? (((arr_27 [i_10] [i_10] [i_10] [i_10]) ? (arr_8 [i_11] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (1227307433656684300LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)2047)))))));
                var_25 &= ((/* implicit */unsigned int) max((min((((((/* implicit */_Bool) (short)25289)) ? (((/* implicit */int) (short)15)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_10] [i_11])) : (((/* implicit */int) (unsigned char)174)))))), (((((/* implicit */_Bool) min((2251799813684224LL), (((/* implicit */long long int) var_12))))) ? (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)190)))) : (((/* implicit */int) var_7))))));
                var_26 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((-5667433297891726379LL), (((/* implicit */long long int) arr_4 [i_11] [i_11]))))) ? (max((arr_29 [i_10] [i_10] [i_11] [i_11] [i_10]), (((/* implicit */unsigned int) arr_0 [i_11])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */int) (unsigned char)250)))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) var_1)) : (var_8))), (((((/* implicit */_Bool) 1188188712708471180LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)65))))))) : (min((min((((/* implicit */long long int) 3244750780U)), (6761342192322485142LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_15 [4ULL] [4ULL] [4ULL] [4ULL] [4ULL])))))))));
            }
        } 
    } 
    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)8188)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) var_4)) : (min((((/* implicit */unsigned int) (unsigned char)191)), (var_2)))))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 1300546081U)) : (-1188188712708471181LL)))) ? (min((-688304530), (((/* implicit */int) var_12)))) : (((/* implicit */int) min((var_11), (var_7))))))));
}
