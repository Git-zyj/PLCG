/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168936
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
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+((~(32505856U)))))), (((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5)))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_2)), (694456432))), (((/* implicit */int) var_8))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))))), (((((/* implicit */unsigned long long int) 2344158090U)) / (var_9)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) ((short) arr_0 [i_0]))) + (2147483647))) >> (((((((/* implicit */_Bool) 30LL)) ? (((/* implicit */int) (short)-1)) : (arr_0 [i_0]))) + (9)))));
        var_18 = (+(((((/* implicit */_Bool) (~(2952319109U)))) ? (920667311) : (max((arr_0 [i_0]), (((/* implicit */int) (_Bool)1)))))));
        var_19 = ((/* implicit */unsigned int) ((_Bool) (+(arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((((((/* implicit */_Bool) min((arr_6 [i_0] [i_1] [13ULL] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((arr_3 [i_1] [i_1]), (394386861)))) : (((unsigned long long int) -394386854)))), (((/* implicit */unsigned long long int) max((arr_3 [i_2] [i_2]), (arr_3 [i_0] [i_2]))))));
                    var_21 *= ((/* implicit */unsigned long long int) (((+(min((var_11), (((/* implicit */unsigned int) (unsigned char)140)))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (arr_0 [i_0]) : (min(((+(((/* implicit */int) (unsigned short)59623)))), (((/* implicit */int) ((unsigned char) -394386854)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_7 [i_3])), ((((_Bool)1) ? (8510227980948058426ULL) : (((/* implicit */unsigned long long int) var_10)))))))));
        var_23 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_3])) != (((/* implicit */int) (short)0))))) < (((/* implicit */int) arr_9 [i_3]))))), (((((unsigned int) (_Bool)1)) / (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-60)), (arr_9 [i_3])))))))));
        var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (short)7))));
        var_25 &= ((/* implicit */short) (((!(((/* implicit */_Bool) ((var_14) << (((((/* implicit */int) arr_8 [i_3])) + (6294)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_3])) != (((/* implicit */int) arr_8 [i_3])))))) : ((~(max((8510227980948058426ULL), (((/* implicit */unsigned long long int) (signed char)-64))))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_3])) ? (((/* implicit */int) arr_13 [i_3] [i_4] [i_4])) : ((~(((/* implicit */int) arr_13 [i_4] [i_4] [i_4]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                var_27 *= ((/* implicit */int) arr_7 [i_3]);
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 25; i_6 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) arr_11 [i_3]))));
                    arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (-(((/* implicit */int) arr_12 [i_5]))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (unsigned char)185))));
                    var_30 = ((/* implicit */unsigned char) arr_20 [i_3] [i_4]);
                    arr_24 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_3] [i_7])) ? (((/* implicit */int) arr_23 [i_3] [i_5])) : (((/* implicit */int) arr_23 [i_3] [i_3]))));
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) arr_22 [i_4] [i_7] [i_5] [i_4] [i_3]);
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_5])) ? (((/* implicit */int) arr_12 [i_5])) : (((/* implicit */int) arr_12 [i_3]))));
                        arr_29 [i_3] [i_8] = ((/* implicit */long long int) ((845600503U) << (((((/* implicit */int) (unsigned short)11862)) - (11842)))));
                    }
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                    {
                        var_33 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) 65532))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-14))))));
                        var_34 = arr_13 [(unsigned char)23] [i_4] [(unsigned char)23];
                    }
                }
                for (short i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    arr_35 [i_10] = ((/* implicit */int) ((arr_31 [i_10] [i_10] [i_4]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26)) ? (((/* implicit */int) arr_18 [i_3] [i_5] [(signed char)12])) : (arr_27 [i_3] [i_3] [i_10])))) : (arr_11 [i_3])));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) arr_14 [(unsigned char)2]);
                        var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59623)) == (((/* implicit */int) arr_17 [i_3] [i_3] [(_Bool)1] [i_3] [i_3] [i_3]))));
                    }
                }
                arr_38 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (-(arr_11 [i_3])));
            }
            arr_39 [i_3] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3])), (arr_12 [i_4]))), (((/* implicit */unsigned short) min((arr_14 [i_3]), (arr_37 [i_3] [i_4] [i_3] [i_4] [i_3] [i_4] [i_4]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_20 [i_3] [i_3]) || (((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])))))));
        }
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_47 [i_12] = ((/* implicit */short) ((unsigned short) arr_16 [i_12] [i_12] [i_13] [i_13] [i_13] [i_13]));
            var_37 = ((/* implicit */_Bool) (-(arr_26 [i_12] [i_12] [i_12] [i_13] [i_13] [i_13] [i_12])));
        }
        var_38 = ((/* implicit */_Bool) ((unsigned short) arr_27 [i_12] [i_12] [i_12]));
    }
}
