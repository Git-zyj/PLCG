/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137062
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
    var_16 = ((/* implicit */int) var_12);
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */unsigned long long int) ((long long int) arr_11 [i_0 - 1] [(unsigned char)15] [i_1] [i_1] [i_1 + 2] [i_4 - 2]));
                            arr_12 [(unsigned short)1] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_15);
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [i_0] [18U] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_1 + 2]))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 16; i_5 += 4) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_5 + 1] [i_5])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
            var_19 = ((/* implicit */unsigned int) 3171440629847346544LL);
        }
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            for (unsigned int i_7 = 2; i_7 < 17; i_7 += 3) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    {
                        arr_24 [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_8] [i_7 - 1] [i_8] [i_8] [i_0]);
                        var_20 |= ((/* implicit */long long int) (((((-(((/* implicit */int) max((arr_3 [i_7] [i_8]), (((/* implicit */signed char) var_12))))))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)45066)))))));
                        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_7 + 2] [i_0 - 1])) >= ((~(arr_6 [i_6])))))), (((((/* implicit */unsigned long long int) arr_6 [i_6])) | (((((/* implicit */_Bool) (unsigned char)110)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                        arr_25 [i_0] [i_6] [i_6] = ((var_3) >> (((((arr_10 [i_8] [i_6] [(short)7] [i_8] [i_6] [(_Bool)1] [i_0 - 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6]))))) + (6476112016143687699LL))));
                        var_22 = ((/* implicit */signed char) ((arr_11 [i_0] [i_6] [(unsigned short)15] [i_8] [i_7] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0])))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) var_11);
        var_24 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) (short)-22969)), (((((/* implicit */_Bool) arr_16 [i_0] [2LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (arr_23 [(signed char)3] [i_0])))))));
    }
    var_25 += ((/* implicit */long long int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_9 = 1; i_9 < 18; i_9 += 2) 
    {
        for (short i_10 = 3; i_10 < 20; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_11 = 3; i_11 < 19; i_11 += 2) 
                {
                    for (signed char i_12 = 1; i_12 < 18; i_12 += 4) 
                    {
                        {
                            arr_37 [20LL] [i_10] [15ULL] [i_9] [15ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) arr_26 [i_9]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) var_5)) <= (var_11)))) : (((/* implicit */int) (signed char)-102))));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) arr_28 [i_10 - 2] [i_11 + 2] [(short)10]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) (-((~(((((/* implicit */int) (unsigned short)49065)) >> (((arr_41 [i_9] [1ULL] [i_13] [i_9] [i_14] [4ULL]) - (4214612394U)))))))));
                            var_28 = ((/* implicit */signed char) var_11);
                            var_29 -= ((/* implicit */unsigned int) ((var_5) >= (((((/* implicit */_Bool) var_2)) ? (((arr_29 [0LL]) >> (((((/* implicit */int) var_6)) + (16323))))) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned int) min((max((var_0), (arr_36 [i_10 - 1] [i_10] [i_10] [i_10] [i_9] [i_9 + 3]))), (((/* implicit */long long int) (signed char)-5))));
                var_31 += ((/* implicit */short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_42 [i_10 - 2] [i_10] [i_9 - 1] [3U])) : (((/* implicit */int) arr_42 [i_10 - 1] [i_10] [i_9 - 1] [(unsigned char)18]))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))), (1U))))));
}
