/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175676
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_17 ^= ((/* implicit */short) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_0 [20])) / (((/* implicit */int) arr_0 [i_0]))))));
        var_18 *= var_1;
        var_19 &= var_9;
        var_20 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_0 [i_0])), (var_0)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_1 [i_0] [i_0])))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (((((+(((/* implicit */int) arr_0 [0ULL])))) | (((/* implicit */int) var_1)))) > ((+(((/* implicit */int) arr_0 [i_0])))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)51466)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (arr_1 [i_1] [i_1]))))));
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)14070)) : (((/* implicit */int) arr_4 [i_1] [17] [i_1]))));
            arr_6 [i_2] [i_1] [9LL] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_0 [i_1]))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_3])) ^ (((/* implicit */int) arr_0 [i_3]))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-107)) >= ((+(((/* implicit */int) arr_0 [i_3]))))));
        var_26 &= ((/* implicit */unsigned short) (-((-(((/* implicit */int) (_Bool)1))))));
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) (_Bool)1)))))));
}
