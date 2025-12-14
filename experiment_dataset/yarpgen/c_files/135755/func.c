/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135755
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned int) -1188875740)), (var_2)))) ? (((/* implicit */long long int) var_6)) : (min((arr_0 [i_0]), (9223372036854775807LL)))))));
                    var_13 = arr_3 [i_1];
                }
            } 
        } 
        var_14 = ((/* implicit */signed char) ((((var_1) <= (var_2))) ? (((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [9LL]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (arr_5 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (signed char)25)) & (((/* implicit */int) var_3)))))))));
    }
    var_15 = ((/* implicit */signed char) var_1);
    var_16 |= ((/* implicit */signed char) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])))))));
        var_18 ^= ((/* implicit */int) (signed char)96);
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 16; i_5 += 3) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_5 + 2] [i_5 + 1] [3U])) ? (((/* implicit */int) arr_7 [i_5 + 1] [i_5 - 1] [i_5 + 1])) : (var_5)));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) (unsigned char)94);
                        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) 134215680U))))))))));
                    }
                    for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (87303047) : (((/* implicit */int) arr_11 [i_7] [i_4] [i_5 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_5]))) : ((~(arr_13 [i_3] [i_3] [17ULL] [i_7])))));
                        arr_21 [2ULL] [1LL] [2ULL] [i_7] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) var_0)))));
                    }
                }
            } 
        } 
    }
    for (long long int i_8 = 1; i_8 < 9; i_8 += 1) 
    {
        var_23 -= ((/* implicit */int) ((((/* implicit */_Bool) 87303047)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8]))) : (((((/* implicit */_Bool) (+(-87303048)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_20 [(unsigned char)11] [(unsigned char)11]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */signed char) arr_18 [i_8] [i_8] [15U] [12LL] [(unsigned char)8]))))))))));
        var_24 = ((/* implicit */signed char) ((((long long int) var_7)) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2066963027)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (signed char)96))))) ? (min((arr_0 [i_8]), (((/* implicit */long long int) var_1)))) : (((((/* implicit */_Bool) 17242138896409188710ULL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_8] [i_8] [(unsigned char)12])))))))));
        var_25 = ((/* implicit */signed char) arr_19 [i_8] [i_8 + 1] [i_8 - 1]);
    }
    var_26 = ((/* implicit */unsigned char) ((short) (!(((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_7)))))));
}
