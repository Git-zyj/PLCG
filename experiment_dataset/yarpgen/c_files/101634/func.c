/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101634
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
    var_14 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
        {
            var_16 &= ((/* implicit */_Bool) arr_0 [i_0] [12U]);
            var_17 ^= ((((/* implicit */_Bool) max(((unsigned char)62), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [0U] [2U] [i_1])) ? (arr_2 [(unsigned char)8]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0 + 1] [i_0]))))) : (arr_2 [3]));
            var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 2097151U)))) ? (((((/* implicit */_Bool) min((((/* implicit */int) (short)(-32767 - 1))), (arr_6 [i_0] [i_1])))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)26))))))) : (max((((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [7])) : (((/* implicit */int) arr_0 [i_1] [i_1])))), (arr_6 [i_0 - 1] [i_1])))));
            var_19 = ((/* implicit */_Bool) arr_1 [(_Bool)1]);
            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))));
        }
        for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            arr_11 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(unsigned char)2] [(unsigned char)10] [(unsigned char)12])) ? (((/* implicit */int) arr_7 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_2])))))));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_1 [i_0]))));
        }
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
        {
            var_22 = ((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (arr_12 [i_0] [(unsigned char)12] [(unsigned char)12]) : ((~(arr_6 [i_0] [i_0]))))) : ((+((~(arr_12 [i_0 + 1] [i_0] [(short)11]))))));
            var_23 = ((/* implicit */unsigned short) arr_2 [i_0]);
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 4; i_4 < 12; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) arr_13 [i_0] [i_0]);
            var_25 = ((/* implicit */unsigned char) arr_0 [(unsigned short)8] [i_4]);
        }
        var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (arr_14 [i_0] [i_0])));
        var_27 = ((/* implicit */unsigned long long int) arr_15 [i_0]);
    }
    for (unsigned int i_5 = 2; i_5 < 21; i_5 += 2) 
    {
        var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_17 [i_5]) : (min((max((arr_17 [i_5 - 2]), (arr_17 [(unsigned char)2]))), (arr_17 [i_5])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (18ULL) : (1116383808134673949ULL)))) ? (((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_5 + 1])) ? (((/* implicit */unsigned int) arr_19 [i_5])) : (arr_17 [i_5]))) : (((/* implicit */unsigned int) arr_20 [i_5] [i_6 + 1] [i_6])));
            arr_21 [i_5] [i_5 - 2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_17 [i_5])) ? (arr_20 [i_5] [(_Bool)1] [i_5]) : (arr_19 [i_5])))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 2) 
        {
            var_30 = (-(arr_23 [i_5] [i_5] [i_5]));
            arr_24 [i_5] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_5])), (arr_23 [i_5 - 2] [i_5 - 2] [(unsigned char)6])));
        }
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) max(((~((+(arr_23 [i_5] [i_8] [(unsigned char)12]))))), (((/* implicit */unsigned long long int) arr_19 [i_5]))));
            var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_17 [i_8]), (arr_17 [i_8])))) ? (((/* implicit */int) arr_22 [(unsigned short)11] [(unsigned short)11] [(unsigned short)11])) : (arr_20 [i_5] [(unsigned char)11] [i_5])))) ? (arr_17 [i_8]) : (arr_17 [i_5])));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [(short)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30082))) : (10ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned char)102)) ? (arr_18 [i_5] [(unsigned char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9])))))))) ? (17330360265574877692ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32512)))));
            var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(-1624878396))))));
            arr_31 [i_5 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) (_Bool)1)) : (462550536)));
        }
    }
}
