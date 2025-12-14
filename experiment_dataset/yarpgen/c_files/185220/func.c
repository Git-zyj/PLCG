/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185220
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_2);
        var_20 = (signed char)6;
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_15))));
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) arr_0 [i_1] [i_1]))) : (((/* implicit */int) (unsigned short)45292))));
        var_21 = ((/* implicit */unsigned int) var_7);
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 3])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) (+(-5846903044851698339LL)))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 2])))))));
        arr_8 [i_1 - 2] = ((/* implicit */int) var_1);
    }
    for (signed char i_2 = 3; i_2 < 18; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */short) max((var_10), (((/* implicit */unsigned short) arr_3 [i_2 - 2] [i_2 + 2]))));
        arr_12 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_10 [i_2 - 2] [i_2 + 2]) ? (((/* implicit */int) arr_10 [i_2] [i_2 + 1])) : (((/* implicit */int) arr_10 [i_2 + 2] [i_2 - 3])))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            arr_15 [i_2] [17] [i_2] = ((/* implicit */unsigned short) (_Bool)1);
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                var_22 = ((/* implicit */long long int) var_15);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    arr_21 [i_2] = ((/* implicit */signed char) arr_14 [i_2] [i_2]);
                    arr_22 [12ULL] [12ULL] [i_2] [12ULL] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned long long int) 795553591)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
                }
            }
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_7 = 3; i_7 < 18; i_7 += 2) 
            {
                /* LoopSeq 2 */
                for (signed char i_8 = 2; i_8 < 19; i_8 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [(unsigned short)19] [i_2])) && (((/* implicit */_Bool) ((short) arr_14 [i_7] [i_8])))));
                    arr_30 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (unsigned short)21131))) ? (((long long int) arr_16 [3U])) : (((/* implicit */long long int) (~(((/* implicit */int) var_17)))))));
                }
                for (signed char i_9 = 2; i_9 < 19; i_9 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_9] [i_7] [i_6] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_18 [i_9] [i_7] [i_6] [0ULL] [0ULL])) ? (((/* implicit */unsigned long long int) var_3)) : (2097151ULL))) : (((/* implicit */unsigned long long int) var_5))));
                    var_25 = ((/* implicit */short) ((_Bool) arr_18 [i_2] [i_6] [i_7] [(signed char)6] [i_9]));
                }
                arr_34 [0U] [0U] [i_7] [i_2] = ((/* implicit */unsigned long long int) var_1);
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((long long int) arr_26 [i_2 + 1] [i_2 + 2])))));
                    arr_38 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5846903044851698336LL)) ? (((/* implicit */int) var_19)) : (arr_36 [i_2] [i_6] [i_7] [i_10])))) ? (((((/* implicit */_Bool) arr_29 [i_10] [i_7] [i_6])) ? (var_9) : (arr_29 [4U] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_31 [i_2] [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_32 [i_10] [(unsigned short)16] [i_6] [(unsigned short)16] [16LL])))))));
                }
                arr_39 [i_2] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (-820884671) : (-352977119)));
            }
            arr_40 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1]))) : (arr_16 [i_2 - 2])));
            var_27 -= ((/* implicit */unsigned int) ((unsigned short) var_6));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 4) 
        {
            var_28 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_19 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [(unsigned short)8]))) ? (arr_41 [i_11 - 3] [i_11 - 3] [i_11 + 3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_14))))));
            arr_45 [i_2] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_43 [i_11 + 2] [i_2 + 1])) + (((/* implicit */int) arr_1 [i_2 - 1]))));
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_11])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_2] [i_2] [(unsigned short)13])) : (((/* implicit */int) (unsigned char)11)))) : (arr_36 [i_2] [i_2] [i_11 + 3] [i_11])));
            arr_46 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_29 [i_2] [i_2] [i_2]);
        }
        arr_47 [i_2] = ((/* implicit */unsigned short) var_14);
    }
    var_30 ^= ((/* implicit */signed char) var_3);
}
