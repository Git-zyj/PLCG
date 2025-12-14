/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133617
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((1098618996200887134LL) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_2 [(unsigned char)11] = ((/* implicit */unsigned char) var_0);
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2294937084U) + (3131735548U)))) ? (4294967281U) : (((/* implicit */unsigned int) (((_Bool)0) ? (var_10) : (((/* implicit */int) (_Bool)1)))))));
        var_14 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1098618996200887134LL)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)0)) : (var_10))) : ((+(((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-12541)) % (((/* implicit */int) arr_1 [i_0]))))) : (arr_3 [i_0])));
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)0]))) : (((((-1LL) + (9223372036854775807LL))) >> (((var_4) + (272594845862182431LL)))))));
            var_16 = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) / (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_8) : (var_8))));
        }
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_17 -= ((/* implicit */short) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775786LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_18 += ((/* implicit */short) var_5);
                    var_19 = ((/* implicit */unsigned char) min((var_1), (((/* implicit */unsigned long long int) max((arr_10 [i_3]), (((/* implicit */long long int) ((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_12 [i_2] [(_Bool)1])))))))));
                }
            } 
        } 
        arr_15 [i_2] = ((/* implicit */unsigned int) 3429078153178483669ULL);
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
        {
            var_20 *= ((/* implicit */unsigned char) arr_13 [i_2] [i_5]);
            arr_18 [(unsigned char)18] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_6);
        }
        for (short i_6 = 0; i_6 < 21; i_6 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_4), (2305843009213693952LL)));
            var_22 = ((/* implicit */long long int) min((var_22), (min(((((_Bool)0) ? (arr_8 [i_2] [i_6]) : (arr_8 [i_2] [(unsigned short)0]))), (((((/* implicit */_Bool) arr_8 [(short)2] [i_6])) ? (arr_8 [i_2] [i_6]) : (arr_8 [i_6] [i_2])))))));
            arr_21 [(_Bool)1] [i_6] [(unsigned char)2] |= ((/* implicit */unsigned char) var_8);
        }
    }
    var_23 = ((/* implicit */unsigned char) (((+(((893275833641666059ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_9)))) ? (max((((/* implicit */long long int) 1104394907U)), (var_8))) : (((/* implicit */long long int) 251464104U)))))));
}
