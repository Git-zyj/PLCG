/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149447
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
    var_18 = ((/* implicit */unsigned long long int) var_11);
    var_19 &= ((/* implicit */short) var_10);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)47986)) ? (((((/* implicit */_Bool) var_17)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17560))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)79))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) (unsigned short)17571);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1)))));
            var_23 += ((/* implicit */short) ((unsigned long long int) arr_8 [i_2 + 1]));
        }
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) arr_6 [i_1]);
        arr_10 [i_1] &= ((/* implicit */_Bool) var_12);
    }
    var_24 = ((/* implicit */unsigned int) max((var_24), (4294967295U)));
}
