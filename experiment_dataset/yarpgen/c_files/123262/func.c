/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123262
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
    var_10 = ((((((/* implicit */long long int) ((unsigned int) var_6))) + (var_8))) >> (((((((((/* implicit */_Bool) (unsigned short)49652)) ? (205372645480018849LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9100))))) + (((long long int) 7249220216309673692LL)))) - (7454592861789692479LL))));
    var_11 |= ((/* implicit */int) 6719052151607871123LL);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_0 [(_Bool)1])))) ? (arr_1 [i_0 - 3]) : (((/* implicit */unsigned int) arr_0 [i_0 - 1]))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) ^ (445276507)))) ? (764958375U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 957881428))))))));
        arr_3 [i_0 - 3] [i_0 - 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_0 - 2]) + (arr_0 [i_0 + 1])))) ? (((/* implicit */int) ((unsigned short) 267386880))) : (((((/* implicit */_Bool) (unsigned short)62647)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])))));
    }
}
