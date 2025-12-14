/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108655
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
    var_10 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_0]) % (((/* implicit */long long int) arr_3 [(unsigned char)12] [i_0 + 2]))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(arr_4 [i_1])))), (((long long int) max((((/* implicit */unsigned int) var_2)), (var_9))))));
        arr_6 [i_1] = (unsigned short)18491;
        var_14 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (unsigned char)139)) - (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-39)) || (((/* implicit */_Bool) arr_4 [i_1]))))))));
    }
}
