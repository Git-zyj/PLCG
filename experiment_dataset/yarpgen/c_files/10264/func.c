/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10264
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
    var_16 = ((/* implicit */long long int) (signed char)-118);
    var_17 = ((/* implicit */_Bool) max((var_17), ((!(var_10)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_4 = 2; i_4 < 23; i_4 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_3))));
                            var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_6)))))))), (max((((/* implicit */unsigned long long int) var_4)), (var_1)))));
                            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(arr_2 [i_4 - 1]))))));
                            var_21 = (-((~(((/* implicit */int) arr_13 [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4 + 2] [i_4 + 1])))));
                            var_22 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4 - 1] [i_4 - 2] [i_4 + 2] [i_4 - 2] [i_4])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-16101)), (var_5)))) : (var_14))), (((/* implicit */unsigned long long int) (signed char)127))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            arr_16 [(signed char)23] = ((/* implicit */unsigned long long int) var_9);
                            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_1])), (var_8)))) ? (max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (2975230704U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))));
                            var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_3] [i_5]))))), (((unsigned long long int) var_7))));
                            var_25 = ((/* implicit */unsigned long long int) ((min((var_8), (((/* implicit */unsigned long long int) var_0)))) <= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned long long int) var_3)), (var_7))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_15 [(_Bool)1] [(signed char)4] [(signed char)22] [(_Bool)1] [(_Bool)1] [(signed char)22]))))) : (min((var_7), (((/* implicit */unsigned long long int) var_15)))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_5)) : (var_15)))))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                        {
                            var_27 -= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_12) : (var_12)))))))));
                            arr_21 [i_0] [i_1] [0LL] [i_3] [i_6] [i_1] [i_0] = ((/* implicit */signed char) (-((~(var_3)))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
                        {
                            var_28 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-97))));
                            arr_24 [i_0] [i_7] [i_0] [i_3] [i_7] = (+(((/* implicit */int) ((_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        var_29 = (+((-(((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3])))));
                        arr_25 [(short)22] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (921018859438160215ULL)))) ? ((-(var_6))) : (((/* implicit */int) min((arr_22 [i_3] [i_2] [i_1] [i_0]), (arr_22 [i_0] [i_1] [i_2] [i_3]))))));
                    }
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_27 [i_0])) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)113)), (arr_27 [i_0]))))));
                            arr_33 [i_8] [i_1] [(signed char)1] [i_8] [i_9] = ((/* implicit */int) ((((var_4) ? (max((971364584486257148ULL), (((/* implicit */unsigned long long int) (signed char)127)))) : (((/* implicit */unsigned long long int) -1)))) + (min((((/* implicit */unsigned long long int) var_13)), (var_1)))));
                        }
                        var_31 *= ((/* implicit */unsigned int) var_3);
                    }
                    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        var_32 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)97)), (max((var_1), (((/* implicit */unsigned long long int) var_9))))))) ? (var_1) : (((/* implicit */unsigned long long int) var_15))));
                        var_33 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (9151077277648205414ULL)))) ? (((/* implicit */unsigned long long int) var_6)) : (var_14)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)76)))))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_6)) : ((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) var_11))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_11] [i_10])), (var_8))))));
                            arr_38 [i_10] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9151077277648205414ULL)) ? (9151077277648205440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47470)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : ((~(var_15))));
                        }
                        var_35 = ((/* implicit */int) var_14);
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_37 [8ULL] [i_2] [8ULL]))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 1; i_12 < 23; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) 9151077277648205438ULL);
                                var_38 = ((/* implicit */signed char) (~((~(var_6)))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((((/* implicit */short) var_10)), (arr_41 [i_0] [i_1] [i_1] [18U] [18U])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_9)))) : (var_9)))));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((9151077277648205414ULL), (((/* implicit */unsigned long long int) var_0))))) ? ((~(((/* implicit */int) var_10)))) : ((~(var_2)))))) ? (((/* implicit */unsigned long long int) var_6)) : (max((((/* implicit */unsigned long long int) var_13)), (var_1)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
    {
        for (unsigned char i_15 = 1; i_15 < 18; i_15 += 2) 
        {
            {
                arr_49 [i_14] = ((/* implicit */short) var_13);
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 18; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 22; i_17 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((int) var_11))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_6)) : (var_15)))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_52 [i_15 + 4] [i_14]), (arr_52 [i_15 + 3] [i_15]))))) : (var_15))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 2) 
                            {
                                arr_56 [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_1))))));
                                var_42 -= ((/* implicit */unsigned short) min((9151077277648205444ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))));
                            }
                            for (unsigned char i_19 = 4; i_19 < 21; i_19 += 1) 
                            {
                                var_43 = ((/* implicit */unsigned int) var_5);
                                var_44 = ((/* implicit */unsigned short) max((var_44), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_50 [i_15 - 1] [i_15 + 1])))))));
                            }
                            for (int i_20 = 0; i_20 < 22; i_20 += 4) 
                            {
                                arr_63 [i_15] [20ULL] [i_15] [i_15] [i_15] [i_15 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) ((_Bool) arr_52 [i_14] [i_16]))), (arr_61 [i_14] [i_15 + 1] [i_14] [i_16 - 2] [i_17] [i_14])))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (var_2) : (var_3)))), (min((((/* implicit */unsigned long long int) var_13)), (var_1))))) : (((unsigned long long int) (_Bool)1))));
                                arr_64 [i_14] [i_16 + 1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_52 [i_15 - 1] [i_16 + 2])) : (((/* implicit */int) arr_52 [i_15 + 2] [i_16 + 2])))));
                                arr_65 [i_20] [i_17] [i_16] [i_15] [i_15 + 4] [i_14] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4145763603541682941ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))), (((unsigned int) var_14))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
