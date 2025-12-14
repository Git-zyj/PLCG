/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100251
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) (+(min((((/* implicit */int) (short)-2162)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)5015))))))));
        var_17 = ((/* implicit */short) (~(((/* implicit */int) arr_1 [16LL]))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))))))));
    }
    for (int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        var_19 = ((/* implicit */short) (-(max((((/* implicit */long long int) arr_1 [i_1])), (8081123148150705216LL)))));
        var_20 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (short)11868)) ^ (((/* implicit */int) (short)-32754))))))) ^ (((-2951111287948384631LL) ^ (((/* implicit */long long int) (~(((/* implicit */int) (signed char)-127)))))))));
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 1]))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            for (short i_4 = 2; i_4 < 13; i_4 += 2) 
            {
                for (short i_5 = 2; i_5 < 13; i_5 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */long long int) 4294934528U)) != (arr_11 [i_3] [i_4 + 2] [i_5 + 3] [i_4 + 2])));
                            arr_19 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [11U] [i_6])) && (((/* implicit */_Bool) arr_2 [i_4]))));
                        }
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_2] [i_5 + 1])))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) 8210684589106954277LL);
    }
    for (short i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        var_25 *= ((/* implicit */short) min((((/* implicit */unsigned int) ((530015029) >> (((((/* implicit */int) (signed char)-46)) + (77)))))), ((+(173308644U)))));
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) ((((-1LL) - (((/* implicit */long long int) 907558646U)))) | (((/* implicit */long long int) ((2509022272U) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((-35560627) == (782157452))))))))));
                    var_27 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_13 [i_9] [i_9] [i_7] [i_7]) ? (((/* implicit */int) arr_13 [i_7] [i_7] [i_9] [i_7])) : ((-2147483647 - 1)))))));
                    var_28 = ((/* implicit */unsigned int) ((_Bool) (unsigned short)49578));
                }
            } 
        } 
        var_29 += ((/* implicit */unsigned short) (!(arr_25 [i_7] [i_7])));
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 17; i_10 += 3) 
    {
        for (short i_11 = 0; i_11 < 21; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                {
                    arr_39 [i_11] [(short)14] [(short)14] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)7382))));
                    var_30 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_33 [i_12] [i_12])) ? ((+(((/* implicit */int) (short)32707)))) : (((/* implicit */int) min((((/* implicit */short) arr_31 [i_10])), (arr_38 [i_10] [i_10]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
    {
        for (signed char i_14 = 4; i_14 < 19; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                {
                    var_31 = ((/* implicit */int) arr_38 [i_13 + 1] [i_13 + 1]);
                    arr_50 [i_14] [i_14] &= ((/* implicit */_Bool) arr_33 [i_13 + 1] [i_14 + 1]);
                }
            } 
        } 
    } 
}
