/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157423
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
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_4);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            arr_8 [i_1 - 3] [i_1 - 3] [6LL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_7 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (var_2)))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                arr_11 [i_0] [i_1 - 2] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */short) ((unsigned char) arr_1 [i_0 + 1]))), (arr_3 [i_1])));
                var_14 += ((/* implicit */_Bool) ((signed char) arr_5 [i_0] [i_0 + 1] [i_0]));
            }
            for (unsigned int i_3 = 4; i_3 < 12; i_3 += 3) 
            {
                arr_14 [4U] [5U] [i_1] [12LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_0)))))));
                arr_15 [i_0 - 1] [i_1] [i_1] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (short)-17376)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (short)-1)))));
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 9; i_4 += 1) 
                {
                    for (unsigned char i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */short) var_10);
                            var_16 = ((/* implicit */unsigned short) ((min((max((((/* implicit */long long int) arr_0 [7ULL] [7ULL])), (var_7))), (((/* implicit */long long int) arr_2 [5LL] [i_4 + 4])))) <= (((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_0))) * ((-(((/* implicit */int) var_9)))))))));
                        }
                    } 
                } 
            }
            var_17 = ((/* implicit */short) ((((((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))) | (min((var_7), (((/* implicit */long long int) arr_18 [i_1] [(unsigned short)10] [i_1] [(signed char)3])))))) + (9223372036854775807LL))) << (((/* implicit */int) ((short) ((var_8) < (var_8)))))));
        }
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_23 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) (~(526699257U))))))) & (((/* implicit */int) var_3))));
            arr_24 [i_6] [i_6] [3U] = var_8;
        }
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_17 [i_0 - 1] [i_0 - 2] [i_0 + 2] [i_0 + 2])))) ? (((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) (unsigned char)121)), (13904638004244337595ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) != (var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        arr_25 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) max((((/* implicit */short) arr_20 [i_0] [0ULL] [(unsigned char)2] [i_0] [i_0])), (var_0)))) <= (((/* implicit */int) var_6)))) ? ((-(((/* implicit */int) var_5)))) : ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) != (arr_7 [i_0]))))))));
    }
    var_19 += ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) (short)-17376))))), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7)))))));
    /* LoopSeq 1 */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        arr_29 [i_7] = ((/* implicit */long long int) var_10);
        arr_30 [i_7] = ((/* implicit */unsigned int) (+(var_1)));
        arr_31 [i_7] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_27 [i_7])) ? (1655866457U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_7])))))));
    }
    var_20 = ((/* implicit */short) min((var_1), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)242)))))));
}
