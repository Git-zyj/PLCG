/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118097
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_17 ^= ((/* implicit */_Bool) (signed char)-1);
        var_18 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
        var_19 = ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) <= ((-2147483647 - 1))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        var_20 ^= ((/* implicit */unsigned int) (!(((_Bool) -2147483632))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) arr_6 [i_2]))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned char) 2147483647);
        var_23 = ((/* implicit */short) arr_5 [i_3]);
    }
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_3))));
}
