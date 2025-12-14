/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107225
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))) + (((/* implicit */int) var_1))))) ? (var_3) : (min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (var_3)))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        arr_4 [(unsigned short)2] = ((/* implicit */unsigned char) arr_1 [i_0 + 3] [i_0 + 3]);
        arr_5 [(_Bool)1] = ((/* implicit */unsigned char) (((((((~(((/* implicit */int) var_5)))) + (2147483647))) >> (((min((((/* implicit */int) (unsigned char)0)), (var_3))) + (1360142806))))) == (((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        arr_9 [i_1 + 2] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) var_9))));
        arr_10 [i_1] [(signed char)14] = ((arr_1 [i_1 - 1] [i_1 + 3]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)0)));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0)))))) >= (arr_0 [i_1 + 1])));
    }
    var_11 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((var_3), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((0U), (((/* implicit */unsigned int) (_Bool)1))))))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)21286))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned short)8))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4))));
}
