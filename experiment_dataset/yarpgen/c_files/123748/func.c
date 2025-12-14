/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123748
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)3584)))) : (arr_1 [i_0])))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (var_3)))) ? (((/* implicit */int) max(((unsigned short)5079), (var_0)))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) (unsigned short)52385))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 2676242554205077543LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_9))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))))));
        var_10 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)4342)) != (((/* implicit */int) (signed char)52)))))) : (min((arr_1 [i_0]), (((/* implicit */unsigned long long int) (short)-4343))))))) ? (max((((/* implicit */unsigned long long int) var_2)), (arr_1 [i_0]))) : (arr_1 [i_0])));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_11 = ((/* implicit */short) ((int) (signed char)112));
        arr_5 [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_4 [i_1])) : (var_1)))));
        var_12 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))));
    }
    var_13 = ((/* implicit */_Bool) (unsigned short)3);
    var_14 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((int) (unsigned short)26958))) ? (var_3) : (var_3)))));
}
