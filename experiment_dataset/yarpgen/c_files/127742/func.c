/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127742
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_1)))))) : ((~(((/* implicit */int) (_Bool)1))))));
    var_18 ^= (~(((6478387376670702172LL) - (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [7U] [i_1] [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) max((1858797280U), (((/* implicit */unsigned int) var_2))))) < (min((((/* implicit */unsigned long long int) (_Bool)1)), (4014928902130323734ULL))))));
                arr_8 [i_0] = ((/* implicit */unsigned short) ((_Bool) var_0));
                var_19 = ((/* implicit */unsigned int) max((((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))) + (arr_3 [i_0]))) / (arr_3 [i_0]))), (((/* implicit */long long int) ((var_7) % (((((/* implicit */_Bool) var_3)) ? (2436170021U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)15] [i_0] [(short)15]))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 2; i_2 < 18; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            for (long long int i_4 = 3; i_4 < 17; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) -6478387376670702191LL);
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_10) >= (((/* implicit */int) var_15))))) > (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)512))))));
                    var_22 = ((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_13 [i_2] [i_3] [i_4])))));
                    /* LoopSeq 4 */
                    for (signed char i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (arr_15 [i_4 + 1] [(unsigned char)14])));
                        var_24 = ((/* implicit */short) ((int) var_6));
                        arr_21 [i_2] [i_3] [15U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) < ((-(arr_18 [i_2] [i_3] [(short)13])))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
                    }
                    for (long long int i_6 = 2; i_6 < 18; i_6 += 4) 
                    {
                        arr_24 [i_2] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) (~(var_4)))))))));
                    }
                    for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_2 + 2] [i_3] [i_4 + 3] [i_3] [i_2]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            arr_29 [i_2] [i_2] [i_8] [i_8] [(_Bool)0] = ((/* implicit */unsigned int) (-(((((/* implicit */int) var_14)) | (((/* implicit */int) (_Bool)1))))));
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_2] [(_Bool)1] [i_4 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9)) ? (((/* implicit */int) (short)16740)) : (((/* implicit */int) (unsigned short)10))));
                            arr_31 [i_2] [i_7] [i_2] [i_2 + 2] [i_2] &= ((/* implicit */_Bool) 2147483647);
                        }
                        var_28 = ((/* implicit */unsigned char) var_0);
                    }
                    for (long long int i_9 = 2; i_9 < 17; i_9 += 4) 
                    {
                        arr_34 [i_2] [i_3] [i_4] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_6 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34808))))));
                        var_29 = ((/* implicit */unsigned int) ((arr_32 [i_4 - 1] [i_4 - 2] [i_4 - 1]) | (arr_32 [i_4 + 3] [i_4 - 2] [i_4])));
                        var_30 &= ((/* implicit */short) (+(arr_25 [i_3] [i_9] [i_9 + 1] [i_9 + 1])));
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1509594057U))))))))));
                            var_32 = ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (-2147483633)))) && (((/* implicit */_Bool) arr_28 [i_4 - 2] [i_10 - 1] [i_9 - 2] [i_4 - 2] [i_2 - 2])));
                        }
                        for (int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                        {
                            arr_41 [i_2] [i_9] [i_4] [i_3] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_2] [i_2] [i_4] [i_4 - 3]))));
                            arr_42 [i_2] [i_9] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) arr_28 [11ULL] [i_3] [i_3] [6U] [i_3])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_4])) && (var_0))))));
                            var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) arr_35 [i_3] [i_3] [i_4] [i_4 + 1] [i_4]))));
                        }
                        for (int i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
                        {
                            arr_47 [i_12] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_2 + 2] [i_4 + 1] [i_9 + 2] [i_12]))));
                            var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (383396138U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) ^ (var_7)))));
                            arr_48 [i_2] = ((((/* implicit */_Bool) ((arr_37 [i_2] [i_3] [i_4] [i_9] [i_3] [11]) >> (((arr_32 [i_12] [(unsigned char)10] [i_2]) - (1497432344)))))) ? (((/* implicit */int) arr_2 [i_2 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 3729376312U))))));
                        }
                    }
                    arr_49 [(unsigned short)11] [i_2] [(short)6] = ((long long int) var_9);
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [23ULL])) - (((/* implicit */int) var_16))))))))));
        arr_50 [i_2] [i_2 + 2] = ((/* implicit */signed char) ((unsigned char) arr_2 [i_2]));
        var_36 = ((/* implicit */unsigned char) (+(arr_10 [i_2 - 2])));
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
    {
        var_37 = ((2147483647) == (arr_51 [i_13]));
        arr_54 [(unsigned short)17] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1858797256U)) ? (((/* implicit */int) (!(var_0)))) : ((+(((/* implicit */int) var_9))))));
        /* LoopNest 2 */
        for (long long int i_14 = 2; i_14 < 17; i_14 += 1) 
        {
            for (unsigned char i_15 = 3; i_15 < 18; i_15 += 4) 
            {
                {
                    var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) & (3514487314300171099LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_53 [(_Bool)1])))))))));
                    arr_61 [10ULL] [i_14] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_53 [i_15 + 1])) : (var_4)));
                }
            } 
        } 
    }
}
