/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149398
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
    var_19 = 1688787302;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((unsigned int) min(((+(((/* implicit */int) var_2)))), (-1688787278)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)59);
        var_21 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_22 -= ((/* implicit */unsigned long long int) (short)4736);
        arr_4 [i_0] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((1688787310) > (((/* implicit */int) var_7))))), (arr_0 [i_0]))) - (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */int) arr_1 [i_0])), (1688787315)))))));
    }
    for (short i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_6 [(_Bool)1] [i_1]))));
        arr_7 [i_1] = ((/* implicit */unsigned int) var_2);
        var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-4473)), (((unsigned int) max((11ULL), (((/* implicit */unsigned long long int) arr_5 [i_1])))))));
    }
}
