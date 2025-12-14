/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106222
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
    var_10 = ((/* implicit */unsigned long long int) ((unsigned char) var_9));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_1);
        var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) var_9);
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_3)))))) < (((/* implicit */int) ((short) (unsigned short)65535)))));
    }
    var_12 = ((/* implicit */unsigned int) var_1);
    var_13 = ((/* implicit */short) ((((/* implicit */int) ((short) var_2))) ^ ((+(-159915854)))));
}
