/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155618
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(var_16)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (-1)))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) (short)23243)))))));
        var_21 = ((((/* implicit */_Bool) var_15)) ? ((-(arr_4 [i_1] [i_1]))) : ((-(arr_4 [i_1] [i_1]))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 + 1])) ? (0) : (arr_4 [i_2 + 2] [i_2 - 1])));
        arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2 + 2])) | (((/* implicit */int) (short)-31929))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            var_23 *= ((/* implicit */short) arr_5 [i_2 + 1] [i_2]);
            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_11 [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_11 [i_2 + 2] [i_2 - 1]))));
            arr_13 [i_3] [i_2] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10043814889948514775ULL)) ? (((/* implicit */int) arr_0 [i_2 + 2])) : (arr_9 [i_2 + 1])));
            arr_14 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2 + 2])) ? (var_3) : (arr_5 [i_2 + 2] [i_2 - 1])));
        }
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            var_25 = ((/* implicit */int) ((((var_14) | (((/* implicit */unsigned long long int) arr_5 [(short)3] [(short)3])))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_2 - 1])))));
            var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_9 [i_4 + 1]) : (arr_9 [i_4 + 2])));
            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned char)33)))))));
            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)125)) <= (arr_5 [i_2 - 1] [i_4 + 1]))))));
        }
        for (signed char i_5 = 1; i_5 < 11; i_5 += 2) 
        {
            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
            var_30 *= ((/* implicit */signed char) var_12);
        }
    }
    for (unsigned short i_6 = 3; i_6 < 24; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_6]))) > (max((((((/* implicit */_Bool) 1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5825))) : (var_17))), (((/* implicit */unsigned long long int) var_3))))));
        var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_6 - 1] [i_6])) ? (((/* implicit */int) arr_23 [i_6 + 1] [i_6 - 1])) : (((/* implicit */int) arr_23 [i_6 + 1] [i_6]))))) % (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (8402929183761036841ULL)))));
        var_32 = ((/* implicit */int) (signed char)-16);
        var_33 = arr_23 [i_6 - 3] [i_6 + 1];
    }
    var_34 = ((/* implicit */int) min((var_34), ((-(var_5)))));
    var_35 = ((/* implicit */signed char) var_16);
    var_36 = var_4;
}
