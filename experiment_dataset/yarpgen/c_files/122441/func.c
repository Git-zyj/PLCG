/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122441
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_1 [i_0] [i_1])));
            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 8241976907087396167LL)) ? (arr_4 [i_0] [i_1] [i_1]) : (18446744073709551609ULL)));
        }
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */int) arr_8 [i_2]);
        var_24 = ((/* implicit */int) min((var_24), (((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2])))) * (((((/* implicit */int) arr_7 [i_2] [i_2])) * ((+(((/* implicit */int) arr_8 [i_2]))))))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [2LL] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(short)11])) ? (((/* implicit */int) max((arr_8 [i_2]), (arr_8 [i_2])))) : (((((/* implicit */_Bool) 10990992914424463243ULL)) ? (-170982745) : (170982744)))));
                    arr_16 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */short) (~((~(((/* implicit */int) arr_13 [i_2] [i_3] [i_3] [8LL]))))));
                    arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_10 [i_3] [(unsigned char)10]), (arr_10 [i_2] [i_3])))) ? (((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4])) ? (arr_11 [i_2] [i_3] [i_4]) : (arr_11 [i_2] [i_3] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_4]))))))));
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
    var_26 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            {
                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 170982744)) ? (((/* implicit */int) (_Bool)1)) : (-170982732)))) ? (((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (((/* implicit */int) arr_19 [i_5] [i_6])) : (((/* implicit */int) arr_20 [i_5] [i_6] [i_5])))) : (((-170982722) / (((/* implicit */int) arr_19 [i_5] [1LL])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 17; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 19; i_8 += 4) 
                    {
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_28 -= ((/* implicit */_Bool) arr_25 [i_8 + 1] [i_6]);
                                var_29 -= ((/* implicit */signed char) arr_28 [i_5] [i_9] [i_7 + 1] [i_8 + 1] [15ULL] [i_9]);
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) arr_24 [i_5] [i_7] [i_7 + 2] [i_7 - 1] [i_6]))));
                    var_31 &= ((((/* implicit */_Bool) arr_24 [i_7 + 2] [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7])) ? (arr_24 [i_7 + 2] [i_7] [i_7] [i_7 + 1] [i_7 + 2]) : (arr_24 [i_7 + 2] [i_7] [i_7] [i_7 + 1] [i_7 + 1]));
                    arr_30 [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [5U] [i_7 + 2] [i_7 + 2])) ? (((/* implicit */int) arr_20 [i_5] [i_7 + 3] [i_5])) : (((/* implicit */int) arr_20 [i_5] [i_7 + 1] [i_5]))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_5] [i_6])) ? (arr_22 [i_6] [i_6]) : (((/* implicit */int) arr_21 [i_5] [i_6] [i_7 + 1]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_35 [i_5] = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_27 [i_11 - 1] [i_6] [i_10] [i_11] [i_6] [i_11 - 1] [i_10])))) - ((~(((/* implicit */int) arr_20 [i_5] [i_6] [i_6]))))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_6] [i_10] [i_11 - 1])) ? (((((/* implicit */_Bool) arr_23 [i_5] [i_11 - 1] [i_10])) ? (((/* implicit */int) arr_23 [i_6] [(signed char)19] [i_11 - 1])) : (((/* implicit */int) arr_23 [i_5] [i_6] [i_10])))) : (((/* implicit */int) arr_23 [i_11 - 1] [i_11 - 1] [i_11 - 1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
