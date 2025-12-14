/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109467
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) != (((((var_10) + (2147483647))) << (((((/* implicit */int) var_13)) - (13265)))))));
    var_18 = var_6;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((arr_4 [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) || (((/* implicit */_Bool) arr_1 [i_1] [i_1]))));
                var_20 *= ((/* implicit */short) arr_1 [i_1] [i_1]);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2])) ? (((((/* implicit */_Bool) (short)-7856)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9156))))) : (arr_0 [i_1] [i_1]))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_1 [i_1] [i_1])) : (arr_8 [i_0] [i_0] [i_0] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_18 [i_6] = ((/* implicit */signed char) arr_17 [i_4] [i_5]);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        arr_23 [i_4] [i_6] [i_6] [i_6] = ((/* implicit */long long int) ((unsigned char) (+(((/* implicit */int) var_2)))));
                        var_24 = ((/* implicit */unsigned int) ((unsigned char) arr_16 [i_4] [i_4] [i_6] [i_7 + 2]));
                        arr_24 [i_5] [i_6] [i_5] [i_5] = (-(var_8));
                        var_25 *= ((/* implicit */signed char) ((var_14) ? (((/* implicit */int) arr_19 [i_5] [i_5] [i_5] [i_6 - 1] [i_5] [i_7])) : (((/* implicit */int) arr_21 [i_4] [i_6] [i_6] [i_6 - 1]))));
                    }
                    for (int i_8 = 0; i_8 < 21; i_8 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (~(var_4))))));
                        arr_28 [i_4] [i_5] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_20 [i_4] [i_6] [i_6] [i_6] [i_6 - 1] [i_6])) != (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4] [i_6 - 1] [i_8]))))));
                        /* LoopSeq 2 */
                        for (signed char i_9 = 1; i_9 < 18; i_9 += 4) 
                        {
                            var_27 = min((((((arr_16 [i_6 - 1] [i_9 + 2] [i_9 - 1] [i_9 + 2]) + (9223372036854775807LL))) << (((arr_16 [i_6 - 1] [i_9 + 1] [i_9 + 2] [i_9 + 1]) + (7055096550177047797LL))))), (((/* implicit */long long int) (~(arr_14 [i_5])))));
                            var_28 = ((/* implicit */unsigned short) var_9);
                            arr_31 [i_4] [i_4] [i_4] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_5] [i_6 - 1] [i_8] [i_5]))))) : (((((/* implicit */int) arr_29 [i_9 + 3])) % (((/* implicit */int) arr_29 [i_9 + 3]))))));
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6 - 1] [i_6 - 1] [i_9 + 2] [i_9]))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_17 [i_4] [i_6 - 1])) : (var_7)))));
                        }
                        for (unsigned short i_10 = 2; i_10 < 17; i_10 += 4) 
                        {
                            arr_36 [i_6] [i_8] [i_8] [i_8] [i_6] = ((/* implicit */signed char) arr_21 [i_5] [i_6] [i_8] [i_10]);
                            var_30 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-1)) ? (arr_15 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_5] [i_4] [i_5])))))))));
                        }
                    }
                    for (int i_11 = 0; i_11 < 21; i_11 += 3) /* same iter space */
                    {
                        arr_40 [i_4] [i_6] = ((/* implicit */signed char) ((short) (~(((arr_12 [i_11]) & (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                        arr_41 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_4] [i_5] [i_6 - 1] [i_11]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_11]) >= (((/* implicit */int) arr_27 [i_11] [i_6] [i_5] [i_4])))))) : (((arr_16 [i_4] [i_5] [i_6 - 1] [i_11]) | (((/* implicit */long long int) arr_14 [i_5]))))));
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((short) var_8)))));
                        var_32 = ((/* implicit */unsigned int) var_14);
                        arr_42 [i_4] [i_6] [i_6] [i_4] = (!(((/* implicit */_Bool) ((short) arr_11 [i_6 - 1]))));
                    }
                    for (int i_12 = 0; i_12 < 21; i_12 += 3) /* same iter space */
                    {
                        arr_47 [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_22 [i_6] [i_5] [i_6 - 1] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_22 [i_6] [i_5] [i_6 - 1] [i_12] [i_5]))));
                        var_33 = ((/* implicit */signed char) var_5);
                        /* LoopSeq 3 */
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned int) (((((-(var_8))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-256)) < (((/* implicit */int) arr_48 [i_4] [i_12] [i_6] [i_6] [i_13] [i_5] [i_6])))))))) % (max((var_5), (((/* implicit */long long int) arr_17 [i_4] [i_4]))))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((unsigned short) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) arr_35 [i_13] [i_6] [i_5] [i_6 - 1] [i_5] [i_6] [i_5])) : (((/* implicit */int) ((_Bool) var_9)))))))));
                            arr_50 [i_6] [i_6] [i_13] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((var_4) % (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_12] [i_6] [i_6] [i_13])))))) ? (((((/* implicit */_Bool) arr_43 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) arr_25 [i_4] [i_5] [i_6] [i_12] [i_4])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((signed char) var_4))))));
                        }
                        /* vectorizable */
                        for (short i_14 = 4; i_14 < 20; i_14 += 4) /* same iter space */
                        {
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((long long int) arr_51 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_14 + 1] [i_14 - 1] [i_14])))));
                            arr_53 [i_4] [i_6] [i_6] [i_6] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_4] [i_4] [i_6] [i_12] [i_4])) || (((((/* implicit */_Bool) arr_49 [i_4] [i_5] [i_6] [i_12] [i_14] [i_12])) && (((/* implicit */_Bool) arr_34 [i_4]))))));
                            var_37 = ((/* implicit */int) ((short) arr_48 [i_5] [i_6 - 1] [i_6 - 1] [i_12] [i_14 - 1] [i_14] [i_12]));
                        }
                        for (short i_15 = 4; i_15 < 20; i_15 += 4) /* same iter space */
                        {
                            var_38 |= ((/* implicit */long long int) (-(arr_49 [i_4] [i_5] [i_6] [i_4] [i_12] [i_15])));
                            arr_58 [i_6] [i_5] [i_6] [i_6] [i_12] [i_12] [i_12] = ((/* implicit */short) arr_38 [i_4] [i_4] [i_6] [i_12] [i_15]);
                        }
                        var_39 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_46 [i_4] [i_5] [i_6] [i_5])))) != (((arr_54 [i_4] [i_5] [i_6 - 1] [i_5] [i_5] [i_4] [i_5]) & (((/* implicit */long long int) ((/* implicit */int) (short)-9176))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_20 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1])))) : (((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) : (arr_49 [i_4] [i_4] [i_5] [i_6 - 1] [i_6] [i_5]))))));
                        arr_59 [i_6] [i_5] [i_12] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_6 - 1] [i_12])))))));
                    }
                }
            } 
        } 
    } 
}
