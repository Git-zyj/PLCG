/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103828
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((var_7), (((/* implicit */int) (unsigned short)57344)))), (((var_2) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)193))))))) ? (((((((arr_2 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) + (9223372036854775807LL))) >> (((min((((/* implicit */int) arr_0 [i_0])), (var_7))) - (34302))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_1)))))))))));
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_0 [(unsigned short)10])))))) >= (max((((/* implicit */unsigned int) (unsigned char)63)), (arr_1 [(_Bool)1]))))) ? (((unsigned int) ((((/* implicit */_Bool) (unsigned char)200)) ? (arr_1 [6ULL]) : (arr_1 [(unsigned char)2])))) : (((/* implicit */unsigned int) (~((~(0)))))))))));
    }
    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(var_7)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)55)), (5551749006224264691ULL))) : (((/* implicit */unsigned long long int) min((2097136U), (((/* implicit */unsigned int) (unsigned char)36))))))) >> (((((((/* implicit */long long int) (~(((/* implicit */int) (short)-25548))))) ^ ((~(var_0))))) - (7731017625298568280LL)))));
    var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)47))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)55)) >> (((((/* implicit */int) (unsigned char)193)) - (164)))))) ^ (min((var_3), (((/* implicit */unsigned long long int) var_2))))))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */int) (unsigned char)57)) == (((/* implicit */int) (short)32745))))))) * ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) != (var_3))))))));
}
