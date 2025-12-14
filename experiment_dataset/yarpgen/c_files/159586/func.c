/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159586
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            var_13 |= ((/* implicit */short) var_4);
            var_14 = var_5;
            arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_2))))), (max((((/* implicit */unsigned long long int) var_7)), (4109843826508475826ULL)))))) ? (max((((/* implicit */long long int) arr_1 [i_1 - 3] [i_1 - 1])), (2598356304522592388LL))) : (min((((/* implicit */long long int) ((var_3) / (((/* implicit */int) var_2))))), (var_6)))));
            var_15 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)28))))));
        }
        var_16 = ((/* implicit */unsigned long long int) ((long long int) (((+(((/* implicit */int) (signed char)1)))) != (((((/* implicit */_Bool) var_12)) ? (var_3) : (var_3))))));
        var_17 *= ((/* implicit */signed char) var_7);
    }
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_11))));
}
