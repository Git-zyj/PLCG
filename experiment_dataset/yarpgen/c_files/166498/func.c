/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166498
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
    var_10 *= ((/* implicit */unsigned char) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_11 = (unsigned short)512;
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)8037)) : (((/* implicit */int) (unsigned short)65022))))));
        var_12 = ((/* implicit */short) ((var_9) < (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (short)13481)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */long long int) ((/* implicit */int) (short)-32412))) & (var_9)))));
        arr_8 [i_1] [i_1] = (unsigned short)36491;
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) (unsigned short)36491))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13481)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_9)))) ? (15280422208028342854ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29045))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min(((-(arr_4 [(unsigned short)10] [i_2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) (unsigned short)65045))))))))));
        var_17 = arr_9 [(unsigned short)13];
    }
    var_18 = ((/* implicit */long long int) (((((!(((/* implicit */_Bool) var_3)))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36485))))) != ((-(min((var_9), (((/* implicit */long long int) var_0))))))));
}
