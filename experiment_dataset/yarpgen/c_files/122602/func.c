/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122602
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
    var_18 = var_12;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) & (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)38))))))))));
        var_20 -= (signed char)-39;
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_21 ^= ((/* implicit */signed char) var_12);
                        arr_13 [i_0] [i_3] [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_0] [i_3]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [(unsigned short)1] [(unsigned short)1] [i_2] [(unsigned short)1] [i_2])) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (max((((/* implicit */int) var_4)), (262143)))))) : (min((min((arr_2 [i_0]), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [(short)12] [i_0]))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    var_22 *= (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_4] [i_5]))))));
                    var_23 = ((/* implicit */long long int) arr_7 [i_5]);
                    var_24 ^= ((/* implicit */short) ((var_9) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_7)))))));
                    arr_18 [i_5] [(signed char)2] [i_5] [i_4] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_0] [i_0]))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))) : (((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [i_0])) - (var_7)))) + ((-(var_13)))))));
                    var_25 = ((/* implicit */int) min((var_25), ((((~(arr_7 [i_0]))) >> (((max((((/* implicit */int) arr_15 [i_0] [i_0])), (arr_7 [i_0]))) - (41571)))))));
                }
            } 
        } 
    }
    for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((4081123604U) | (min((((/* implicit */unsigned int) (short)11296)), (arr_19 [(unsigned char)11])))))) ? (((/* implicit */long long int) ((arr_19 [i_6]) * (arr_19 [i_6])))) : (max((((/* implicit */long long int) (unsigned char)4)), (var_5)))));
        arr_22 [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_20 [i_6])) >> (((((/* implicit */int) var_8)) - (172))))) / (((/* implicit */int) ((short) arr_20 [i_6]))))))));
        arr_23 [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
    }
}
