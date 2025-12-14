/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138356
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) max((var_16), ((-((-(((/* implicit */int) ((_Bool) arr_1 [i_0])))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 23; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) (unsigned short)12736);
                        var_18 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_15)) << (((((/* implicit */int) var_2)) - (7634)))))), (((((/* implicit */_Bool) 1754658022)) ? (98304LL) : (((/* implicit */long long int) 8388608U)))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned short) var_14);
        /* LoopSeq 1 */
        for (int i_5 = 3; i_5 < 18; i_5 += 4) 
        {
            arr_18 [i_4] [i_5] = ((/* implicit */unsigned int) (_Bool)0);
            var_19 ^= arr_12 [i_5];
            var_20 = ((/* implicit */short) ((((/* implicit */int) var_0)) << (((((((/* implicit */int) min((((/* implicit */signed char) (!((_Bool)0)))), (arr_16 [i_5 + 4])))) + (123))) - (21)))));
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (unsigned short)0))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_22 = ((/* implicit */_Bool) 54043195528445952LL);
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_26 [i_4] [i_4] [i_8] [i_7] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */int) arr_8 [i_4] [i_6] [(unsigned short)1] [i_4])) < ((~(1754658022)))));
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (signed char)-18)))) && (arr_6 [i_7 + 2] [14LL] [i_7] [i_7 + 2])));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            arr_30 [i_4] [i_6] [9LL] [i_8] [(unsigned short)10] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1024)) && (((/* implicit */_Bool) arr_20 [i_6] [(short)4] [(unsigned short)5]))));
                            var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) 8388480LL)) ? (arr_25 [i_4] [i_4] [i_4] [i_9]) : (((/* implicit */int) (_Bool)0)))) / (((((/* implicit */int) var_1)) - (((/* implicit */int) (short)-18))))));
                        }
                    }
                } 
            } 
        }
        for (short i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            arr_33 [5LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(arr_25 [i_4] [i_4] [i_10] [i_10]))) & ((~(-1754658023)))))) ? (((/* implicit */long long int) (~(1754658022)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_10]))) & (((arr_7 [i_4]) & (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4] [i_10] [i_4])))))))));
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                for (short i_12 = 2; i_12 < 21; i_12 += 1) 
                {
                    {
                        var_25 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)0))))))));
                        arr_38 [i_12] [i_12] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_35 [i_4])), ((+(1754658022)))));
                        var_26 = ((/* implicit */short) ((((min((0U), (((/* implicit */unsigned int) (signed char)17)))) >> (((((/* implicit */int) arr_32 [i_12 + 1])) - (51407))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        arr_39 [i_4] [i_12] = ((/* implicit */short) (+(((/* implicit */int) arr_14 [i_4]))));
                        arr_40 [i_10] [3] [i_12] [i_12 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_31 [i_10])), (arr_5 [i_4] [i_12]))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (short)20167)), (arr_22 [(unsigned short)11] [18ULL]))), ((+(-2373297005436853147LL)))))) : (min((4873740039733013641ULL), (((/* implicit */unsigned long long int) ((-1754658038) ^ (((/* implicit */int) var_15)))))))));
        }
    }
    var_28 = ((/* implicit */long long int) var_6);
}
