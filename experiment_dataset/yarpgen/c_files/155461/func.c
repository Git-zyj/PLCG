/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155461
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) -2435430411786544856LL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                            {
                                arr_13 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (((~(arr_7 [i_3] [(signed char)5] [(signed char)5]))) & (2435430411786544856LL)))) || (((/* implicit */_Bool) min(((unsigned char)230), (((/* implicit */unsigned char) arr_1 [i_1])))))));
                                var_11 *= ((/* implicit */_Bool) ((min((max((3036063444520150163ULL), (((/* implicit */unsigned long long int) arr_1 [1ULL])))), (((/* implicit */unsigned long long int) max((arr_7 [i_2] [i_3] [i_4]), (((/* implicit */long long int) arr_5 [i_4] [i_3] [i_1]))))))) >> (((((/* implicit */int) arr_2 [i_2])) - (30175)))));
                                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_4]))))) | (((arr_12 [i_3] [i_3] [i_3] [i_3] [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_2] [i_1])), (((((/* implicit */unsigned long long int) var_9)) | (15410680629189401452ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (var_3)))), ((~(((/* implicit */int) arr_3 [(short)4] [i_0])))))))));
                            }
                            for (short i_5 = 4; i_5 < 9; i_5 += 2) 
                            {
                                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_12 [i_2] [i_2] [i_5 - 1] [i_5] [i_5])))) ? (((/* implicit */int) ((2ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11981)))))) : (((/* implicit */int) min((((/* implicit */short) arr_15 [i_3] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1])), ((short)14311))))));
                                var_13 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20610)) ? (((/* implicit */unsigned long long int) 1983077979)) : (18446744073709551615ULL)))));
                            }
                            var_14 *= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_2] [i_0]))) | (max((2435430411786544855LL), (((/* implicit */long long int) (short)14311))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                            {
                                arr_21 [i_1] [i_2] [i_1] = ((/* implicit */short) 0ULL);
                                arr_22 [i_1] = 15410680629189401452ULL;
                                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [(short)0] [i_0]))))) ? (min((((((/* implicit */unsigned long long int) 6518659603293387881LL)) + (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_6 [i_0] [i_2]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((var_8), (arr_20 [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))))));
                            }
                            for (short i_7 = 1; i_7 < 9; i_7 += 2) 
                            {
                                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (short)11977)))))));
                                arr_25 [i_7 + 1] [i_1] [(unsigned char)8] [i_1] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_15 [9LL] [i_7 + 1] [(short)8] [i_7] [i_7 - 1] [i_3] [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-98)))), (((((/* implicit */_Bool) (short)-11978)) ? (((/* implicit */int) arr_5 [i_7 - 1] [i_7 + 1] [i_7 - 1])) : (var_9)))));
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((16ULL) | (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_19 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_3]))) : (var_0)))))))))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((long long int) arr_16 [i_0] [i_7 - 1] [i_7 + 1] [i_7] [i_0])), (((-4820559450793926360LL) | (arr_16 [i_0] [i_7] [i_7 - 1] [i_7] [i_0]))))))));
                            }
                            arr_26 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) -4820559450793926331LL);
                            var_19 = ((/* implicit */short) (-(arr_11 [5LL] [i_2] [i_1] [i_1] [i_1] [(_Bool)1] [i_0])));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)24570)))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) ((((/* implicit */_Bool) 1146813616U)) || (arr_17 [i_0] [i_8])))))), ((+(((var_2) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))));
                    var_21 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_12 [i_0] [i_1] [i_1] [(signed char)8] [5U]) - (arr_12 [i_0] [i_0] [i_1] [i_1] [i_8])))), (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_1] [i_8] [(short)9])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) >> (((-2435430411786544855LL) + (2435430411786544859LL)))))) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_8])))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) >= (var_0))) ? (((/* implicit */int) ((((/* implicit */_Bool) 15ULL)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (unsigned char)66)))) | (((/* implicit */int) ((short) var_9))))))));
    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (unsigned char)65))));
    /* LoopNest 2 */
    for (short i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        for (long long int i_10 = 1; i_10 < 14; i_10 += 2) 
        {
            {
                var_24 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)17))));
                arr_34 [i_9] [i_9] [i_10] = (!(((/* implicit */_Bool) ((unsigned long long int) -2435430411786544850LL))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_25 -= ((/* implicit */short) (unsigned char)243);
                    arr_37 [i_9] [i_10] [i_10] = ((/* implicit */signed char) ((int) (unsigned char)206));
                }
            }
        } 
    } 
}
