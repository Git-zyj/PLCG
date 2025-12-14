/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137399
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
    var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (var_2))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) (unsigned char)211)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17592186044415ULL)))));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)3))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned short) var_13)))))) : (var_8)))) ? (((/* implicit */int) ((unsigned char) ((var_7) - (var_7))))) : (min((var_7), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9)))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (arr_2 [i_0] [i_0])))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10169921859694845049ULL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-122))))) : (((17592186044415ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14377)))))))) ? ((+(((((((/* implicit */int) (signed char)-122)) + (2147483647))) >> (((((/* implicit */int) (unsigned char)255)) - (242))))))) : ((-(((/* implicit */int) arr_1 [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) / (min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((short) arr_0 [i_0]))))) : ((+(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */short) min((((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_1 - 1])))))), (arr_8 [i_2] [i_1 - 1])));
                        var_22 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_3])), (arr_7 [i_1] [i_2] [i_3])))) ? (arr_10 [i_0] [i_1] [i_2] [i_3] [i_1] [i_2]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_1] [i_1])))))))));
                        arr_11 [i_1] = ((/* implicit */_Bool) (+((-(min((arr_2 [i_3] [i_2]), (((/* implicit */long long int) arr_8 [i_1] [i_1 - 1]))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((long long int) ((long long int) arr_13 [i_4] [i_5]))))));
            arr_18 [i_4] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_16 [i_4] [i_4])) ? (arr_16 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_4])))))));
        }
        for (int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            var_24 = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) arr_13 [i_4] [i_6])));
            arr_21 [i_6] [i_4] [i_6] = ((/* implicit */_Bool) arr_20 [i_4] [i_6]);
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 21; i_7 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_4] [i_4])) - (((/* implicit */int) arr_15 [i_4] [i_7 - 2]))))) ? (((/* implicit */int) arr_17 [i_7])) : (((/* implicit */int) ((unsigned char) arr_15 [i_7 + 2] [i_4])))));
            arr_24 [i_4] [i_7 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_15 [i_7 + 2] [i_7 + 1])) ? (((/* implicit */int) arr_19 [i_4] [i_4] [i_7])) : (((/* implicit */int) arr_13 [i_4] [i_7 - 2])))) != (((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (unsigned short)3900)) : (((/* implicit */int) (unsigned char)7))))));
            arr_25 [i_7] [i_7] [i_7 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_7])) ? (((/* implicit */int) arr_23 [i_4] [i_4])) : (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (((/* implicit */int) arr_22 [i_4])) : (((/* implicit */int) arr_22 [i_4]))))));
        }
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            arr_28 [i_4] = ((/* implicit */unsigned char) arr_13 [i_4] [i_8]);
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_17 [i_4]))));
            arr_29 [i_4] [i_8] = ((/* implicit */unsigned short) ((short) (~(((/* implicit */int) arr_13 [(_Bool)1] [(_Bool)1])))));
        }
        arr_30 [i_4] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_17 [i_4]))))) ? (((long long int) arr_23 [i_4] [i_4])) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)243)))))));
    }
    for (unsigned long long int i_9 = 3; i_9 < 12; i_9 += 2) 
    {
        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_9] [i_9 - 3] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_9 + 2] [i_9 + 3] [i_9 + 3]))) : (arr_26 [i_9 + 3] [i_9] [i_9]))) << ((((-(((/* implicit */int) arr_7 [i_9] [i_9] [i_9])))) - (3896)))))) ? (min((((((/* implicit */int) arr_22 [i_9])) + (((/* implicit */int) arr_0 [i_9])))), ((+(((/* implicit */int) arr_6 [i_9] [8ULL] [i_9 - 3])))))) : (((/* implicit */int) arr_14 [i_9 + 2]))));
        var_28 = (-(((/* implicit */int) arr_1 [i_9 - 3])));
    }
    /* LoopSeq 1 */
    for (short i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        arr_37 [i_10] = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)7))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)193)) ^ (((/* implicit */int) (unsigned char)9))));
    }
}
