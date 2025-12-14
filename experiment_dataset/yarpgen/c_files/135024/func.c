/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135024
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_0] [i_0])))))));
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1]);
        arr_6 [(_Bool)1] = ((/* implicit */unsigned char) arr_3 [i_1]);
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_3)))) ^ (((long long int) (_Bool)1))));
            var_14 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_3 [i_1])) ^ (((/* implicit */int) var_6)))));
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((short) arr_7 [i_2] [i_1])))));
            var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_7 [i_1] [i_1])));
        }
        for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_17 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_8 [i_1] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)3))))) : (((/* implicit */int) (unsigned short)50792))));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                var_18 ^= ((/* implicit */unsigned long long int) var_10);
                var_19 += ((/* implicit */short) ((arr_8 [i_1] [i_3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_1])))));
                var_20 ^= ((/* implicit */unsigned int) arr_9 [i_1]);
                var_21 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)14743)) % (((/* implicit */int) (unsigned short)50792)))))));
                var_22 -= ((/* implicit */unsigned short) arr_8 [i_1] [i_4]);
            }
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))) ^ (var_9))))));
                var_24 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_11 [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_5])) + (25597)))));
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) 3678415136U)) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) (unsigned short)14)))))));
                /* LoopNest 2 */
                for (signed char i_6 = 1; i_6 < 23; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        {
                            arr_22 [i_7] [i_3] [i_5] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_7] [i_7 + 1] [i_7 + 3] [i_6] [i_6 - 1] [i_7])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_7])))) : (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned short)9536))))));
                            var_26 = ((/* implicit */unsigned int) var_8);
                        }
                    } 
                } 
                var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [23LL] [i_5] [i_5])) ? (((/* implicit */int) arr_16 [i_1] [(short)21] [i_1] [i_5])) : (((/* implicit */int) arr_15 [i_1] [i_3] [i_5]))))) ? (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_19 [i_1] [i_3])))));
            }
        }
        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            var_28 *= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)25)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8] [i_1]))) : (var_4))));
            arr_26 [i_8] [i_8] = ((/* implicit */int) ((unsigned int) arr_4 [i_8]));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    {
                        var_29 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_1])) >= (((/* implicit */int) arr_15 [i_1] [i_8] [i_1]))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (+(65535))))));
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_1] [i_8] [i_8])) ? (((/* implicit */int) arr_15 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_1]))));
                    }
                } 
            } 
        }
    }
    for (short i_11 = 1; i_11 < 15; i_11 += 3) 
    {
        var_32 ^= ((/* implicit */unsigned char) ((((max((((/* implicit */unsigned long long int) arr_7 [i_11] [i_11])), (arr_8 [i_11] [i_11]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_11]))))) ? (((((/* implicit */_Bool) ((unsigned char) arr_28 [i_11] [i_11] [i_11]))) ? (var_2) : ((-(4175904075228316208ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_15 [i_11 - 1] [i_11] [i_11])) ? (((/* implicit */int) (unsigned short)16405)) : (((/* implicit */int) arr_3 [i_11 + 1])))) % (((/* implicit */int) arr_9 [i_11])))))));
        arr_35 [i_11] = ((/* implicit */unsigned long long int) (((-(arr_4 [i_11 - 1]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -647151544452724421LL)) ? (((/* implicit */long long int) var_1)) : (var_0)))) ? (((((/* implicit */_Bool) (unsigned short)50813)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_6)))))));
    }
    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
    {
        arr_38 [i_12] = ((/* implicit */signed char) max((max((arr_13 [i_12]), (((/* implicit */short) arr_24 [i_12] [i_12])))), (arr_2 [i_12] [i_12])));
        arr_39 [i_12] [i_12] = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) 35332771U))) & (((11975099558904094244ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_12] [i_12]))))))));
        arr_40 [i_12] = ((/* implicit */short) arr_8 [i_12] [i_12]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_13 = 4; i_13 < 18; i_13 += 2) 
    {
        var_33 ^= ((/* implicit */short) ((unsigned long long int) ((arr_18 [i_13] [i_13 + 1] [i_13] [i_13] [24] [i_13 - 1]) ? (arr_0 [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_13 - 2] [i_13]))))));
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) arr_48 [i_13] [i_13]);
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_13 - 4] [i_13 - 4])))))));
                }
            } 
        } 
    }
    var_36 -= ((/* implicit */long long int) var_4);
    var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_10)))))))));
    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)233)) != (((/* implicit */int) var_10)))))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) / (((((/* implicit */_Bool) var_2)) ? (var_2) : (11975099558904094244ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) (unsigned short)14738)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))) : (-5922137528003825825LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
}
