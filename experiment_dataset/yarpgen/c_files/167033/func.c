/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167033
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
    var_16 = ((/* implicit */unsigned char) var_13);
    var_17 = (~(((/* implicit */int) ((unsigned char) var_7))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) var_12);
        var_19 = ((/* implicit */long long int) var_4);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)48)) <= (((/* implicit */int) (unsigned char)59))));
        var_20 = ((/* implicit */unsigned char) (unsigned short)55405);
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 321054193319231945LL)) && (((/* implicit */_Bool) (unsigned char)205))));
    }
}
