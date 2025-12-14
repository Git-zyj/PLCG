/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185499
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
    var_17 = ((/* implicit */unsigned short) max((var_2), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) var_3)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))))));
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) 5542007487147969524LL))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((arr_1 [i_0] [i_0 + 1]), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) (short)-2743)) ? (((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (short)2743))) : (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 + 2])) ? (arr_1 [i_0 - 2] [i_0 + 2]) : (arr_1 [i_0] [i_0 + 1])))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) (~(((arr_2 [i_1] [i_1]) / (((/* implicit */int) arr_3 [16LL]))))));
        var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((((/* implicit */_Bool) (short)2736)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */int) arr_3 [(short)6])))) : ((~(((/* implicit */int) (unsigned short)65535))))))), (arr_6 [i_1] [i_1])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
        {
            var_22 += ((/* implicit */unsigned long long int) (short)2728);
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_3 [18LL]))))) * (((/* implicit */int) arr_8 [i_1] [i_2] [i_2]))));
        }
        for (unsigned char i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_11 [i_1] [i_1]))));
            var_24 = ((/* implicit */_Bool) min((arr_14 [i_1] [i_3] [3U]), (((/* implicit */unsigned long long int) (~(arr_11 [i_1] [i_1]))))));
        }
        /* LoopSeq 3 */
        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            arr_17 [i_1] [i_4 - 1] = ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_4 + 1]);
            arr_18 [i_1] [i_4] [i_4] &= ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) min((arr_1 [i_1] [15U]), (((/* implicit */long long int) arr_13 [i_1] [i_4]))))))), (arr_8 [i_1] [i_4 - 1] [i_4])));
            arr_19 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-2743))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)6]))) : (arr_1 [i_1] [i_1])))))) + (arr_14 [i_1] [i_1] [i_4])));
            var_25 = ((/* implicit */int) arr_9 [10U] [i_4] [i_4]);
        }
        for (int i_5 = 1; i_5 < 17; i_5 += 3) /* same iter space */
        {
            arr_24 [i_1] [i_5 + 1] = ((((((/* implicit */_Bool) min((arr_11 [i_1] [i_5 + 1]), (((/* implicit */unsigned int) arr_5 [i_1] [i_5 - 1]))))) || (((((/* implicit */int) arr_22 [i_1] [i_5 - 1])) == (((/* implicit */int) arr_3 [(unsigned short)18])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_5])) ? (arr_1 [i_1] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-2743)))))) ? (((/* implicit */int) (short)2722)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max(((short)-2746), ((short)2746)))));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)2742)) ? (((((/* implicit */_Bool) max((4546690425623036012ULL), (((/* implicit */unsigned long long int) arr_12 [i_1]))))) ? (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_15 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2746))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-2722)) + (((((/* implicit */_Bool) arr_6 [i_1] [i_5 - 1])) ? (((/* implicit */int) (short)2745)) : (arr_16 [i_1] [i_5])))))))))));
        }
        for (int i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
        {
            var_27 |= (short)-2721;
            var_28 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_15 [i_6] [i_6 - 1] [i_1])))) ? (((/* implicit */int) min(((short)2732), ((short)-2743)))) : ((+(((/* implicit */int) arr_27 [i_1]))))))) > (min((((/* implicit */long long int) ((arr_28 [i_1] [i_6] [i_1]) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_0 [(_Bool)1]))))), (((((/* implicit */_Bool) arr_3 [4U])) ? (arr_1 [i_6] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_1] [i_1] [i_1])))))))));
        }
        var_29 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_25 [(unsigned char)16] [(unsigned char)16])) + (2147483647))) << (((((((/* implicit */int) (short)-2743)) + (2767))) - (24)))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_32 [i_7] [i_7] = (!(((/* implicit */_Bool) arr_2 [i_7] [i_7])));
        var_30 = ((/* implicit */short) arr_11 [i_7] [i_7]);
        var_31 ^= ((/* implicit */short) (+(((/* implicit */int) (short)2746))));
        var_32 = ((/* implicit */unsigned short) min(((-(arr_26 [i_7] [i_7] [i_7]))), (min((arr_26 [i_7] [i_7] [i_7]), (arr_26 [i_7] [i_7] [9])))));
    }
    var_33 = ((/* implicit */unsigned short) var_10);
}
