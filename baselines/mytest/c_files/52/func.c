/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/52
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_3)), (var_5))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((var_5) - (14961753580976474209ULL))))))))), ((~(((/* implicit */int) var_2))))));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) (short)-21545)) > (((/* implicit */int) (short)21533)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (unsigned char)55))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (short)21545))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) arr_3 [i_1] [1LL] [i_1 - 1])) - (((/* implicit */int) (unsigned char)153)))) : (((((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2] [i_1 - 2])) + (((/* implicit */int) arr_3 [i_1 - 1] [i_1] [i_1 - 2]))))));
            arr_5 [i_0] [i_1 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    for (long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                    {
                        {
                            arr_14 [i_4] [i_1] [(unsigned short)8] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-110)) ? (503610793U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-19)))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) 724422240)))))))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7950597688053096645ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11647))) : (18446744073709551615ULL)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-11)) / (((/* implicit */int) (unsigned short)59052)))))));
                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_7 [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 + 3]))));
                arr_15 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) 0);
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */int) arr_9 [i_6 - 2] [i_1 + 3]);
                            var_21 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) % (((/* implicit */int) arr_3 [i_6 - 2] [i_6 - 2] [i_1 - 2]))));
                            arr_22 [i_6 - 2] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
            }
            for (short i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 10; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (-(9421131182196292923ULL)));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_0)), ((unsigned char)46)))) ? (((var_8) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9] [i_9]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (4898272841845357806LL)))))) ? (max((var_5), (((/* implicit */unsigned long long int) ((11701881401348716213ULL) <= (var_5)))))) : ((~(min((((/* implicit */unsigned long long int) 7981143938289613581LL)), (18446742974197923840ULL)))))));
                            arr_30 [i_0] [i_0] [i_8] [i_8 - 1] [i_0] = ((/* implicit */_Bool) (short)21572);
                        }
                    } 
                } 
                arr_31 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)1)), ((short)-17594)));
                var_24 ^= max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-88)) & (((/* implicit */int) (signed char)-116))))), (((((/* implicit */_Bool) var_8)) ? (arr_17 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 2] [i_1 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (var_4))));
            }
        }
    }
}
