/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136546
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
    var_17 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) << (((((/* implicit */int) var_1)) - (36301)))))) ? (max((var_16), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((int) arr_1 [i_0 - 1]))));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            var_18 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [(unsigned char)4] [i_0 + 1] [(unsigned char)4])))) % ((+(arr_4 [10LL] [i_0 - 2] [10LL])))));
            arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) <= (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_4 [i_0 - 2] [i_0 - 2] [i_0]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (short)-8500)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_4 [i_0 - 3] [i_0 - 3] [i_0]))));
                var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
            }
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            var_20 = ((/* implicit */signed char) var_13);
            /* LoopSeq 2 */
            for (signed char i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                var_21 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8500)) ? (arr_4 [0LL] [(_Bool)1] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-8500)) : (((/* implicit */int) arr_11 [i_0 - 2] [(short)8])))) : (((/* implicit */int) var_1)));
                var_22 = ((/* implicit */int) ((unsigned short) arr_3 [i_0 - 2] [i_0 - 2]));
                arr_15 [i_0] [i_3] [i_0] = ((/* implicit */signed char) (~(arr_14 [i_0 + 1] [i_0 + 1] [i_3 + 1] [i_4 - 1])));
            }
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 3; i_6 < 15; i_6 += 4) 
                {
                    var_23 -= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5] [i_0 + 1] [3ULL]))) / (var_2)));
                    var_24 = ((/* implicit */unsigned int) arr_4 [i_0 - 2] [i_0 - 2] [i_0]);
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)8500)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_5] [3])))) & (((/* implicit */int) arr_1 [i_6]))));
                }
                for (long long int i_7 = 3; i_7 < 13; i_7 += 2) 
                {
                    var_26 = var_16;
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        arr_27 [i_0 + 1] [i_0] [i_5] [i_7] [i_8 - 1] [i_8] = ((/* implicit */unsigned char) ((arr_20 [i_0] [i_0] [i_0 - 1] [i_7]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_20 [i_7] [i_0] [i_0 - 2] [(unsigned char)10]))));
                        arr_28 [i_7 + 1] [i_0] [i_7 + 1] [i_7 + 1] [i_0] = ((/* implicit */unsigned char) var_16);
                        arr_29 [i_8] [i_8] [i_8] [i_5] [i_8] [i_8] [(unsigned short)14] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-8473)))))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 14; i_9 += 4) 
                    {
                        arr_34 [i_0 + 1] [(unsigned short)12] [i_0] [i_7 - 2] [i_0] [i_7 - 2] = ((/* implicit */signed char) ((int) arr_30 [i_7 - 2] [i_7 - 2] [i_7 + 2] [i_7 + 3] [i_7 + 2] [i_7 - 1]));
                        var_27 ^= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)18704))));
                    }
                    var_28 += ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) var_6)))));
                }
                for (unsigned char i_10 = 1; i_10 < 15; i_10 += 1) 
                {
                    var_29 = ((/* implicit */unsigned long long int) (-(var_16)));
                    arr_37 [i_0] [i_0] = var_11;
                }
                arr_38 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 1787838350568092024LL);
                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_3 + 1] [i_0 - 3])) : (((/* implicit */int) var_0))));
            }
        }
        arr_39 [i_0] = ((/* implicit */unsigned char) var_3);
    }
}
