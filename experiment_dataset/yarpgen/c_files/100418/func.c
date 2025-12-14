/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100418
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
    var_11 = ((/* implicit */signed char) var_6);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_3) : (((/* implicit */unsigned int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_10))))));
        var_12 = ((/* implicit */_Bool) var_8);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 14; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [12ULL] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (signed char)14)))) ? (((/* implicit */long long int) 3165826985U)) : (((var_1) / (((/* implicit */long long int) 1275178977))))));
                        arr_13 [i_0] [3U] [i_1] [(unsigned char)6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-14)) & (((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_2] [i_3 + 2] [i_3]))));
                        var_13 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_4)));
                        var_14 = ((/* implicit */unsigned int) (!((_Bool)0)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                var_15 = ((/* implicit */unsigned int) arr_4 [i_4] [i_4] [i_4]);
                var_16 = ((/* implicit */unsigned short) var_1);
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (long long int i_8 = 2; i_8 < 14; i_8 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_26 [7U] [(_Bool)1] [(_Bool)1] [(_Bool)1]))) || ((!(((/* implicit */_Bool) (signed char)54))))));
                            arr_28 [i_4] [i_4] [8LL] [i_4] [8LL] = ((/* implicit */unsigned long long int) var_7);
                            arr_29 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) var_7);
                            arr_30 [i_4] [i_5] [i_5] [i_4] [(signed char)7] [i_4] [i_8 - 2] = ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_8 - 1]));
                        }
                    } 
                } 
                arr_31 [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) var_6);
            }
            for (signed char i_9 = 1; i_9 < 15; i_9 += 4) 
            {
                arr_35 [i_4] [i_4] [i_4] [i_4] = (!(((/* implicit */_Bool) arr_0 [i_4])));
                arr_36 [i_4] [i_4] [i_9 - 1] [i_4] = var_1;
                arr_37 [15U] [i_4] [i_9 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_11 [i_9] [i_9 + 2] [i_9 + 1] [(signed char)5] [i_9 - 1]))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                for (signed char i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    {
                        arr_43 [i_4] = ((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_25 [i_4] [i_11]))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 2; i_12 < 16; i_12 += 3) 
                        {
                            arr_47 [i_4] [i_4] [(_Bool)1] [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_12 - 2] [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 - 2])))));
                            arr_48 [i_12 - 2] [i_4] [(_Bool)1] [i_4] [i_4] = ((/* implicit */unsigned char) ((unsigned int) 4161531766U));
                            arr_49 [(unsigned short)16] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_53 [i_4] [i_13] [i_11] [i_10] [i_4] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 133435531U)) : (var_10))) - (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            var_18 = ((/* implicit */signed char) (+(2550539945U)));
                            arr_54 [5U] [i_5] [i_5] [(signed char)9] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                        }
                    }
                } 
            } 
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_5] [i_5] [i_5] [i_4] [i_5] [(unsigned short)3] [(unsigned char)2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_4] [i_4] [i_4]))) : (arr_51 [i_4] [i_4] [i_4] [i_4] [i_5] [i_5])));
        }
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (int i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                {
                    arr_60 [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
                    {
                        arr_65 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_4] [i_14] [i_14] [i_4])) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) arr_6 [i_14])))));
                        arr_66 [i_14] [i_14] [i_4] [13U] = ((((/* implicit */int) arr_21 [i_4] [i_14] [i_14] [i_16] [i_14])) + (arr_58 [i_4] [1] [1] [i_16]));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 3) /* same iter space */
                    {
                        arr_69 [i_4] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-14)) + (2147483647))) << (((((/* implicit */int) var_5)) - (117)))));
                        arr_70 [i_4] [i_14] = ((/* implicit */_Bool) var_1);
                    }
                    for (signed char i_18 = 3; i_18 < 13; i_18 += 4) 
                    {
                        arr_75 [i_4] = ((/* implicit */long long int) ((13688716536187204522ULL) * (((var_8) & (var_4)))));
                        arr_76 [i_4] [i_4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */int) (!(((/* implicit */_Bool) 0U))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_19 = 0; i_19 < 17; i_19 += 1) 
    {
        arr_79 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((unsigned char) arr_61 [i_19] [i_19]));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [1ULL] [(_Bool)1] [1ULL] [1] [i_19])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_55 [(_Bool)1]))) : (((unsigned int) var_2)))))));
    }
    var_21 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((unsigned short) 0U))))));
    var_22 = ((/* implicit */unsigned int) var_1);
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_5)), (838218658U)))))))));
}
