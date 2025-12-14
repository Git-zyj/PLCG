/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185160
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
    var_19 += ((/* implicit */unsigned int) ((signed char) var_3));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_0] [i_1]) : (arr_2 [i_0] [i_1] [i_1])))) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) ((short) arr_2 [i_1] [i_1] [i_0])))));
            var_20 = ((/* implicit */unsigned long long int) (-(max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1]))))));
            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0]))))))));
        }
        for (unsigned char i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (signed char)64)))) ^ (((/* implicit */int) arr_3 [i_0] [i_2] [i_0]))))) - (((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (arr_4 [i_2 - 1] [(unsigned char)4] [i_0])))) - ((-(var_1)))))));
            arr_9 [(unsigned char)17] [(unsigned char)17] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) ? (((/* implicit */int) ((((((/* implicit */int) arr_6 [i_0] [(unsigned char)9])) - (((/* implicit */int) arr_3 [(signed char)14] [i_0] [(unsigned char)1])))) > ((+(((/* implicit */int) var_7))))))) : (((/* implicit */int) ((signed char) arr_6 [i_0] [7LL])))));
        }
        for (short i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_23 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) arr_10 [i_0] [i_3] [10])))))));
                arr_14 [i_4] = ((/* implicit */unsigned long long int) ((max((((var_16) / (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_15)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((-753503747279607796LL) + (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8)))) : ((+(arr_2 [i_0] [i_3] [i_0]))))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) && (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) && (((/* implicit */_Bool) arr_8 [i_0] [i_4]))))));
            }
            for (short i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                arr_18 [i_0] [18LL] [i_5] = ((int) ((((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) ? (((((/* implicit */unsigned long long int) arr_4 [3LL] [i_3] [i_5])) ^ (var_14))) : (((((/* implicit */_Bool) 753503747279607796LL)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                var_25 = ((/* implicit */short) arr_2 [i_0] [19ULL] [i_5]);
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    arr_22 [i_6] [15LL] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_6 [i_0] [i_0])) / (((/* implicit */int) (unsigned char)163))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) arr_21 [i_6] [i_6] [i_5] [12] [i_0] [i_0]))))) ? (min((((/* implicit */long long int) var_5)), (var_9))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)64))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((636408786) == (((/* implicit */int) arr_3 [i_0] [i_3] [i_5])))))))));
                    var_26 = ((/* implicit */unsigned char) ((var_3) % (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (signed char)99)) | (((/* implicit */int) (signed char)1)))) > (((/* implicit */int) (signed char)-78))))))));
                    var_27 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)138)) ? (((((/* implicit */long long int) 1548929858)) + (arr_12 [i_0] [i_3] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) arr_20 [i_5] [i_5] [i_5] [i_5])))));
                    var_29 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((2016U) >= (((/* implicit */unsigned int) 743013491)))))) / (min((((/* implicit */unsigned int) var_13)), (arr_7 [i_3] [i_5])))))) ? (min((((var_8) >> (((/* implicit */int) arr_17 [i_0] [i_0])))), (var_16))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [(unsigned char)2])) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) (signed char)-78))))) && (((/* implicit */_Bool) max((((/* implicit */signed char) var_5)), ((signed char)-47))))))))));
                }
                for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                {
                    arr_26 [i_7] [i_5] [i_3] [(unsigned char)11] [i_0] = ((/* implicit */long long int) arr_21 [i_7] [i_7] [i_5] [i_3] [i_0] [19]);
                    arr_27 [i_0] [9] [i_5] [7LL] = ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (2712991171633000287LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((long long int) (signed char)-86))) != (arr_11 [i_7] [18LL]))))));
                    var_30 = ((/* implicit */signed char) (+((-(((((/* implicit */unsigned long long int) -1LL)) * (var_1)))))));
                }
                var_31 = ((/* implicit */long long int) max((var_31), (((long long int) ((12438499977594794246ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))))))));
            }
            arr_28 [(signed char)2] [i_3] [i_0] = ((/* implicit */short) max((var_14), (((/* implicit */unsigned long long int) ((max((arr_20 [i_0] [i_3] [i_3] [i_0]), (var_3))) == (((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */short) (signed char)-64)))))))))));
        }
        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (arr_24 [(unsigned char)12] [(unsigned char)12] [i_0] [i_0] [i_0] [(signed char)1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) : (4104360445605300604LL))))));
        var_33 ^= (~(max((((var_14) - (((/* implicit */unsigned long long int) arr_13 [i_0] [5U] [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((signed char) arr_13 [i_0] [i_0] [i_0] [i_0]))))));
        var_34 += ((/* implicit */long long int) arr_17 [i_0] [i_0]);
    }
    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        var_35 ^= ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) (+(var_17)))))));
        arr_31 [i_8] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_30 [i_8] [3U])) ? (((/* implicit */int) arr_30 [i_8] [i_8])) : (((/* implicit */int) var_6)))) * (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */int) var_4)) ^ (((/* implicit */int) (short)(-32767 - 1)))))))));
    }
    var_36 = var_7;
}
