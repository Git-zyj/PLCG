/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119821
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_13 *= (((!(((/* implicit */_Bool) 3083292768215625270LL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? ((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))) : (((int) arr_1 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))));
                    var_14 = ((/* implicit */int) max((5821012271941867744ULL), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
                    arr_6 [i_2] [i_2] [i_1] = ((/* implicit */short) (~(arr_0 [i_1])));
                    var_15 = ((/* implicit */signed char) arr_1 [i_1]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? ((-(var_12))) : (((/* implicit */int) var_1))))) / (((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (589209861) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14947))) : (1435168125U)));
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
        {
            arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_4])) ? (arr_13 [i_3]) : (arr_13 [i_3])));
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)5291)) : (((/* implicit */int) (_Bool)1))));
        }
        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 3) 
        {
            arr_20 [i_5] = ((/* implicit */unsigned long long int) (~(((arr_16 [i_3] [i_5] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3])))))));
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_9)));
        }
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            arr_25 [i_6] = (_Bool)0;
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_0)));
            var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(-6LL)))) ? (((/* implicit */int) arr_23 [i_6])) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_23 [i_3])) : (((/* implicit */int) arr_23 [(unsigned short)3]))))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 2) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_9 + 3])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9 - 1])))));
                        arr_35 [i_3] [i_9] [i_3] [i_9] [i_8] = arr_26 [2ULL];
                        arr_36 [i_3] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_34 [i_7] [i_9 + 2] [i_8] [i_3] [i_3] [6U])) & (arr_32 [i_8] [i_9 + 1] [i_8] [i_9 + 1])));
                    }
                } 
            } 
            arr_37 [i_3] [i_7] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_3] [5LL] [i_3])) ? (arr_30 [i_3] [i_3] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) > (5449529400577964300ULL)));
        }
        arr_38 [i_3] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))));
    }
    var_22 *= ((((((/* implicit */_Bool) var_4)) ? (-120018100) : (var_12))) <= (((/* implicit */int) var_8)));
}
