/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160706
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
    var_16 = ((/* implicit */unsigned int) (-(min(((-(((/* implicit */int) var_1)))), (((var_2) ^ (((/* implicit */int) var_3))))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) 18193750582065485058ULL)) || (((/* implicit */_Bool) var_12))))), (min((6759210886471466584LL), (((/* implicit */long long int) var_1)))))), (((/* implicit */long long int) ((unsigned int) (~(var_5))))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) var_7);
        var_19 = ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (18193750582065485058ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -94829675)) ? (((/* implicit */int) (signed char)115)) : (-1676570020))))))) ? (max((((/* implicit */int) arr_1 [i_0])), ((~(((/* implicit */int) arr_0 [(unsigned char)17])))))) : (((/* implicit */int) arr_1 [i_0])));
        var_20 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((/* implicit */int) min((arr_1 [14]), (((/* implicit */unsigned short) var_7))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_12)))))) : ((~(((/* implicit */int) (unsigned char)90)))));
    }
}
