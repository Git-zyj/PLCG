/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135986
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
    var_10 = ((/* implicit */unsigned short) ((var_6) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8064)))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)45294)) ? (((/* implicit */unsigned int) ((int) min((arr_0 [i_0]), (arr_0 [i_0]))))) : (var_1)));
        var_11 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)45294)) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((((/* implicit */long long int) var_8)) - (var_6))))), (((/* implicit */long long int) (+(((((/* implicit */int) var_5)) | (((/* implicit */int) arr_0 [(short)1])))))))));
        var_12 = ((/* implicit */unsigned char) var_6);
    }
    for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) ^ (max((arr_1 [i_1 + 1]), (arr_1 [i_1]))))))));
            var_14 = ((/* implicit */_Bool) ((((_Bool) var_8)) ? (arr_1 [i_1]) : (min((arr_1 [i_1 - 2]), (((/* implicit */unsigned int) arr_0 [i_1 + 1]))))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((unsigned short) arr_0 [i_1 + 1])), (arr_5 [(unsigned char)12] [(unsigned char)12]))))));
        }
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            arr_11 [i_1] [i_1] = ((/* implicit */long long int) arr_6 [i_1]);
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) max((((/* implicit */unsigned short) (_Bool)0)), (max((((/* implicit */unsigned short) ((arr_4 [i_1] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45294)))))), (min(((unsigned short)20235), (((/* implicit */unsigned short) arr_7 [i_3] [i_3] [i_4])))))))))));
                        arr_18 [i_1] [i_3] [i_4] [i_5] [i_1] &= ((/* implicit */unsigned short) ((_Bool) max((((/* implicit */int) (unsigned char)163)), (arr_9 [i_1 + 1] [i_1 + 2]))));
                    }
                } 
            } 
            var_17 -= arr_5 [i_1 + 1] [(_Bool)1];
            arr_19 [i_1] [i_1] [i_3] = ((/* implicit */short) min((((-1LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))))), (((/* implicit */long long int) (-(((/* implicit */int) arr_7 [(short)5] [i_1] [i_1 - 2])))))));
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_1 + 2])) - (((/* implicit */int) ((signed char) var_9)))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 17; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)62))));
                        arr_30 [i_8] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_1 + 2]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            arr_33 [(unsigned char)11] [i_6] = ((/* implicit */short) (~(15U)));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1])) ? (((/* implicit */int) arr_23 [i_1 - 1] [i_1 - 1] [i_1 + 2])) : (((/* implicit */int) ((_Bool) arr_9 [i_1] [15])))));
                            var_21 ^= ((/* implicit */short) (unsigned char)80);
                        }
                        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((_Bool) arr_27 [i_6] [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 1])))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_5))));
                        }
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */signed char) 18446744073709551614ULL);
                            var_25 *= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_25 [i_1 + 2] [i_1 - 2] [i_1 - 1] [i_1 - 2]))));
                        }
                        var_26 &= ((/* implicit */short) (~(((/* implicit */int) var_5))));
                        arr_40 [i_1 - 2] [i_1] [i_6] [(unsigned char)5] [i_7] [i_8] = var_9;
                    }
                } 
            } 
        }
        arr_41 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_1] [i_1 + 2] [i_1])) - (((/* implicit */int) arr_8 [i_1] [i_1 - 2] [i_1 + 1]))))) && (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)19)))))))), (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_1 + 2])) ? (((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_8 [16ULL] [i_1 + 1] [i_1]))))));
    }
    for (unsigned short i_12 = 0; i_12 < 13; i_12 += 4) 
    {
        arr_44 [i_12] [i_12] = ((/* implicit */_Bool) var_6);
        arr_45 [i_12] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) >> (((var_0) - (3617693908591240283LL)))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_21 [i_12] [i_12]), (((/* implicit */unsigned short) arr_22 [i_12] [i_12] [i_12])))))))) : (((min((((/* implicit */unsigned long long int) (short)7650)), (var_4))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_23 [i_12] [i_12] [i_12])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_12])) - (11045))))))))));
    }
}
