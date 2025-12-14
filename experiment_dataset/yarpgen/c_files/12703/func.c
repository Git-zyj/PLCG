/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12703
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
    var_18 = ((/* implicit */long long int) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((((int) arr_4 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_4 + 2])))) < (((/* implicit */int) ((unsigned short) arr_13 [i_1 - 3] [i_3 + 1] [i_0] [i_3] [i_1 - 3] [i_3])))));
                                var_19 -= ((/* implicit */unsigned int) arr_3 [i_1] [i_2] [i_3 + 1]);
                                var_20 = ((/* implicit */unsigned int) (short)(-32767 - 1));
                                var_21 *= ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned int) ((short) var_11))), (arr_7 [i_0 + 1] [i_1 + 1] [i_1] [i_3] [i_3 + 1]))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(signed char)19] [i_1 - 4]))) : (min((((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_1] [i_1 + 1] [i_0] [i_1])), (arr_9 [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)57)) >= (((/* implicit */int) (signed char)-19)))))))))) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) (unsigned char)208)))))));
                /* LoopSeq 2 */
                for (int i_5 = 1; i_5 < 22; i_5 += 1) 
                {
                    arr_18 [i_0] [i_1 - 1] [i_1 - 4] [i_1 - 1] = ((/* implicit */_Bool) var_12);
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) max((((/* implicit */short) (unsigned char)255)), ((short)(-32767 - 1))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-18031))))) ? (max((arr_8 [i_0] [i_1] [i_5] [i_0] [(unsigned short)13]), (((/* implicit */int) (unsigned char)10)))) : ((~(((/* implicit */int) (unsigned char)7))))))) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) (unsigned char)32))))));
                                var_24 = ((/* implicit */long long int) max((var_24), (((((/* implicit */long long int) ((arr_3 [i_1 + 1] [i_5 + 2] [i_7]) & (arr_3 [i_0 - 1] [i_1] [(signed char)12])))) | (((8970540333099685251LL) & (((/* implicit */long long int) 1735106586U))))))));
                                arr_23 [i_0] [i_0] [i_0] [i_0] [23ULL] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_5 - 1] [i_7 + 1] [i_1 - 2]);
                            }
                        } 
                    } 
                    arr_24 [18LL] [i_0] [i_5] = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1178215181U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
                for (long long int i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    var_25 -= ((/* implicit */unsigned int) var_9);
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)35)) >> (((max((var_9), (((/* implicit */int) var_8)))) - (32545))))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_9 [i_9 + 2])), (arr_22 [i_9 + 3] [i_8 + 1] [i_8] [i_1 + 1]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((arr_12 [i_9 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 2] [(unsigned short)11] [i_0] [i_0 + 1]) - (13686981344953709944ULL))))))));
                        arr_30 [i_0] = ((/* implicit */unsigned short) arr_6 [19U] [(unsigned short)11]);
                    }
                    for (int i_10 = 1; i_10 < 23; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (short i_11 = 2; i_11 < 23; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */int) ((_Bool) 0LL));
                            arr_38 [i_0 + 1] [i_0] [i_8 - 1] [i_10] [i_11] = ((/* implicit */signed char) max((2147483647), (((/* implicit */int) (_Bool)1))));
                            arr_39 [i_0] [21U] [i_0] = ((/* implicit */short) arr_22 [i_0] [i_1 - 1] [i_10] [i_11]);
                        }
                        for (unsigned short i_12 = 2; i_12 < 20; i_12 += 1) 
                        {
                            arr_44 [i_0] [i_1] [i_8] [i_10 + 1] [3U] = (i_0 % 2 == zero) ? (min((((((/* implicit */int) ((((/* implicit */unsigned int) -2147483647)) == (arr_7 [9U] [i_1 - 3] [i_8 + 2] [i_10 - 1] [i_12 - 2])))) << (((arr_21 [i_0] [i_0] [i_8 + 2] [i_8] [(_Bool)1] [i_10 + 1] [i_12]) + (405796446))))), (((/* implicit */int) var_13)))) : (min((((((/* implicit */int) ((((/* implicit */unsigned int) -2147483647)) == (arr_7 [9U] [i_1 - 3] [i_8 + 2] [i_10 - 1] [i_12 - 2])))) << (((((arr_21 [i_0] [i_0] [i_8 + 2] [i_8] [(_Bool)1] [i_10 + 1] [i_12]) + (405796446))) + (1107136519))))), (((/* implicit */int) var_13))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1] [i_12 + 3])) << (((((/* implicit */int) ((signed char) ((484110392U) << (((/* implicit */int) (_Bool)1)))))) - (99))))))));
                            var_30 = ((/* implicit */short) var_12);
                        }
                        arr_45 [i_0] [i_0] [i_8 + 1] [i_10] = ((/* implicit */unsigned char) -2254521556704581318LL);
                    }
                    for (int i_13 = 1; i_13 < 23; i_13 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            arr_51 [i_1] [i_13] [i_13] [i_0] [i_1] [i_1] [(unsigned short)19] = ((/* implicit */unsigned short) ((_Bool) (short)-32767));
                            var_31 -= ((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_1 - 2] [i_8] [i_13 - 1] [i_14]);
                        }
                        arr_52 [i_0] [i_0] [i_1] [i_1] [i_0] = arr_29 [i_0] [i_0] [i_8] [i_0];
                        arr_53 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 0)) | (arr_33 [i_1 - 4] [i_8] [i_8 + 3] [(signed char)10] [i_0 + 1] [23U])))) ? (arr_11 [i_1 + 1] [i_8 + 4] [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-30)) * (((/* implicit */int) var_15))))));
                    }
                }
            }
        } 
    } 
    var_32 -= ((/* implicit */unsigned long long int) var_17);
    var_33 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32256))) : (2254521556704581332LL)))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) (short)-13706))))), (((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)29))) : (9223372036854775807LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) (signed char)29)))))));
}
