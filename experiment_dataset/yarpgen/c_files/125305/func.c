/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125305
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
    var_11 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)127)), (var_2))), (((/* implicit */unsigned short) (signed char)-39))))), ((~(((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) max((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_1] [i_1 + 1]))))));
            arr_7 [(signed char)0] [(signed char)0] = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */unsigned long long int) (unsigned short)45148)), (((arr_1 [i_0]) >> (((/* implicit */int) (_Bool)1)))))));
            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (short)-17051))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_13 = arr_5 [i_2] [i_1];
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)45)), (arr_3 [i_0] [16U])))) >> (((((/* implicit */int) (unsigned char)151)) - (141)))))));
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (unsigned char)109);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 1) 
                    {
                        {
                            arr_24 [i_0] [i_0] [i_2] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_20 [i_1] [i_2] [i_1] [i_6]))));
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)65528)), ((((-(arr_19 [i_0]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))))))));
                        }
                    } 
                } 
                arr_25 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-46)) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 26U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54320))) : (arr_12 [i_0] [i_0] [i_0] [i_0])))) ? (((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_1]))))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)47846)))))) - (31125ULL)))));
            }
        }
        /* vectorizable */
        for (unsigned int i_7 = 3; i_7 < 21; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 21; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    {
                        var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_7 + 1])) ? (((/* implicit */int) arr_27 [i_7 + 1])) : (((/* implicit */int) arr_27 [i_7 - 1]))));
                        var_17 ^= ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) arr_5 [i_7 + 1] [i_8 + 1]))));
                    }
                } 
            } 
            var_18 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_27 [i_0]))))));
            var_19 ^= ((/* implicit */unsigned short) arr_22 [i_0] [i_0] [i_0] [i_7] [i_7] [i_0]);
        }
        /* LoopSeq 1 */
        for (unsigned short i_10 = 2; i_10 < 18; i_10 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) arr_11 [i_0] [i_0]);
            var_21 = min((((/* implicit */unsigned long long int) min((((/* implicit */int) max(((unsigned short)54401), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) (unsigned char)26)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)21))))))), (arr_13 [i_0] [i_10] [(short)15] [i_0] [i_10]));
        }
    }
}
