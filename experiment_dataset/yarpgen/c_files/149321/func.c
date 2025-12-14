/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149321
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
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-23))))))) - (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_12)))), (var_7)))));
    var_16 = ((/* implicit */short) ((((((((/* implicit */_Bool) 2239181739U)) ? (1960642598) : (1218787744))) > (((/* implicit */int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((unsigned long long int) (unsigned short)6372)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) var_6)) == (var_13)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        arr_2 [4ULL] [4ULL] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_17 &= ((/* implicit */_Bool) max((((short) arr_0 [i_0 - 3])), (((/* implicit */short) ((((/* implicit */int) var_9)) == (1960642609))))));
    }
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -601800612)) ? (601800611) : (((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1218787744)) ? (((/* implicit */int) (signed char)61)) : (-900607352)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)8681)))) : (((/* implicit */int) var_9)))))));
}
