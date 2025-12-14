/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174858
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
    var_13 = min((((((/* implicit */_Bool) 0LL)) ? (((-1) / (((/* implicit */int) var_10)))) : (((/* implicit */int) ((short) var_4))))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)19092)) : (((/* implicit */int) (unsigned short)65535)))));
    var_14 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((((/* implicit */_Bool) (~(((arr_2 [15U] [i_0]) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))) : (((((/* implicit */_Bool) ((int) arr_2 [i_0] [(unsigned short)20]))) ? (max((((/* implicit */long long int) arr_2 [i_0 + 1] [i_0])), (-461091664773163724LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))))));
        arr_5 [i_0] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))) | (((unsigned long long int) var_0))))));
        arr_6 [i_0] = max((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (signed char)(-127 - 1))))))))), (((((/* implicit */int) ((((/* implicit */int) arr_2 [(unsigned char)1] [i_0 - 2])) < (((/* implicit */int) arr_1 [(_Bool)1] [i_0]))))) ^ (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0 - 2]))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-5617567730300958320LL) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 4] [i_0 - 2]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1] [16])))))) ? (max((((/* implicit */int) (unsigned char)54)), (((int) (short)-32757)))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) arr_0 [i_0] [14LL])) : (((/* implicit */int) arr_0 [i_0] [16])))) : (((/* implicit */int) arr_1 [(unsigned char)9] [i_0]))))));
    }
}
