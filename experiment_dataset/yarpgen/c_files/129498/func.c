/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129498
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
    var_13 = ((/* implicit */short) var_8);
    var_14 = ((/* implicit */unsigned long long int) min((var_11), (((unsigned char) var_8))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            var_15 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_10 [i_0] [i_1] [i_2] [(short)9] [(short)7] [(short)9])))) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_10 [i_0] [i_0] [3] [i_0] [3] [i_0]))) : (max((arr_10 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3]), (arr_10 [i_0] [(unsigned short)0] [i_0] [i_1] [i_2] [i_3]))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                            {
                                var_16 = ((/* implicit */unsigned long long int) arr_2 [i_4]);
                                var_17 -= ((/* implicit */short) min(((~(min((arr_12 [i_2] [i_4]), (((/* implicit */unsigned int) arr_4 [i_2] [i_3] [(short)3])))))), (((/* implicit */unsigned int) ((short) 17722977413762357184ULL)))));
                                var_18 = ((/* implicit */short) max(((+(((((/* implicit */_Bool) -2287990966616802462LL)) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_2])))))), ((-((-(((/* implicit */int) (short)17146))))))));
                                var_19 |= ((/* implicit */short) (~(553268335U)));
                                arr_14 [5ULL] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
                            }
                        }
                    } 
                } 
                arr_15 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 17722977413762357184ULL))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)17157))));
                var_20 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(-88047707)))), (2900613147U)));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 15; i_5 += 4) 
    {
        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_5] [i_5]))));
        arr_18 [i_5] = ((/* implicit */signed char) var_5);
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-30117))));
            arr_22 [i_5] [i_6] [i_5] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)17146)) ? (arr_17 [i_5] [i_5]) : (arr_17 [i_5] [i_5]))) + (((/* implicit */unsigned long long int) arr_21 [i_6]))));
            arr_23 [i_6] [i_6] = ((short) -88047707);
        }
        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
        {
            var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_3)))) >= (var_1)));
            arr_28 [i_7] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) -2287990966616802462LL)))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) arr_24 [i_8] [i_5]);
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned char) (unsigned char)249)))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                arr_35 [i_5] [i_5] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */int) (short)-29482)) : (((/* implicit */int) (short)-17158))));
                var_26 = ((/* implicit */signed char) arr_24 [i_9] [i_5]);
                /* LoopSeq 2 */
                for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    var_27 = var_1;
                    var_28 ^= ((/* implicit */unsigned short) (+(arr_17 [i_8] [i_9])));
                }
                for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    var_29 = (!(((/* implicit */_Bool) arr_29 [4] [i_9])));
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_9] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [i_11]))) : (-1574866615348271999LL)));
                    var_31 ^= ((/* implicit */signed char) arr_30 [i_5]);
                }
            }
            var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_38 [i_5] [i_5] [i_5] [i_8]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
    {
        var_33 = ((/* implicit */_Bool) min((var_33), (((((/* implicit */int) (short)30646)) != (((/* implicit */int) (unsigned char)231))))));
        arr_43 [(short)13] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-30089)) ? (arr_42 [i_12] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) < (((/* implicit */long long int) ((((/* implicit */int) (short)-17149)) & (((/* implicit */int) var_2)))))));
    }
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 4) 
    {
        var_34 = ((/* implicit */unsigned long long int) arr_45 [i_13]);
        var_35 *= ((/* implicit */signed char) 17149699398584013715ULL);
    }
    var_36 *= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (var_8)))) ? (((unsigned long long int) 5608462721411512089ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
}
