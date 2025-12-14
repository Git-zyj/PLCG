/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185136
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_7))));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((((/* implicit */_Bool) 7020921443970611992ULL)) ? (11425822629738939616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29373))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))))))))));
        var_15 &= ((/* implicit */_Bool) ((unsigned char) max((arr_2 [i_0]), (((/* implicit */signed char) var_7)))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            var_16 ^= ((/* implicit */unsigned int) (~(max((18376467981267764598ULL), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) arr_2 [i_1])))))))));
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) var_1))));
            var_18 = ((/* implicit */unsigned short) 7020921443970612011ULL);
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) -3758953038062295588LL))));
        }
        for (unsigned short i_3 = 3; i_3 < 10; i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) max((((unsigned long long int) arr_19 [i_6] [i_6 - 3] [i_6] [i_6] [i_6] [i_6 + 1])), ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [(unsigned short)11] [(unsigned short)1] [(_Bool)1]))) : (6412110113392865705ULL))))))))));
                            var_21 *= ((/* implicit */unsigned int) arr_8 [i_4]);
                            var_22 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) arr_14 [i_3 + 3] [i_3 + 3] [i_1])) <= (((/* implicit */int) arr_14 [i_3 + 1] [i_3 - 2] [i_1])))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_6])) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_18 [i_3 + 2] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_4])) : (((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                for (signed char i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_24 *= ((/* implicit */unsigned short) (_Bool)1);
                            var_25 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4890))) : (var_0)))) ? (((/* implicit */int) min((((/* implicit */signed char) arr_19 [i_9] [i_9] [i_1] [i_1] [i_1] [i_1])), (arr_12 [i_3])))) : (((/* implicit */int) arr_18 [i_1] [i_3] [i_1] [i_3 - 2] [i_1]))))), (((((/* implicit */_Bool) (+(arr_23 [i_1] [i_1] [i_3 + 1] [i_7] [i_8] [i_9])))) ? ((+(7020921443970611999ULL))) : (((/* implicit */unsigned long long int) (+(var_9)))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) min(((short)29366), (((/* implicit */short) arr_14 [i_9] [i_7] [i_1]))))) | (((((/* implicit */int) (unsigned short)61509)) + (((/* implicit */int) arr_14 [i_3] [i_7] [i_1]))))));
                        }
                    } 
                } 
            } 
            arr_29 [i_1] [12LL] |= ((/* implicit */_Bool) min((var_2), ((~(min((((/* implicit */long long int) (_Bool)1)), (arr_23 [(short)4] [i_1] [(short)4] [(short)4] [i_3] [(unsigned short)6])))))));
            arr_30 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) ((unsigned short) var_3))))));
            var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((arr_27 [i_1] [i_3 - 1] [i_3] [(unsigned char)8] [i_3] [i_1]) - (1844624514U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -3758953038062295591LL))))) : (((/* implicit */int) (unsigned char)234))));
        }
        for (unsigned short i_10 = 3; i_10 < 10; i_10 += 1) /* same iter space */
        {
            arr_34 [i_10] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_10] [i_1])) ? (((((/* implicit */_Bool) arr_12 [i_1])) ? (((/* implicit */long long int) ((unsigned int) arr_28 [i_10] [i_1] [i_1] [i_10 - 2] [i_1] [i_1] [i_1]))) : (min((((/* implicit */long long int) (_Bool)1)), (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            arr_35 [i_1] [(unsigned short)6] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)34314)), (min((min((var_6), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) arr_13 [12LL] [i_10 - 2] [10LL]))))));
        }
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_11)) - (((var_2) - (var_3))))) / (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
            arr_39 [i_1] = min((((/* implicit */unsigned short) var_7)), ((unsigned short)16383));
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((arr_19 [i_11] [(unsigned char)9] [i_1] [i_1] [(unsigned char)9] [i_1]) || (arr_19 [i_11] [i_11] [i_11] [i_1] [i_1] [i_1]))) && (((/* implicit */_Bool) ((unsigned long long int) (short)511))))))));
        }
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) arr_7 [i_1]))));
        arr_40 [i_1] [i_1] = ((/* implicit */unsigned short) var_2);
        var_31 += ((/* implicit */unsigned long long int) ((_Bool) (((~(((/* implicit */int) var_1)))) == (((/* implicit */int) arr_5 [4ULL])))));
    }
    var_32 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-29373))) < (((((long long int) var_3)) & (((/* implicit */long long int) ((/* implicit */int) (short)-2104)))))));
    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) var_1))));
}
