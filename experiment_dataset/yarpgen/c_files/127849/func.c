/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127849
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (-(-17)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) 9)) ? (((/* implicit */unsigned long long int) 9)) : (9606394807813988642ULL))))));
                    var_22 |= ((/* implicit */unsigned char) (!(((var_19) > (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2 - 1] [i_0]))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 3; i_4 < 14; i_4 += 2) 
                        {
                            var_24 |= ((/* implicit */short) (unsigned char)27);
                            var_25 = ((/* implicit */unsigned int) min(((-(min((arr_12 [i_0] [i_0] [i_0] [i_2 - 1] [i_3] [i_4]), (((/* implicit */unsigned long long int) 9)))))), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0]))));
                            var_26 = (+(min((((21) >> (((((/* implicit */int) arr_6 [i_4 - 2] [(unsigned char)8] [i_1])) - (895))))), (((/* implicit */int) arr_1 [i_4 + 1])))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            var_27 ^= ((/* implicit */unsigned char) (-(((unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_3] [10] [(signed char)0] [i_0])) + (((/* implicit */int) (_Bool)0)))))));
                            var_28 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) arr_11 [i_2 - 1] [i_2 - 1] [(signed char)14] [i_0] [i_2 - 1] [(_Bool)1])))));
                            var_29 = ((/* implicit */int) (~(24U)));
                        }
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) arr_17 [i_1] [i_0] [i_2 - 1] [i_3] [i_3])) : (arr_16 [i_1] [i_2 - 1] [i_2 - 1] [i_2] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 24U))))) : (((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                    }
                }
            } 
        } 
    }
    for (short i_6 = 3; i_6 < 17; i_6 += 3) 
    {
        var_31 = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7)))))))));
        var_32 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (short)1621)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_6 - 3]))) : (max((((/* implicit */long long int) (unsigned char)4)), (arr_19 [i_6]))))) | (((/* implicit */long long int) ((/* implicit */int) (short)-8)))));
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
        {
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    {
                        var_33 = ((/* implicit */long long int) ((arr_25 [(unsigned char)0] [i_7] [15]) < (((((/* implicit */_Bool) 21ULL)) ? (((var_11) + (arr_19 [i_6]))) : (((/* implicit */long long int) 4294967271U))))));
                        var_34 ^= ((/* implicit */signed char) ((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)0))));
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) arr_19 [i_6 + 1]))));
                        var_36 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned int) arr_25 [1ULL] [i_8] [i_8 - 1]))), ((~(arr_25 [i_8] [i_8] [i_8 - 1])))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25018))) : (arr_19 [i_6 + 3])))));
        var_38 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_20 [i_6 - 3] [i_6 + 1]), (arr_20 [i_6 - 3] [i_6 + 1]))))));
    }
    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 4294967275U)), (var_11)))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) ((4751204795045355534ULL) < (11ULL))))) | (min((((/* implicit */unsigned long long int) var_1)), (18446744073709551586ULL))))))))));
}
