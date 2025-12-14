/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174655
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) % (9223372036854775808ULL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) ((unsigned long long int) max((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 + 2] [i_0 - 2]))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                arr_7 [i_0 + 2] [i_0] [i_2] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) (unsigned short)2256)))) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)256)) : (((/* implicit */int) (short)-256)))))))) < (((((arr_0 [i_0 + 2]) + (2147483647))) >> (((max((12), (((/* implicit */int) (signed char)43)))) - (38)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        arr_12 [i_2] [i_1] [i_3] = ((/* implicit */short) 1167257112);
                        arr_13 [i_2] [i_1] [i_2] [i_3] [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 1] [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 3] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 2] [i_2])));
                        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) arr_8 [i_4] [i_2])) <= (((/* implicit */int) (_Bool)1)))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        arr_16 [i_0] [i_1] &= ((/* implicit */int) 2147482624U);
                        var_16 -= ((/* implicit */unsigned char) ((unsigned long long int) (short)20395));
                    }
                    for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        arr_19 [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) arr_4 [i_6] [i_3] [i_1]);
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_14 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_3] [4ULL] [i_6] [i_3])))))));
                    }
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)218))))) ? ((+(((/* implicit */int) (unsigned short)58237)))) : (((/* implicit */int) ((((/* implicit */int) (short)256)) == (((/* implicit */int) var_7)))))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_10 [i_0] [i_0] [1] [i_2] [i_3]))))) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [i_0 + 3])));
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)3085)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (arr_20 [i_3] [i_3]))) : (((/* implicit */int) arr_2 [i_7] [i_3] [i_0]))));
                        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_2]))) : (9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))) < (var_9)))))));
                    }
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_21 [i_0 + 2] [i_3] [i_3] [i_2] [i_2] [i_0 + 2] [i_0 + 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (unsigned char)89)) ? (72057594037927935ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (short)17307)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_17 [i_0] [i_1] [i_3] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                        arr_26 [i_2] [i_3] [i_2] [i_1] [i_2] = var_5;
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        arr_29 [i_2] = ((short) (!(arr_27 [i_0 + 1] [i_2] [i_2] [i_3] [i_9])));
                        arr_30 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_6)))) || (((/* implicit */_Bool) arr_17 [i_0 - 1] [i_1] [i_3] [i_2]))));
                        var_23 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_5 [i_0 + 1] [i_2] [i_2] [i_2])) / (((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_1] [i_9] [i_2] [i_9]))))));
                    }
                }
                arr_31 [i_0] [i_2] [i_0 - 2] = ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_2] [i_1] [i_0 + 2])), (min((min((arr_25 [i_0 - 1] [13LL] [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 - 1]), (((/* implicit */unsigned short) (short)32762)))), (((/* implicit */unsigned short) var_7))))));
                var_24 = ((/* implicit */short) (unsigned short)9233);
                arr_32 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) min((arr_22 [i_0 + 1] [i_0 - 2]), (((/* implicit */unsigned long long int) arr_11 [(unsigned short)8] [i_2] [i_0]))));
            }
            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0 - 1])) ? (arr_3 [i_0 - 1] [i_1] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) ((arr_3 [i_0] [i_0] [i_0 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))))))));
        }
    }
}
