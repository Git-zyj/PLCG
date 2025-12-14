/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155641
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
    var_12 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) && (((/* implicit */_Bool) (unsigned short)58797))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(arr_1 [i_0 - 1])));
        arr_4 [i_0] = ((/* implicit */long long int) 831206837);
        arr_5 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(1508290551U)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) | (-584087748)))));
    }
    var_13 = ((/* implicit */unsigned short) var_4);
}
