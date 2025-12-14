/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166281
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 8; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) arr_2 [i_0]);
                            /* LoopSeq 3 */
                            for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                arr_16 [i_0] [i_0] [i_0] = arr_9 [(_Bool)1];
                                arr_17 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_4 [i_1 - 3])) - (((/* implicit */int) arr_4 [i_1 - 2]))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                arr_21 [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((-(var_9))) >= (((/* implicit */int) arr_13 [7])))))));
                                var_16 = ((/* implicit */unsigned char) var_4);
                            }
                            /* vectorizable */
                            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
                            {
                                var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) | (arr_20 [i_0] [i_1 - 2] [i_2] [i_2 - 1] [i_3 + 1] [i_6] [i_3 + 1])))) && (((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_6]))));
                                var_18 += arr_24 [i_2];
                                var_19 = ((/* implicit */unsigned int) arr_7 [i_1 - 2] [i_1 - 2]);
                                var_20 = ((/* implicit */unsigned long long int) arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_2 - 2]);
                            }
                        }
                    } 
                } 
                var_21 = ((/* implicit */int) arr_5 [i_0] [(short)4] [i_1]);
                /* LoopSeq 3 */
                for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 11; i_8 += 3) 
                    {
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                arr_32 [i_9] [i_1] [i_8] = ((/* implicit */_Bool) (~((~(((1871393434U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_7] [i_7] [i_9])))))))));
                                var_22 += ((/* implicit */unsigned short) arr_1 [i_7]);
                                var_23 = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (arr_6 [i_0] [i_0] [(unsigned short)0])));
                                arr_33 [i_9] [(unsigned short)11] [(unsigned short)11] [(unsigned short)11] [i_8] [i_9] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) var_9))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) arr_15 [i_0] [(_Bool)1] [(short)4] [i_0] [i_0] [i_0])), (arr_14 [i_0] [1U])))))) ? (max((((/* implicit */long long int) var_6)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 2; i_10 < 10; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_24 = var_9;
                                arr_39 [i_10] = ((/* implicit */short) (((+(((arr_15 [i_0] [i_0] [i_1 - 1] [i_7] [i_10 + 1] [(unsigned short)8]) % (((/* implicit */int) (unsigned short)52404)))))) & (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1]))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                            }
                        } 
                    } 
                }
                for (short i_12 = 1; i_12 < 11; i_12 += 3) /* same iter space */
                {
                    arr_43 [(short)2] [i_1 + 1] [i_12] [i_12 + 1] = ((/* implicit */unsigned int) var_7);
                    arr_44 [i_12] [i_1] [i_12] = ((/* implicit */long long int) (+(((-1861152562) / (((/* implicit */int) (unsigned short)13119))))));
                }
                for (short i_13 = 1; i_13 < 11; i_13 += 3) /* same iter space */
                {
                    arr_48 [(unsigned short)10] [2] = ((/* implicit */_Bool) (-(((arr_13 [i_0]) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) arr_13 [i_0]))))));
                    var_25 = ((/* implicit */signed char) var_0);
                    arr_49 [i_0] [i_0] [i_1] [(unsigned char)2] = ((/* implicit */unsigned char) var_3);
                    arr_50 [i_0] [(short)10] [i_13] [i_1] = arr_36 [(_Bool)1] [i_13] [i_1] [i_0];
                }
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))));
            }
        } 
    } 
    var_27 = ((/* implicit */_Bool) max((max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) 4294967295U))));
    /* LoopSeq 1 */
    for (unsigned short i_14 = 3; i_14 < 13; i_14 += 2) 
    {
        arr_54 [i_14] [i_14] = ((var_9) <= ((~(((/* implicit */int) arr_53 [i_14])))));
        var_28 += ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_51 [i_14 - 3]), (((/* implicit */short) arr_53 [i_14 - 3])))))));
        var_29 = ((/* implicit */short) max((min((arr_52 [i_14]), (((/* implicit */int) var_2)))), (((/* implicit */int) arr_51 [i_14 - 1]))));
        arr_55 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13127)) ? (((/* implicit */int) (unsigned short)52404)) : (((/* implicit */int) (unsigned short)52404))));
    }
}
