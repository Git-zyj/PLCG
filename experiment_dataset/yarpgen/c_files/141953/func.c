/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141953
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
    var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)41)) ? (((/* implicit */int) (signed char)-27)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) 1129006151)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) : (var_3)))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2] [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)124)))) : ((-(((/* implicit */int) (signed char)0))))))) - (var_7)));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 2392801684989958457LL)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1 - 1])) : (11110000577562378367ULL))), (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4 - 2] [i_4 - 1] [5ULL]))))) ? (min((17683862938981756936ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(762881134727794673ULL))))))));
                        }
                        arr_12 [i_0] = ((/* implicit */unsigned int) ((min((arr_5 [i_0] [i_1 - 1] [i_1 - 1]), (arr_5 [10U] [i_1 - 1] [i_1 - 1]))) ? (max((arr_7 [i_1] [i_1 - 1]), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                for (unsigned short i_7 = 1; i_7 < 7; i_7 += 3) 
                {
                    for (unsigned char i_8 = 3; i_8 < 9; i_8 += 3) 
                    {
                        {
                            var_16 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) 131072U)) ? (7336743496147173248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117)))));
                            var_17 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_22 [i_6] [4LL] [i_8])))) * (((/* implicit */int) arr_8 [i_0] [3ULL] [i_0] [i_7] [i_7 + 1] [i_8]))));
                            var_18 ^= (~(arr_20 [i_5] [i_5] [(_Bool)1] [i_5] [i_7 + 1]));
                            var_19 = ((/* implicit */long long int) (unsigned char)252);
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_15 [i_0] [i_0]))));
        }
        for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
        {
            arr_25 [(unsigned short)4] |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_9] [i_9] [i_9]))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_11)))))));
        }
    }
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_5) ^ (var_5)))))))) >= (var_7))))));
    var_23 = ((/* implicit */signed char) max((var_5), (((unsigned long long int) var_10))));
    var_24 &= ((/* implicit */unsigned short) min((var_7), (var_3)));
}
