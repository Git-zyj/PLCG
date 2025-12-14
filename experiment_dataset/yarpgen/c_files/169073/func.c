/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169073
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
    var_13 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_4 [1] [i_0] = (+(arr_2 [i_0 + 1] [i_0 + 1]));
        arr_5 [i_0] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (unsigned short)40681)))));
    }
    var_14 = ((/* implicit */short) ((((((var_5) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)212)))) / (var_0))) + (((/* implicit */int) (unsigned short)0))));
}
