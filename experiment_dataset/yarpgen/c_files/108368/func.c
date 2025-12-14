/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108368
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_0] = ((/* implicit */signed char) max((var_0), (((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0])))));
                            /* LoopSeq 3 */
                            for (short i_4 = 2; i_4 < 12; i_4 += 1) /* same iter space */
                            {
                                var_13 = ((/* implicit */int) ((unsigned int) -2560331991340530910LL));
                                var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 + 3] [i_1] [i_2 - 3])) / (((/* implicit */int) var_1))))) && (((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) (unsigned char)168))))))), ((-(((unsigned long long int) (signed char)-126))))));
                                arr_17 [i_4] [i_0] [i_2] [i_0] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1010817625U)), (2560331991340530909LL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)0)), (var_5)))) + ((-(((/* implicit */int) var_4))))))) : (1658136379U)));
                                arr_18 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_10 [14ULL] [i_0] [i_0] [i_0 + 2] [i_1] [i_0]) : (arr_10 [i_0 + 3] [i_0 + 1] [i_0] [i_0 + 3] [11U] [i_0])))) ? (arr_16 [(unsigned short)3] [i_3] [i_2] [i_1] [i_0 - 1]) : (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 2560331991340530910LL))))), (arr_16 [8U] [(unsigned short)13] [i_2] [i_3] [i_4])))));
                                arr_19 [(short)6] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)174)) * (((/* implicit */int) arr_2 [i_3]))))) ? ((((-(4294967295U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_2] [i_4 + 1])) >= (((/* implicit */int) arr_2 [i_0 + 3])))))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)55637)))))))));
                            }
                            for (short i_5 = 2; i_5 < 12; i_5 += 1) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [6ULL])) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((/* implicit */int) arr_4 [4ULL]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5 + 1] [i_3] [i_3] [i_2 + 2])) ? (((/* implicit */int) arr_7 [i_5 + 1] [i_5 + 2] [i_3] [i_2 + 1])) : (((/* implicit */int) arr_4 [(_Bool)1]))))))))));
                                arr_22 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? (min((2560331991340530901LL), (arr_16 [i_0 - 1] [i_1] [i_2 + 2] [i_3] [i_5 - 1]))) : (((/* implicit */long long int) (-(arr_1 [i_0])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (arr_20 [i_0] [i_0])))) ? (arr_20 [i_5 + 1] [i_0]) : (((/* implicit */unsigned int) 1293463092)))))));
                                arr_23 [i_1] [i_0] [i_2] [(short)4] [i_5 - 2] = (unsigned short)45817;
                                arr_24 [i_5] [i_0] [i_2 - 3] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned int) var_10);
                                arr_25 [i_0 + 1] [i_0 - 1] [i_0] [(unsigned short)6] [i_0] [i_0 + 1] = ((/* implicit */int) ((((min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (arr_0 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_8)))))) + (((/* implicit */unsigned int) (-(arr_5 [i_0 - 1] [i_0]))))));
                            }
                            for (short i_6 = 2; i_6 < 12; i_6 += 1) /* same iter space */
                            {
                                arr_29 [i_0] [i_0] [i_1] [i_2] [i_0] [i_6 + 2] [i_6] = ((/* implicit */signed char) (((~(24U))) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                                arr_30 [i_0] = ((/* implicit */_Bool) (((((-(var_6))) >= (1388955285U))) ? (((/* implicit */int) ((signed char) arr_15 [i_0] [(signed char)4]))) : ((-(((arr_21 [i_1] [i_2 + 1] [14U]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))));
                                arr_31 [i_0] [i_0 - 1] [i_0] [i_0 + 2] [11LL] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_21 [i_1] [i_2 - 3] [i_2])), (arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]))))) > (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) 2560331991340530901LL)))) * (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) / (-2560331991340530906LL)))))));
                                arr_32 [i_6] [i_0] [i_2 + 2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                            }
                            arr_33 [i_0] [i_0] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (-(((/* implicit */int) var_11))))))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
                            {
                                arr_36 [i_0] [i_1] [i_2 - 3] [i_0] [i_7] = ((/* implicit */int) ((unsigned int) (-(((/* implicit */int) (_Bool)0)))));
                                arr_37 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(1714331937U)));
                            }
                            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_17 = ((/* implicit */signed char) 4294967294U);
                            }
                            for (unsigned int i_9 = 3; i_9 < 14; i_9 += 1) 
                            {
                                arr_42 [i_0 + 2] [i_0] [i_0 + 2] [i_0] [5] [i_0] [i_0 + 3] = ((/* implicit */unsigned char) min((min((((/* implicit */int) var_10)), ((+(((/* implicit */int) var_10)))))), (((/* implicit */int) ((6U) < (4294967295U))))));
                                arr_43 [i_0] [i_1] [i_2] [i_3] [i_9 + 1] = ((/* implicit */_Bool) arr_2 [i_0 + 2]);
                                arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 3115023090U)), (((((/* implicit */_Bool) 4294967295U)) ? (2560331991340530904LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                                arr_45 [i_0] [1LL] [i_2 + 1] [6U] [i_0 + 1] [i_3] [i_2 - 3] = ((/* implicit */short) arr_35 [i_0]);
                            }
                        }
                    } 
                } 
                var_18 ^= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(signed char)2] [(short)10] [0ULL] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_41 [8] [8] [8] [i_0])) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (arr_5 [i_0 - 1] [(unsigned short)10])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (((-(((/* implicit */int) (short)32767)))) * (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (int i_10 = 1; i_10 < 11; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            {
                arr_51 [i_11] [i_11] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_11])) ? (((/* implicit */int) arr_2 [i_10 + 1])) : (((/* implicit */int) ((unsigned short) var_6)))))));
                var_20 *= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_49 [(short)12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) ((((((unsigned long long int) var_11)) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) << (((((((/* implicit */int) ((short) var_2))) + (((((/* implicit */int) var_0)) - (((/* implicit */int) var_8)))))) - (22501)))));
}
