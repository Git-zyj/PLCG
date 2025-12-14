/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134550
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min(((~(min((18446744073709551609ULL), (((/* implicit */unsigned long long int) (unsigned short)56160)))))), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_12)))))))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((var_7), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) (unsigned short)0))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) > ((~(var_6))))));
                                var_17 *= (!(((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_7))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) ^ (var_1))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [10ULL] [10ULL])) | (((/* implicit */int) arr_3 [10LL] [(_Bool)1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [(short)14]))))) : ((~(((/* implicit */int) var_9))))));
                    var_20 = ((/* implicit */unsigned short) ((unsigned char) var_8));
                }
                arr_14 [i_0] [i_0] [23LL] = ((/* implicit */unsigned int) min((((signed char) arr_9 [i_0] [i_0] [i_0] [i_1])), (((signed char) arr_10 [i_0] [i_0] [i_0]))));
                var_21 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [20LL] [i_1])))))) >= (((((((/* implicit */_Bool) (short)-18712)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10217))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [16ULL] [i_1])))))));
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (arr_11 [i_0] [(unsigned short)15] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */short) arr_10 [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0])) : (var_10))))) != (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
}
