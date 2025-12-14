/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158854
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
    var_19 = ((/* implicit */_Bool) ((unsigned int) 1379562577U));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */int) min((var_20), (arr_4 [(unsigned short)19])));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_2)))))) ? (((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_12))) : (((/* implicit */unsigned int) var_10))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_3)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_16) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((7068982007550339091LL) + (((/* implicit */long long int) 1379562585U))))));
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (((+(arr_5 [i_0] [(unsigned short)16] [i_2]))) > (((var_2) ? (arr_5 [i_0] [(unsigned short)6] [(unsigned char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                        var_25 = ((short) arr_8 [i_0] [i_2 - 1] [(short)2] [i_1] [i_0] [i_0]);
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [9] = ((((/* implicit */_Bool) var_14)) ? ((~(-5659202719488102235LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) arr_6 [i_0]))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_2] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 4622731848364000167LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54010))) : (1379562577U)))));
                        arr_16 [i_0] [(unsigned short)8] [16U] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) var_16))));
                        var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)54010))));
                        arr_17 [(_Bool)1] [(_Bool)1] [i_2] [i_4] [i_1] [i_0] = ((/* implicit */int) (-(((long long int) ((((/* implicit */_Bool) 1770980259)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_6 [i_0])))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_20 [17] [17] [i_0] [17] [i_1] [(_Bool)1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)40))))), (2002826084U)));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            arr_23 [13U] [13U] [19] [i_5] [i_0] = ((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_0] [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2 + 2] [i_2] [(signed char)16] [i_2] [i_2] [i_0])))));
                            arr_24 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) 16617585690360094893ULL);
                            var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_18 [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2 - 1] [i_0]))));
                        }
                        for (int i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            arr_27 [i_0] [i_1] [i_2 + 2] [i_5] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_5) > (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5]))))) : (max((var_10), (((/* implicit */int) var_11)))))))));
                            var_28 = ((/* implicit */short) (signed char)-36);
                            var_29 = ((/* implicit */short) (((!(((/* implicit */_Bool) max((2915404698U), (((/* implicit */unsigned int) var_9))))))) ? (max(((~(((/* implicit */int) arr_22 [i_0] [i_7] [i_2] [i_0] [i_7] [12LL])))), (((/* implicit */int) (_Bool)0)))) : ((~((~(var_10)))))));
                            arr_28 [(_Bool)1] [i_1] [i_1] [i_0] [9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_10)) : (max((var_12), (((/* implicit */unsigned int) var_18))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)57649))))) : (var_5)));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                        {
                            arr_31 [i_0] [i_1] [i_0] [i_0] [i_5] [i_5] [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)45)) ? (16617585690360094883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32001))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19088)))));
                            arr_32 [i_0] [i_0] [11U] = ((/* implicit */int) arr_2 [i_0]);
                        }
                        var_31 -= ((/* implicit */unsigned short) -5659202719488102235LL);
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        var_32 = (~(((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1] [6LL] [i_2 + 1] [i_2 - 1] [i_0])));
                        arr_35 [i_0] [(signed char)3] [(signed char)3] [i_0] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_18))))));
                        var_33 = ((/* implicit */unsigned int) ((_Bool) 1860005212U));
                        arr_36 [i_0] [3ULL] [i_2] [i_9] = ((/* implicit */short) ((arr_10 [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_0]) ^ (((/* implicit */unsigned int) var_5))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0]))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (7365601316939642045ULL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        for (unsigned int i_12 = 2; i_12 < 20; i_12 += 3) 
                        {
                            {
                                arr_44 [i_0] [10U] [i_0] [i_12] = ((/* implicit */_Bool) arr_3 [(_Bool)1] [i_11]);
                                arr_45 [i_12] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (unsigned short)54003);
                                arr_46 [i_0] [i_0] [1ULL] [i_0] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [(short)0] [i_1] [(short)0] [i_11] [i_12]))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
                {
                    arr_49 [i_0] [(signed char)13] [i_0] = ((/* implicit */_Bool) max(((~(((/* implicit */int) arr_42 [i_0] [(_Bool)1] [i_0] [i_1] [(unsigned char)0] [i_13] [i_13])))), ((~(((/* implicit */int) arr_42 [i_13] [i_1] [i_1] [i_1] [i_0] [(_Bool)1] [i_0]))))));
                    var_35 += ((((/* implicit */_Bool) 1379562559U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_17)));
                    arr_50 [(_Bool)1] [i_0] [i_13] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_0]);
                }
            }
        } 
    } 
}
