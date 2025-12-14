/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157172
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = (~(((/* implicit */int) arr_3 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) arr_3 [i_1] [i_0]))));
            arr_7 [7U] [i_1] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_0)))));
            arr_8 [i_1] [i_1] [i_0] = ((/* implicit */signed char) -1714862633);
        }
        for (int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                arr_15 [(short)2] [i_2] [i_3] |= ((/* implicit */_Bool) ((long long int) arr_14 [i_2] [i_2] [i_3]));
                var_14 = (!(arr_3 [i_3] [i_2]));
            }
            for (int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
            {
                var_15 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_11 [i_0] [i_2] [i_4])));
                var_16 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [(short)4] [i_0]))));
            }
            for (int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_17 |= arr_3 [i_0] [i_2];
                    arr_23 [i_0] [i_5] [i_5] [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967291U))));
                    var_18 |= ((/* implicit */int) arr_3 [i_0] [i_2]);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_11))));
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) arr_20 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) arr_20 [i_7 - 1] [i_7 - 1] [(unsigned char)3] [i_7 - 1])))))));
                    arr_28 [i_5] [i_5] [i_0] = ((/* implicit */signed char) arr_21 [i_7 - 1] [i_7] [i_7] [i_5]);
                }
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    var_21 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_8])) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_3 [i_0] [i_5]))));
                    var_22 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [12LL] [i_2] [i_5] [i_8]))));
                }
                var_23 = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (_Bool)1)))));
                arr_31 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) < (4294967276U)))) - (((/* implicit */int) (unsigned short)32752))));
                arr_32 [i_5] = ((/* implicit */unsigned int) ((arr_3 [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)46))))));
            }
            arr_33 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)48)))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37)))))));
            /* LoopSeq 2 */
            for (unsigned int i_9 = 1; i_9 < 10; i_9 += 4) 
            {
                var_24 = ((/* implicit */long long int) var_4);
                var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)4))));
            }
            for (long long int i_10 = 1; i_10 < 11; i_10 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_11 = 4; i_11 < 11; i_11 += 2) 
                {
                    arr_41 [i_11 - 1] [i_10] [12LL] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_0 [i_11]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))))));
                    var_26 *= ((/* implicit */unsigned char) (signed char)112);
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((signed char) 5U));
                        arr_47 [i_12] [i_2] [i_12] = ((/* implicit */signed char) ((((arr_44 [i_0] [i_12] [i_10 + 2] [i_2] [i_0]) && (((/* implicit */_Bool) var_7)))) || (((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) arr_19 [i_0] [0LL] [i_0] [i_12]))))));
                        arr_48 [i_12] [i_12] = ((/* implicit */signed char) (unsigned char)108);
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) 5U);
                        arr_51 [i_0] [i_2] [i_10] [i_12] [i_12] = ((/* implicit */long long int) (unsigned char)246);
                        var_29 = ((/* implicit */unsigned short) 0LL);
                        arr_52 [i_12] [i_14] = ((/* implicit */signed char) (short)26875);
                    }
                    for (unsigned long long int i_15 = 2; i_15 < 10; i_15 += 3) 
                    {
                        arr_56 [i_0] [i_0] [(short)6] [2ULL] [i_0] |= ((/* implicit */int) arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [10LL]);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_30 [i_0] [i_12 - 1] [i_12 - 1] [i_12] [i_15])) < (((/* implicit */int) var_3))));
                    }
                    for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        var_31 |= ((/* implicit */unsigned char) arr_54 [i_16] [i_16] [i_12] [i_10] [i_2] [i_0]);
                        var_32 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)33))));
                        var_33 = ((/* implicit */unsigned short) ((262143LL) + (((arr_9 [i_2] [i_2]) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(signed char)4])))))));
                        var_34 *= ((/* implicit */int) arr_53 [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] [i_16]);
                    }
                    var_35 |= ((/* implicit */_Bool) arr_25 [i_0] [i_2] [i_10] [i_12] [i_12] [i_12]);
                    arr_59 [i_0] [i_12] [i_10 + 2] [i_12] = ((/* implicit */signed char) (~(arr_21 [i_0] [i_0] [i_0] [i_12])));
                }
                for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
                {
                    arr_62 [i_0] [i_0] [i_0] [i_0] [(short)7] [i_0] |= ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_7))))));
                    arr_63 [i_0] [i_0] [3U] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_10 + 1])) ? (((/* implicit */int) arr_5 [i_10 - 1])) : (((/* implicit */int) (unsigned char)172))));
                    var_36 *= ((/* implicit */signed char) ((unsigned int) arr_61 [i_0] [i_0]));
                    var_37 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)26875))));
                }
                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_10 - 1] [i_2] [i_10] [i_10 + 2] [(unsigned short)8] [(unsigned char)6])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)0)))))));
                arr_64 [i_0] [i_2] [i_10] = (!(((/* implicit */_Bool) (unsigned char)0)));
            }
            var_39 = ((/* implicit */int) max((var_39), (((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) ((4294967291U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [(signed char)5])))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) var_12))))))));
        }
        arr_65 [(short)4] = ((/* implicit */unsigned int) (~((+(arr_43 [i_0] [i_0] [i_0])))));
    }
    var_40 = ((/* implicit */int) var_1);
    var_41 *= ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (var_0)));
}
