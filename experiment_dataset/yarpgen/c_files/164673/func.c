/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164673
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
    var_18 = min((((unsigned short) var_5)), (var_13));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_19 -= ((/* implicit */short) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_0 [i_0 + 1])) + (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_8))))))));
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-32748))));
        var_21 = min((((((/* implicit */_Bool) -4453301147813696844LL)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0]))))) : (-4453301147813696844LL))), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_22 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) min((arr_2 [i_1]), (var_17)))) << ((((~(((/* implicit */int) arr_3 [i_1] [i_1])))) + (56294))))));
        var_23 = ((/* implicit */unsigned short) (~(min((var_11), (((unsigned int) (short)32767))))));
    }
}
