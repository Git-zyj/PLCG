/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167608
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
    var_12 = ((/* implicit */unsigned long long int) ((max((var_3), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)127))))))) % (max((137438920704LL), (((/* implicit */long long int) (short)-1))))));
    var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) >= (min((7360447696814901367ULL), (((/* implicit */unsigned long long int) var_11))))))) - (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_14 = ((/* implicit */long long int) (-((~(arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_15 = ((/* implicit */long long int) (-((+(11086296376894650236ULL)))));
            var_16 ^= ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)158)))))))));
            arr_5 [(unsigned short)2] [i_1] [(unsigned short)2] &= ((/* implicit */short) arr_2 [(_Bool)0] [i_1]);
        }
        var_17 += ((((/* implicit */_Bool) min((((int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) 7360447696814901356ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [(short)8] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned short)12] [(unsigned short)5] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))) : (((max((arr_0 [i_0]), (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) / (((/* implicit */int) arr_2 [(_Bool)1] [(short)12])))));
    }
}
