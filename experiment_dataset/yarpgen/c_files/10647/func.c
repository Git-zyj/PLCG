/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10647
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */signed char) ((unsigned int) ((-338293089) | (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_10) : (arr_3 [i_0]))))));
        var_21 ^= ((/* implicit */_Bool) max(((-(8005868643982425085ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
    }
    for (unsigned char i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])))), (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_22 ^= (!(((/* implicit */_Bool) 9223367638808264704LL)));
            arr_9 [(signed char)17] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)62089)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) != ((+(6694464203505601476ULL)))));
        }
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) -34887038)))));
        var_24 += ((/* implicit */unsigned int) max((((/* implicit */long long int) (~((+(((/* implicit */int) arr_5 [(unsigned short)6]))))))), (((long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [(short)0])) : (((/* implicit */int) arr_7 [(unsigned short)6] [i_1 - 1] [(unsigned short)6])))))));
    }
    var_25 = ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
    var_26 = ((/* implicit */_Bool) ((int) max((((/* implicit */long long int) var_15)), (var_9))));
}
