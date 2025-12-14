/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160266
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
    var_15 = ((/* implicit */unsigned short) ((signed char) min((((((/* implicit */int) (unsigned char)20)) * (((/* implicit */int) var_10)))), (((/* implicit */int) ((unsigned short) var_7))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)-57))))) - (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_2 [i_1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) : (((/* implicit */int) (_Bool)1))))) : (-9223372036854775799LL)));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17140))) / (((((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_1] [i_1])) / (((((/* implicit */_Bool) arr_8 [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))) : (6342141918987958589ULL)))))));
                        arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [(short)13] [i_1] [(unsigned short)8])) << (((((/* implicit */int) arr_1 [(unsigned short)14])) - (64071)))));
                        arr_13 [i_0] [(unsigned char)14] [(unsigned char)14] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-980))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1] [i_2] [i_0])) ? (var_9) : (arr_10 [i_3] [i_1 + 1] [i_2] [i_3])))))) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) min((((unsigned short) (_Bool)1)), (arr_4 [i_0]))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_17 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17140)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_1]))) : (11ULL))))));
                        var_17 = ((/* implicit */signed char) 9223372036854775807LL);
                        var_18 = ((/* implicit */long long int) arr_3 [(short)5]);
                        /* LoopSeq 4 */
                        for (signed char i_5 = 2; i_5 < 17; i_5 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)6)) >= (((/* implicit */int) var_12))));
                            arr_20 [i_0] [i_1 + 3] [i_4] [(_Bool)1] [i_1] = ((/* implicit */long long int) ((11831647045964787954ULL) - (((/* implicit */unsigned long long int) 2784353871774235144LL))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_1] [12U] [i_4] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0] [(unsigned char)13] [(signed char)2] [i_4] [i_1] [i_1 + 3] [i_0]))));
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) ((short) var_9))))))));
                            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_6 - 2] [i_1] [i_2] [i_1]))));
                        }
                        for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            arr_29 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (short)-17141);
                            var_22 = var_9;
                            var_23 *= ((/* implicit */unsigned short) (~((-(((/* implicit */int) (unsigned short)30602))))));
                        }
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_24 *= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)37102)) * (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_0]);
                            var_26 = ((/* implicit */long long int) ((((11831647045964787972ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_1 - 1] [i_1])))))))));
                            arr_33 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_32 [i_8] [i_0] [i_1] [i_2] [i_1] [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4253178492U)))) : (((((/* implicit */_Bool) (unsigned short)24690)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2784353871774235121LL)))));
                        }
                        var_27 ^= ((/* implicit */unsigned short) arr_30 [i_1 + 1] [i_1] [(unsigned short)8] [i_4] [i_4]);
                    }
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-17141)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)209)), ((unsigned short)51620)))) : (((/* implicit */int) (unsigned short)65522))));
                    arr_34 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-59))));
                    arr_35 [i_1] [i_0] |= ((/* implicit */unsigned long long int) var_9);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
    {
        arr_38 [(unsigned short)9] = ((/* implicit */_Bool) arr_36 [i_9] [i_9]);
        var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 1; i_10 < 23; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                {
                    arr_45 [i_10] = ((/* implicit */signed char) max(((((((_Bool)1) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) var_7)))) >> (((/* implicit */int) arr_42 [i_10] [i_10 - 1] [i_9] [i_10])))), (((/* implicit */int) (short)120))));
                    arr_46 [i_11] [i_10] [(signed char)11] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_9])) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((long long int) (_Bool)1)))))));
                }
            } 
        } 
        var_30 = ((/* implicit */signed char) ((-2160652978578993657LL) > (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
    }
    for (long long int i_12 = 2; i_12 < 15; i_12 += 4) 
    {
        var_31 |= arr_4 [i_12];
        var_32 = ((((/* implicit */_Bool) (-(arr_16 [i_12 + 2] [i_12 - 2] [(short)2] [i_12] [i_12 + 1] [i_12])))) ? (((/* implicit */long long int) min((arr_16 [i_12 + 3] [i_12 - 2] [i_12] [i_12] [i_12 + 2] [i_12]), (3713631420U)))) : ((~(8826512747805007417LL))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_33 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((signed char) (signed char)-63)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_13] [i_13] [i_13] [10ULL])) >> (((((/* implicit */int) (signed char)85)) - (80))))))))) : (min(((+(((/* implicit */int) arr_14 [i_13] [i_13] [i_13] [(signed char)0] [i_13])))), (((/* implicit */int) (signed char)105))))));
        arr_51 [i_13] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) (short)26000)));
    }
}
