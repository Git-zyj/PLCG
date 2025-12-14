/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160099
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)63)) : (((((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) + (((/* implicit */int) var_0))))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)211))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3923916096898679411LL)) | (var_11)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -3923916096898679428LL)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_0))))) : (var_11)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_2 - 4] [i_2 - 2]))) - (((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_1)))))));
                    arr_9 [i_0] [i_1 + 1] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3923916096898679417LL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_3))))), ((~(var_10)))))) : (18446744073709551615ULL)));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                    {
                        arr_12 [i_0] [21ULL] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_9))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6)))));
                        arr_13 [i_3] [2LL] [i_1] [(short)0] = (unsigned short)63979;
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_1 + 2] [i_0] [i_1 + 2] [i_0] = ((((/* implicit */_Bool) (-(2147483647)))) ? (1958105347U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65467))));
                            arr_20 [7] [(short)17] [i_2 - 1] [i_4] [i_2 + 2] = ((/* implicit */signed char) arr_2 [i_4] [i_1] [i_1 + 2]);
                            arr_21 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] = ((/* implicit */unsigned short) ((unsigned int) ((long long int) 33554431U)));
                            arr_22 [i_0] [(unsigned short)15] [i_0] = ((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_0] [i_0] [i_5]);
                            arr_23 [6LL] [i_4] [i_2 + 1] [6U] [i_0] = ((/* implicit */int) arr_4 [i_4] [i_1] [i_2 - 3]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 1; i_6 < 19; i_6 += 3) /* same iter space */
                        {
                            arr_28 [i_0] [i_0] [(_Bool)1] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [15])))));
                            arr_29 [i_0] [i_0] [i_2] [i_0] [i_4] [i_1 - 1] [i_6] = (~(((/* implicit */int) arr_27 [i_0] [i_2 - 2])));
                            arr_30 [(short)20] [i_2] [(short)20] [i_2] [i_6 + 2] |= ((136365211648ULL) ^ (((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_0] [i_2 - 1] [i_4] [i_6])));
                        }
                        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 3) /* same iter space */
                        {
                            arr_33 [i_1 + 1] [i_1] [i_1] [i_4] [i_2 - 4] = ((/* implicit */int) (unsigned short)65448);
                            arr_34 [(unsigned short)1] [i_1 + 2] [10ULL] [i_1 + 1] [i_1 + 1] [i_1 + 2] [4] = ((var_6) + (((/* implicit */long long int) arr_32 [i_7 - 1] [i_7])));
                            arr_35 [i_0] [i_0] [(unsigned char)10] [i_1 + 3] [i_2] [i_4] [4U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((-(8070450532247928832LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))));
                        }
                        arr_36 [(_Bool)1] = ((/* implicit */int) (~(arr_18 [(signed char)8] [(signed char)8] [(signed char)8] [(unsigned char)10] [i_1 + 1])));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                    {
                        arr_39 [i_0] [12ULL] [i_2] [i_8] = (-(0LL));
                        arr_40 [i_0] [(unsigned char)18] [5LL] [i_8] = ((/* implicit */signed char) ((unsigned short) 419518604U));
                        arr_41 [i_0] [i_1 + 3] [i_1 + 3] [i_2] [i_8] [i_0] = ((/* implicit */signed char) (+(var_1)));
                    }
                    for (short i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                    {
                        arr_45 [20U] [i_1 + 1] [(signed char)9] [i_9] = ((/* implicit */unsigned long long int) (+(2065570964752608220LL)));
                        arr_46 [i_0] [i_1 + 1] [i_9] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_2 + 1] [i_1 + 2] [i_2 + 1] [i_1 + 2] [(_Bool)1]))) : (419518607U))));
                        arr_47 [i_0] [i_1 + 2] [i_2 - 2] [(signed char)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (min((((/* implicit */unsigned long long int) 67108863U)), (arr_43 [i_0]))) : (((/* implicit */unsigned long long int) (+((~(4267363188137967292LL))))))));
                    }
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((520192U) & (419518604U)));
    var_15 = ((/* implicit */unsigned int) min((((int) ((var_6) & (var_6)))), (((/* implicit */int) (!((_Bool)1))))));
}
