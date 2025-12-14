/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105467
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) (signed char)26);
        arr_3 [(signed char)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) 6815419421393458515LL))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-27))))) ? (((/* implicit */int) ((_Bool) (signed char)26))) : (((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)14540)) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-6)) && (((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)26))))))) * (((/* implicit */int) (signed char)0))));
        var_16 = ((/* implicit */unsigned int) arr_5 [i_1]);
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_17 = (signed char)0;
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                arr_12 [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (arr_8 [i_2 - 1]) : (arr_8 [i_2 - 1])));
                arr_13 [(unsigned short)3] [i_4] = ((/* implicit */long long int) arr_8 [i_4]);
            }
            for (unsigned int i_5 = 4; i_5 < 21; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16LL)) ? (((/* implicit */int) arr_16 [(_Bool)1] [i_5 - 2] [i_2 - 1])) : (((/* implicit */int) (signed char)26))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_5 + 1] [(_Bool)1])) << (((arr_6 [i_5 - 2] [i_2 - 1]) - (1094653225U)))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((arr_7 [i_2 - 1]) & (arr_7 [i_2 - 1])))));
                }
                arr_19 [i_5 - 3] [(_Bool)1] [i_2 - 1] = ((/* implicit */signed char) 16LL);
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_5 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [(short)7]))) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)62)))))));
            }
            /* LoopNest 3 */
            for (signed char i_7 = 4; i_7 < 22; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_27 [i_9] [(signed char)18] [12] [(signed char)4] [i_7 - 4] [i_8] [i_9 - 1] = (~(((/* implicit */int) (unsigned char)84)));
                            arr_28 [i_3] [i_9] [i_7 + 1] [i_7 + 1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [i_2 - 1] [(_Bool)1] [i_7 - 4] [i_9 - 1])) ? (((/* implicit */int) arr_24 [i_8] [i_8] [i_7 - 3] [i_9 - 1])) : (((/* implicit */int) arr_24 [i_9 - 1] [(unsigned short)1] [i_7 - 2] [i_9 - 1]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_10 = 1; i_10 < 21; i_10 += 2) 
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (signed char)127))));
                arr_31 [i_10] [i_3] [i_3] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(2770543980U))))));
            }
            arr_32 [i_2] &= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) arr_11 [i_3] [i_3] [(signed char)20] [i_3])) + (1048568))));
        }
        for (int i_11 = 1; i_11 < 21; i_11 += 3) 
        {
            var_23 |= ((/* implicit */short) ((unsigned long long int) min((529640040), (((/* implicit */int) arr_9 [i_11 + 1])))));
            arr_35 [i_2 - 1] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))), (((((/* implicit */int) (short)31135)) * (((/* implicit */int) arr_9 [i_11 + 1]))))));
        }
        for (signed char i_12 = 2; i_12 < 19; i_12 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_39 [i_12 + 3])) / (((/* implicit */int) arr_39 [i_12 + 3]))))) % (min((arr_22 [i_2 - 1]), (((/* implicit */unsigned long long int) arr_39 [i_12 - 1]))))));
            var_25 = ((/* implicit */signed char) arr_38 [2LL] [i_12] [i_12]);
            var_26 = ((/* implicit */short) ((signed char) max((arr_37 [i_12 + 1] [i_2 - 1]), (((/* implicit */unsigned short) arr_36 [i_2 - 1])))));
            arr_40 [i_2] [(signed char)7] [i_12] = ((/* implicit */unsigned short) (-(min((((((/* implicit */int) (signed char)109)) - (((/* implicit */int) (unsigned char)224)))), (((/* implicit */int) arr_14 [i_2 - 1] [(unsigned char)9] [i_2 - 1] [i_12]))))));
        }
    }
    var_27 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-7)) + (2147483647))) << (((/* implicit */int) (signed char)0))));
}
