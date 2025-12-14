/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153792
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
    var_15 |= ((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 1852582284))) >= ((+(((/* implicit */int) var_5))))))), (var_0)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 ^= ((/* implicit */long long int) ((((1852582272) & (min((((/* implicit */int) arr_0 [i_0] [i_0])), (365805724))))) + ((~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (-1852582285)))))));
        arr_4 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) min((1852582284), (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)250)) + (((/* implicit */int) (unsigned char)250))))) : (max((var_1), (((/* implicit */unsigned long long int) arr_3 [i_0])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_0))) + (2846670575441015950LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_17 -= -384626594;
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) + (var_4)))) : (arr_3 [i_0])));
    }
    var_19 |= ((/* implicit */unsigned long long int) var_9);
    var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (815240760028018194ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
