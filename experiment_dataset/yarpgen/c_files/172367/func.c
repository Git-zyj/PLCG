/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172367
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)114))) : (min((17864736435945625585ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) ((var_3) && (((/* implicit */_Bool) arr_0 [i_0])))))));
                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 4294967295U))));
                var_14 += ((/* implicit */signed char) ((((/* implicit */int) min((arr_2 [(unsigned short)16]), (arr_2 [(short)16])))) * (((/* implicit */int) arr_2 [18]))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned int) (!(((/* implicit */_Bool) 2199023255551ULL))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((arr_3 [i_0]) << (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((long long int) -650336471)) : (((/* implicit */long long int) max((var_9), (((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) ((unsigned int) (((_Bool)1) ? (-1783164811) : (((/* implicit */int) (unsigned short)41108)))))) : (var_11)));
    /* LoopSeq 1 */
    for (short i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2]))) / (((((/* implicit */_Bool) 4294967288U)) ? (1015143114U) : (((/* implicit */unsigned int) -1783164811))))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) min((((((long long int) var_9)) <= (((/* implicit */long long int) ((unsigned int) var_3))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 582007637763926041ULL)) ? (((/* implicit */int) arr_7 [i_5])) : (((/* implicit */int) (unsigned short)33760))))) || (((/* implicit */_Bool) 2817670782U)))))))));
                        var_18 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_18 [i_2 + 1])), (((789921593U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2]))))))))));
                        arr_19 [i_2 - 1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_11 [i_3] [i_4] [i_5])) ? (((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_5])) / (((/* implicit */int) (signed char)24)))) : (((/* implicit */int) ((_Bool) arr_8 [i_3] [i_5]))))), (((/* implicit */int) var_2))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) max((var_19), (-1783164806)));
                        var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_14 [i_2] [i_6] [i_7] [i_8])), (((long long int) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) arr_14 [i_2 - 1] [5] [i_2] [i_2 - 2]);
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)7)) ? (((((/* implicit */_Bool) arr_1 [i_2 - 2])) ? (((arr_26 [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2 - 1]))) : (4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((max((2817670782U), (((/* implicit */unsigned int) (unsigned char)22)))) - (((/* implicit */unsigned int) arr_18 [i_9 - 1]))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775797LL)) || (((/* implicit */_Bool) 2817670803U))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_14 = 1; i_14 < 12; i_14 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2 + 1])) && (((/* implicit */_Bool) (unsigned short)55428))))))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (unsigned char)240)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 13; i_15 += 3) 
                        {
                            var_26 ^= ((/* implicit */signed char) (((+(((/* implicit */int) ((signed char) arr_36 [i_2] [i_11] [i_12]))))) <= (((/* implicit */int) arr_33 [i_2 - 1] [i_2] [i_2 - 1]))));
                            var_27 = ((/* implicit */unsigned short) max((4294967277U), (((/* implicit */unsigned int) arr_20 [i_2]))));
                            var_28 ^= (((-((-(arr_0 [i_2]))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
                        }
                        var_29 = ((/* implicit */unsigned int) (_Bool)0);
                        var_30 = ((((/* implicit */int) ((((/* implicit */_Bool) -404078754)) || (arr_8 [i_2 - 2] [i_11])))) / (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (1783164816)))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned int) max((var_2), (max((((unsigned char) (unsigned char)253)), (min((((/* implicit */unsigned char) (_Bool)0)), (var_8)))))));
}
