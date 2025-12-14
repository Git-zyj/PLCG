/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156875
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
    var_15 &= ((/* implicit */unsigned short) (~(((int) var_5))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 3]))));
        arr_4 [i_0] = ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)0)))) << (((((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2])) - (68)))));
    }
    var_17 = ((/* implicit */_Bool) 3378026106435593428ULL);
    var_18 = ((/* implicit */unsigned short) (unsigned char)228);
    var_19 = ((/* implicit */int) var_6);
}
