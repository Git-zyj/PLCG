/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180908
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
    var_11 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [(_Bool)1] [(signed char)23] [i_4] [22] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_11 [i_0] [i_1] [i_0] [i_3])))));
                                var_12 = ((/* implicit */short) (_Bool)1);
                                var_13 = ((/* implicit */unsigned long long int) var_7);
                                arr_16 [i_0] [i_1] [i_4] = max((((/* implicit */unsigned char) ((((/* implicit */long long int) (-2147483647 - 1))) != (arr_0 [i_0])))), ((unsigned char)22));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned char) arr_7 [i_2] [i_2] [i_6 - 1] [(short)14]);
                                var_15 = ((/* implicit */short) arr_9 [i_0] [i_0] [i_0] [i_0]);
                                arr_22 [i_0] [i_1] [i_1] = ((arr_6 [i_6 + 1] [i_6 + 1] [i_6 + 1]) ^ (((/* implicit */long long int) ((((/* implicit */int) (short)62)) & (((/* implicit */int) (_Bool)0))))));
                                var_16 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_7 [i_6] [(unsigned char)19] [i_2] [(_Bool)1])) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)61)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (var_7)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6 + 1] [i_5] [i_5] [i_0] [i_0] [i_0] [i_0])))))) <= (max((((/* implicit */unsigned long long int) arr_14 [i_0] [i_2] [i_1] [20ULL])), (arr_2 [i_5])))))))));
                                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_2] [i_0] [6U] [6LL])) ? (((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_20 [i_0] [i_1] [i_2])))) : (((/* implicit */int) arr_8 [i_2] [i_2]))))) ? (arr_21 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0]) : (var_10)));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_20 [i_0] [i_1] [i_1])) == (((/* implicit */int) arr_20 [(unsigned char)16] [(unsigned char)16] [20LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_7 [i_0] [i_1] [i_2] [i_1])), (arr_20 [i_2] [i_1] [i_0]))))) : (max((var_8), (((/* implicit */unsigned long long int) var_3))))));
                }
            } 
        } 
        arr_23 [(_Bool)1] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (16790817160765755315ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 4) 
    {
        for (int i_8 = 1; i_8 < 23; i_8 += 2) 
        {
            {
                var_19 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8 + 1])) ? (arr_25 [i_8 + 2]) : (arr_25 [i_7 + 1])))))) ? (max((var_7), (((/* implicit */long long int) arr_26 [i_7 - 2] [i_8 - 1] [i_7])))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7 - 2]))))) << (((max((var_8), (((/* implicit */unsigned long long int) var_7)))) - (18357073691700819356ULL))))))));
                /* LoopSeq 4 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-52))))) == (3689413615U)));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_7 + 3] [i_8 - 1] [i_8 - 1]))))) & (max((((((/* implicit */_Bool) arr_29 [i_9])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_5)), (var_4))))))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))))) ? (max((arr_25 [i_7 - 2]), (((/* implicit */unsigned int) ((1557336208240403601ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_23 *= ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (short)-63)) < (((/* implicit */int) (unsigned char)7))))), (((((/* implicit */int) (short)-77)) * (((/* implicit */int) (_Bool)0))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 2; i_11 < 23; i_11 += 2) 
                    {
                        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_33 [i_8 + 2] [i_7 + 3])) ? (((/* implicit */int) arr_26 [i_8 + 2] [i_8 + 2] [i_7 + 3])) : (((/* implicit */int) arr_26 [i_8 + 2] [i_8 + 2] [i_7 + 3])))) <= (((/* implicit */int) arr_29 [i_11]))));
                        arr_36 [i_7] [i_7 - 2] [i_10] [i_10] = ((/* implicit */unsigned char) (_Bool)1);
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (signed char)-32)))))))))));
                        arr_37 [(short)20] [i_10] [i_8 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_8]))) / (var_8))) & (((/* implicit */unsigned long long int) arr_34 [i_7 + 1] [i_10] [i_10] [i_11 + 1]))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (unsigned char)135))))))) : (((/* implicit */int) var_4))));
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)107))))) ? (((/* implicit */int) ((((/* implicit */long long int) 0U)) > (-3284283352321734743LL)))) : (((/* implicit */int) var_5))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max(((signed char)109), (var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_7])))))))));
                    }
                    arr_38 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_24 [i_7 - 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((3392294489U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_10] [i_8 - 1] [i_7 + 2]))))))) : ((-(7002220761349771724ULL)))));
                }
                for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    arr_43 [(short)13] [(short)9] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((var_8), (15868407904749348731ULL)))) ? (((/* implicit */long long int) arr_32 [i_7 + 2] [i_7 - 1] [i_7])) : (((long long int) (signed char)39))))));
                    var_27 = ((/* implicit */_Bool) var_0);
                }
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 3) 
                {
                    var_28 += ((/* implicit */unsigned long long int) arr_28 [i_7 - 2] [i_7 - 2] [i_7 - 2] [15LL]);
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7572293626324310041LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551615ULL)))) ? (((arr_46 [(unsigned char)2] [i_7] [2U] [i_8 + 2]) ? (((/* implicit */unsigned long long int) arr_25 [i_7 + 3])) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                }
                var_30 |= ((/* implicit */_Bool) ((short) max((((/* implicit */unsigned long long int) ((unsigned char) var_6))), (var_1))));
                arr_47 [i_7 - 1] [i_8] [(_Bool)1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_44 [i_7 + 2] [i_7 + 1] [i_7 + 3] [i_8 + 2])), (var_10)))) ? ((+(2705001927U))) : (max((var_10), (((/* implicit */unsigned int) arr_44 [i_7 + 1] [i_7 + 3] [i_7 - 2] [i_8 - 1])))));
            }
        } 
    } 
    var_31 = ((/* implicit */int) var_5);
}
