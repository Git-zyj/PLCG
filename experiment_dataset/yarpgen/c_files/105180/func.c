/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105180
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((signed char) -3358964258002157250LL)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_12 [(signed char)5] [i_1 - 1] [i_1 - 1] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) arr_3 [i_0]);
                                var_18 = ((/* implicit */_Bool) ((var_7) % (((/* implicit */int) (signed char)-63))));
                                var_19 = ((/* implicit */long long int) ((((unsigned long long int) var_16)) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)52))))));
                                arr_13 [i_0] [(unsigned char)13] [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */signed char) arr_5 [i_4]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_5 [i_0 + 2]) : (arr_5 [i_0 - 1])));
        arr_15 [i_0] [i_0] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 13; i_6 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_7 = 3; i_7 < 11; i_7 += 2) 
                    {
                        arr_23 [i_0] [i_0] [i_6 - 2] [i_7] = ((/* implicit */unsigned int) ((arr_20 [i_6] [i_6 - 2] [i_7]) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [12ULL])))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            arr_26 [i_0] [8] [2U] [i_0] [2U] [i_0] &= ((/* implicit */long long int) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) < (var_8))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_7 [i_0 + 3]))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_14);
                        }
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_9] [i_0] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_0 + 1] [i_5 - 1] [i_6] [i_6 - 1])) == (((/* implicit */int) ((arr_4 [2U]) != (var_13))))));
                        var_21 &= ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_19 [i_0] [i_9] [(_Bool)1])))));
                        arr_31 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_0] [i_5 - 1] [(signed char)10] [i_0])) ? (((/* implicit */int) arr_29 [(signed char)10] [i_5 - 1] [i_6 - 1] [i_0])) : (((/* implicit */int) arr_29 [(_Bool)1] [i_5 + 1] [(_Bool)1] [i_0]))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 12; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_3 [2LL]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_24 [i_6 - 2] [i_6] [i_10 + 1] [i_10 + 1])))))));
                        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-60))))) ? (((/* implicit */int) var_10)) : (arr_5 [i_0])))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            var_24 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
                            arr_37 [i_0] [i_0] [11] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_14)))));
                            arr_38 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_5 - 1] [i_6])) ? (arr_36 [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_11 [8LL] [i_10 - 1] [i_6] [i_5] [i_0 - 1]))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_12 = 3; i_12 < 11; i_12 += 1) 
                        {
                            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_16 [i_0 - 1] [i_0 - 1]) : (((/* implicit */int) var_16))))) ? (arr_4 [i_10]) : (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_35 [i_0 + 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)209))))))))));
                            arr_43 [i_0] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((signed char) arr_11 [i_12] [i_10] [(signed char)4] [(signed char)4] [(signed char)4]));
                            var_26 = (-(arr_11 [i_5 + 1] [i_5] [i_5] [i_0 + 2] [8]));
                        }
                    }
                    arr_44 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13)) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_6])) : (((/* implicit */int) var_1))));
                }
            } 
        } 
        arr_45 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) (_Bool)1)))));
    }
    var_27 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned char) (signed char)-36)))))) <= (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) -7)) : (var_13)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned char)225))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))));
}
