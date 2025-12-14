/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123778
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)8191))));
                /* LoopSeq 4 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */int) var_13);
                    var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [i_0 + 3]) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 2])) : (((/* implicit */int) (short)-4114))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)71))))) : ((+(var_9)))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_16 &= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((((/* implicit */int) (short)-8191)) + (2147483647))) << (((((-536042378) + (536042390))) - (12)))))) != (6512910215945464612LL))) ? (((/* implicit */int) (short)24844)) : (((/* implicit */int) (short)8191))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_10))));
                                arr_17 [i_0 + 4] [i_0 + 4] [i_3] [i_4] = ((/* implicit */signed char) min((((/* implicit */int) var_5)), ((-(((/* implicit */int) (signed char)-32))))));
                            }
                        } 
                    } 
                    arr_18 [i_3] [i_3] = ((((/* implicit */int) (short)(-32767 - 1))) | (((/* implicit */int) (short)-8191)));
                    var_19 ^= ((/* implicit */short) (-(((/* implicit */int) ((signed char) var_8)))));
                }
                /* vectorizable */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) (short)-8172));
                    var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8181))) : (arr_2 [i_1])));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_21 -= ((/* implicit */long long int) var_0);
                        var_22 *= ((/* implicit */short) ((signed char) ((((unsigned long long int) arr_3 [i_8] [i_8])) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8172))))));
                        var_23 = ((/* implicit */unsigned long long int) arr_0 [i_0 + 1]);
                        arr_26 [i_7] [i_7] [i_8] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_11 [i_7] [i_1] [i_1])) && (((((/* implicit */int) arr_23 [i_0 - 1] [i_0] [i_0])) < (((/* implicit */int) arr_20 [i_0] [i_1] [i_7]))))))));
                        var_24 = ((/* implicit */unsigned short) var_2);
                    }
                    var_25 = ((/* implicit */_Bool) (+(var_1)));
                    var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_9 = 3; i_9 < 11; i_9 += 4) 
                {
                    var_27 = ((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0 + 3] [i_0]))) + (var_9)))));
                    var_28 += arr_14 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 3] [0LL];
                    var_29 = ((/* implicit */unsigned long long int) (((+(arr_19 [i_9] [i_1] [i_0]))) / ((~(((/* implicit */int) (unsigned char)41))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13392))) * (14778094461228223469ULL)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0] [(short)10] [i_10])))) : ((+(((/* implicit */int) var_2))))))) ? (((arr_32 [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 3] [i_0 + 1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_11 = 2; i_11 < 10; i_11 += 2) 
                    {
                        arr_36 [i_10] [i_10] = ((/* implicit */short) ((((((long long int) var_5)) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_23 [i_0 + 3] [i_0 + 4] [i_0])) + (64))) - (1)))));
                        arr_37 [i_10] [i_10] [i_0] [i_10] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)56167)) & (((/* implicit */int) (short)8172)))) ^ (arr_19 [i_0 + 2] [i_11 + 1] [i_11 - 1])));
                        var_31 = ((/* implicit */unsigned short) var_12);
                    }
                    arr_38 [i_10] = ((/* implicit */int) arr_32 [i_0] [i_1] [i_10]);
                }
                for (unsigned short i_12 = 2; i_12 < 9; i_12 += 3) 
                {
                    arr_41 [i_12] = ((/* implicit */long long int) arr_12 [i_12] [i_12] [i_12] [i_0]);
                    arr_42 [i_0 + 2] [i_12] [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_0), (((/* implicit */signed char) (_Bool)1)))))))) ? (((/* implicit */int) var_8)) : (67108352)));
                }
                for (signed char i_13 = 1; i_13 < 10; i_13 += 2) 
                {
                    var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)28960))));
                    var_33 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [1ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_9)));
                }
            }
        } 
    } 
    var_34 = ((/* implicit */int) (short)-8192);
    var_35 = ((/* implicit */unsigned short) var_8);
    var_36 = ((/* implicit */signed char) (((-(((/* implicit */int) var_5)))) << (((((/* implicit */int) var_0)) + (114)))));
}
