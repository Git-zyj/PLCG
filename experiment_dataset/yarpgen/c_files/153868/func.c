/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153868
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
    var_10 = ((/* implicit */unsigned long long int) (short)-32764);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14017))) : (arr_4 [(_Bool)1] [i_1])))) ? (min((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) (signed char)-114)))) : (min((18446744073709551609ULL), (((/* implicit */unsigned long long int) (short)32756))))))) || (((/* implicit */_Bool) var_7))));
                var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4634505838097061083ULL)) ? (arr_2 [i_1] [i_1] [i_0]) : (var_0))), (max((arr_4 [(unsigned short)16] [i_1]), (var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) (signed char)3)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL)))))) : (min(((~(arr_2 [i_1] [i_0] [i_0]))), (((/* implicit */unsigned long long int) var_6))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned short) (signed char)-112))))), (((unsigned int) var_5)))));
}
