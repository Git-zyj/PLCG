/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111749
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((int) var_0)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    var_14 += ((/* implicit */unsigned short) (+(arr_8 [(signed char)13] [i_1] [i_2])));
                    var_15 |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_1] [i_1 + 2])) > (((/* implicit */int) (signed char)124))))), (arr_5 [i_0] [i_0])));
                    arr_9 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                }
            } 
        } 
        arr_10 [0LL] |= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)7599))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
    }
    for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) var_5))));
        var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_3 [i_3] [i_3] [i_3])))));
        arr_13 [i_3] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 1])))) <= (((/* implicit */int) ((2118439936) < (((/* implicit */int) arr_5 [i_3 + 1] [i_3 + 1])))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        var_18 |= ((/* implicit */int) min((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))), (var_12)));
        arr_17 [(signed char)16] = ((/* implicit */unsigned short) (~(((int) ((((/* implicit */unsigned long long int) 0U)) <= (arr_15 [i_4] [i_4]))))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 4) 
    {
        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_5 - 2] [i_5])) ? (((/* implicit */int) (unsigned short)54014)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [i_5] [i_5 - 1]))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_12))))))) ? (8ULL) : (((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [i_5 - 1] [i_5]))) : (var_1)))));
        var_20 -= ((((/* implicit */_Bool) (~(arr_7 [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) 4095)) : (arr_15 [i_5] [i_5 + 1]));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 1) 
        {
            arr_23 [i_5 + 1] [4U] [i_6 + 1] = ((/* implicit */unsigned short) arr_6 [i_6 + 2] [i_5 + 1]);
            var_21 -= ((/* implicit */unsigned short) var_7);
        }
        for (int i_7 = 3; i_7 < 11; i_7 += 2) 
        {
            var_22 &= ((/* implicit */unsigned char) arr_1 [i_5]);
            var_23 *= ((/* implicit */unsigned long long int) ((short) arr_7 [i_5 - 1] [i_5] [i_5 - 1]));
            var_24 |= ((/* implicit */unsigned char) arr_27 [(signed char)2] [i_5] [i_5]);
        }
        for (short i_8 = 4; i_8 < 12; i_8 += 4) 
        {
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (unsigned short)53287))));
            var_26 |= ((/* implicit */signed char) arr_16 [i_5 - 1]);
        }
    }
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : ((+((~(8ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        for (int i_10 = 2; i_10 < 15; i_10 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_11 = 1; i_11 < 15; i_11 += 1) 
                {
                    var_28 += ((/* implicit */short) ((((arr_16 [i_11 - 1]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_9] [i_10]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_9] [i_11 + 2] [i_9])))));
                    arr_38 [i_10] [i_10] = arr_34 [i_10] [i_10];
                    var_29 = ((/* implicit */signed char) arr_7 [i_9] [i_10] [i_11]);
                    arr_39 [i_9] [i_9] [i_11] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39372))) : (arr_34 [i_9] [i_9]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) max((arr_0 [11] [i_9]), (arr_2 [i_10] [i_11])))))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_12 = 0; i_12 < 17; i_12 += 3) 
                {
                    arr_44 [i_9] [i_10] [i_12] [i_9] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4015816825U)) ? (((/* implicit */int) arr_5 [i_9] [(signed char)8])) : (((/* implicit */int) ((signed char) arr_41 [i_9] [i_9] [i_10 - 2])))));
                    var_30 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9] [i_10] [i_12])) ? (var_5) : (((/* implicit */int) (unsigned short)45815))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_2 [11] [11]))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_43 [i_10 - 1] [i_10 + 2] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-50))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_3 [i_9] [i_10 + 1] [(signed char)18])))));
                }
                var_31 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_10 + 2] [i_10 - 1]))));
            }
        } 
    } 
}
