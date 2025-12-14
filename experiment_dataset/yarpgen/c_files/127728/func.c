/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127728
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2681844331U)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (signed char)6)))), (((((/* implicit */_Bool) (signed char)-17)) ? (2147483633) : (2021242207)))))) : (18446744073709551615ULL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */int) var_8);
                                arr_17 [(signed char)16] [i_1 + 2] [(unsigned char)2] [(unsigned char)8] [i_3] [i_3] [(signed char)14] = ((/* implicit */unsigned long long int) ((short) var_4));
                                arr_18 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1586279690086077794ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (16860464383623473820ULL)));
                            }
                        } 
                    } 
                    arr_19 [4LL] [i_0] [i_0] [18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_10)))) ? (var_14) : (((/* implicit */int) arr_12 [i_0]))))) ? (((unsigned int) min((var_2), (var_14)))) : (((((/* implicit */_Bool) var_18)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (var_18))) : (((arr_15 [i_0] [i_1 - 1] [i_2] [i_0] [i_0] [i_1 - 1] [10]) ? (((/* implicit */unsigned int) var_0)) : (var_12)))))));
                }
                for (unsigned int i_5 = 4; i_5 < 17; i_5 += 2) 
                {
                    arr_22 [15LL] [15LL] [i_0] [i_0] = ((/* implicit */unsigned short) ((var_18) / (((/* implicit */unsigned int) ((arr_9 [i_5 + 1] [i_5 + 1] [i_5 - 1]) ? (((/* implicit */int) (unsigned short)52473)) : (var_13))))));
                    arr_23 [i_0] [i_1 + 1] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_16)))) ? (arr_20 [i_0]) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_9)))))));
                    arr_24 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)22183)) : (((((/* implicit */int) arr_0 [i_0])) >> (((var_6) - (4111390350U))))))) : (((/* implicit */int) var_9))));
                }
                /* LoopNest 2 */
                for (unsigned short i_6 = 3; i_6 < 18; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        {
                            arr_31 [i_7] [i_6] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (2062309344U)))) ? (var_1) : (((/* implicit */unsigned long long int) ((arr_9 [i_6 - 1] [i_6 + 1] [i_1 + 2]) ? (((/* implicit */int) arr_9 [i_6 + 1] [i_6 + 1] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_6 - 3] [i_6 - 2] [i_1 + 2])))))));
                            arr_32 [i_0] [3] [i_0] [3] = ((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 1] [i_6 - 2]))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 19; i_8 += 3) 
                            {
                                arr_35 [i_0] [i_0] [(signed char)10] [i_0] [i_0] [13] &= var_5;
                                arr_36 [i_0] [i_0] [i_8] = ((/* implicit */unsigned char) var_6);
                            }
                            for (int i_9 = 1; i_9 < 16; i_9 += 1) 
                            {
                                arr_39 [i_0] [i_1] [i_1] [18] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0]);
                                arr_40 [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((var_13), (((/* implicit */int) arr_26 [13] [13])))), (var_13)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9] [i_0] [(signed char)17] [i_0]))) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))))))));
                                arr_41 [i_9] [i_9] [i_6] [(unsigned short)4] [i_9] = ((/* implicit */short) arr_13 [i_0] [i_1] [i_6] [i_7] [i_9] [i_7]);
                                arr_42 [i_0] [i_1] [i_0] [i_7] [i_9] = ((/* implicit */unsigned char) arr_38 [i_0] [i_1] [i_1] [i_9] [i_7] [i_9] [i_9]);
                            }
                            for (short i_10 = 0; i_10 < 19; i_10 += 1) 
                            {
                                arr_47 [(unsigned short)7] [i_6 - 2] [i_0] [i_0] = ((/* implicit */signed char) var_9);
                                arr_48 [i_0] [i_0] [i_6] [i_7] [12U] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20242)) ? (((/* implicit */unsigned int) var_7)) : (arr_6 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) var_8)))))) : (arr_44 [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6])))));
                                arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) arr_9 [i_6 - 1] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) 2021242207)) ? (((/* implicit */int) var_5)) : (arr_10 [i_6 - 1] [1] [i_6] [i_6] [i_6]))) : (((((/* implicit */_Bool) arr_10 [i_6 - 1] [i_6 - 1] [i_6] [18] [i_6])) ? (arr_10 [i_6 - 1] [i_6] [i_6] [i_6] [i_6]) : (var_2))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
