/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176230
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
    var_11 = ((/* implicit */unsigned short) 137438953456LL);
    var_12 |= var_8;
    var_13 = ((/* implicit */int) ((unsigned int) var_9));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((_Bool) 16440469845215670425ULL);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_2 [i_0] [(unsigned short)7]))) > (arr_1 [i_0])));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [(_Bool)1]);
    }
    var_14 = var_10;
}
