/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145430
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned long long int) var_8))))))))));
    var_13 = ((/* implicit */_Bool) min((var_13), (var_1)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)59)))) << (((/* implicit */int) var_1))));
    }
    for (long long int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_4), (((/* implicit */long long int) arr_5 [i_1]))));
        arr_6 [i_1] [i_1] &= ((/* implicit */_Bool) arr_0 [i_1]);
    }
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (var_4) : (-1LL)))))))) ^ (((3LL) % (1LL))))))));
    var_18 = ((/* implicit */int) ((unsigned long long int) -1LL));
}
