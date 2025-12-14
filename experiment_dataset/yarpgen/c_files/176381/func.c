/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176381
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (short)-32763))));
        var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -439741315)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)32767))))));
        var_21 += ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 + 1])) - (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) arr_0 [i_0 + 1] [i_0 - 1]));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) (!(((((((/* implicit */_Bool) arr_0 [i_1] [(short)17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) : (arr_5 [i_1] [i_1]))) <= (((unsigned int) arr_2 [i_1]))))));
        var_23 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)3)), ((-(9223372036854775807LL)))));
    }
    for (int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) (short)-19365))))))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_7 [i_2]))));
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((int) (unsigned short)31288)), (((/* implicit */int) var_6))))) >= (((((var_0) << (((/* implicit */int) var_8)))) << (((min((((/* implicit */unsigned int) (unsigned short)58495)), (var_1))) - (58474U))))))))));
}
