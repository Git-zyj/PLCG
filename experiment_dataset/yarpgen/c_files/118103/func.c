/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118103
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
    for (signed char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
                {
                    arr_10 [i_0] [i_1] [i_0] = ((unsigned long long int) (unsigned short)7332);
                    arr_11 [(unsigned short)9] [(unsigned short)4] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_7)) : (var_13)))))));
                    arr_12 [i_1] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1035597917)) ? (((/* implicit */int) (unsigned short)58203)) : (((/* implicit */int) var_4)))))));
                }
                for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
                {
                    arr_15 [i_0] [i_0] [i_3] [i_0 + 4] = ((/* implicit */int) (((!(((/* implicit */_Bool) -1035597917)))) ? (min((((/* implicit */unsigned long long int) 3952837036U)), ((~(var_11))))) : (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) arr_0 [i_0 - 1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        arr_18 [i_0] [i_0] [i_4] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((arr_5 [i_0 + 4] [i_0 - 2]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) 2679803975901610605LL)) ? (var_8) : (var_5)))));
                        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23128))) : (arr_3 [i_0])))) ? (((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_0 + 2])) : (((((/* implicit */_Bool) -1035597917)) ? (((/* implicit */unsigned int) -1251806942)) : (4257267430U)))));
                    }
                }
                var_21 ^= ((/* implicit */unsigned int) (((+(arr_0 [i_1]))) / (((((/* implicit */_Bool) (unsigned short)8244)) ? (((/* implicit */int) (unsigned short)7332)) : (((/* implicit */int) (short)-31621))))));
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_0] [i_0]))))) | (((arr_14 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 4] [i_0 + 2] [i_0 - 2]))) : (var_3)))));
                arr_19 [(short)13] [(short)13] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (1035597917) : (((/* implicit */int) (unsigned char)31))));
                var_23 = ((/* implicit */unsigned short) (~(var_15)));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)16)) ? (((/* implicit */int) arr_20 [i_5] [i_5])) : (((/* implicit */int) arr_8 [i_5] [(unsigned short)13] [12LL])))), (((((var_7) + (2147483647))) >> (((/* implicit */int) var_19))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)72)), ((~(((/* implicit */int) var_12))))))) : (((arr_3 [i_5]) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        var_26 ^= max((arr_21 [i_5] [i_5]), (((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned char)224))))))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))))), (arr_25 [i_5] [i_6] [i_5] [i_9])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_6] [i_6] [i_8] [i_9]))))) ? (17630884390615359382ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 37699865U)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_12))))) & (arr_1 [i_6])))));
                                var_28 = ((/* implicit */unsigned char) ((_Bool) ((max((var_3), (((/* implicit */long long int) var_12)))) != (((/* implicit */long long int) ((/* implicit */int) (short)29845))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 12; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_29 = (+(((((/* implicit */_Bool) arr_24 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 - 1])) ? (arr_31 [i_10 + 2] [i_10] [i_10 + 2] [i_10] [i_10]) : (((/* implicit */int) var_9)))));
                                var_30 = ((_Bool) ((((/* implicit */_Bool) var_16)) ? ((~(var_13))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))));
                                arr_37 [i_10] [i_10] = (+(var_17));
                            }
                        } 
                    } 
                    var_31 ^= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) 4257267430U)) : (arr_1 [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)11042)) : (((/* implicit */int) (unsigned short)0))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))));
                    arr_38 [i_7] [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_4), (((/* implicit */short) arr_26 [i_5] [i_5] [i_5]))))) | (((/* implicit */int) min((arr_26 [i_5] [i_6] [i_5]), (arr_26 [i_5] [i_5] [i_5]))))));
                }
            } 
        } 
    }
}
