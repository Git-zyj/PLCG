/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114141
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) 1447251482U)) ? (1240105966935187213ULL) : (((/* implicit */unsigned long long int) min((2847715814U), (2087242467U)))))) - (1240105966935187204ULL)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(unsigned short)3] [(short)11] = ((/* implicit */short) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1447251482U)) ? (1447251479U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3 + 2] [i_3] [(short)7] [i_3 + 1])))));
                                var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_2] [(unsigned char)4] [8LL])) ? ((+(((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) ((var_4) > (((/* implicit */unsigned long long int) var_10)))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [0]))) : (arr_1 [i_2])));
                    var_16 *= ((/* implicit */unsigned int) -4444734514888319237LL);
                    arr_16 [8U] [i_1] [i_1] = ((/* implicit */long long int) arr_12 [i_0]);
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned int) ((long long int) arr_9 [i_0] [(unsigned char)6] [i_0] [i_0]));
    }
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */unsigned short) var_11);
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) == (((unsigned int) var_5))))) >= (((/* implicit */int) (unsigned short)34229))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)26))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_5])) & (((/* implicit */int) arr_20 [i_5]))))) ? (((/* implicit */int) arr_19 [i_5])) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)-5424)) : (((/* implicit */int) (unsigned short)9049)))))) : (((/* implicit */int) min((arr_18 [i_5]), (arr_18 [i_5]))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 += min((max((((/* implicit */int) (unsigned short)44068)), (((((-609898732) + (2147483647))) >> (((arr_22 [i_5]) - (1897388189))))))), (((/* implicit */int) (unsigned short)46895)));
                    arr_26 [i_7] [i_6] [i_6] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_7] [i_7] [i_7] [i_5]))));
                    arr_27 [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_24 [i_5] [i_5] [i_6] [i_7])) : (((/* implicit */int) (unsigned short)36566)))))) / ((+((~(var_10)))))));
                }
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
    {
        var_20 *= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_8])) ? (2207724828U) : (2031071981U)))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_8]))))))));
        var_21 *= ((/* implicit */unsigned char) (~(((unsigned int) ((1240105966935187213ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_8] [i_8]))))))));
        arr_30 [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (5527603559846336305LL) : (var_12)))) ? (-4444734514888319237LL) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_8])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36560))) : (((((/* implicit */_Bool) arr_29 [i_8])) ? (((unsigned long long int) (unsigned short)31310)) : (((/* implicit */unsigned long long int) ((-1905748597) ^ (((/* implicit */int) arr_29 [i_8])))))))));
        arr_31 [i_8] [i_8] = ((/* implicit */_Bool) (+(((var_4) << (((/* implicit */int) (unsigned char)50))))));
        arr_32 [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 4; i_9 < 15; i_9 += 1) 
    {
        var_22 = ((/* implicit */long long int) arr_29 [i_9 - 3]);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            for (long long int i_11 = 2; i_11 < 16; i_11 += 1) 
            {
                for (long long int i_12 = 4; i_12 < 14; i_12 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_9 - 4])) & (((/* implicit */int) arr_37 [i_12 - 4] [i_12] [i_12]))));
                        var_24 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_9] [i_9] [i_9] [i_9 + 2] [i_9]))));
                        var_25 ^= ((/* implicit */unsigned short) (-(var_12)));
                        arr_43 [i_10] [i_10] [i_11] [i_12] [15] = ((/* implicit */unsigned short) ((arr_40 [8U] [i_9 + 1] [1LL] [i_10]) / (arr_40 [13] [i_10] [i_11] [i_10])));
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */long long int) min((var_26), (var_12)));
}
