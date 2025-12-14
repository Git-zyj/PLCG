/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157037
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) (+(var_11)));
        arr_3 [i_0] = (short)-18353;
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((max((((/* implicit */unsigned short) (signed char)-57)), (arr_2 [i_0] [(unsigned short)6]))), ((unsigned short)30980))))));
    }
    var_16 = ((/* implicit */unsigned short) min(((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)57))))))), (((/* implicit */unsigned int) var_13))));
    var_17 = ((/* implicit */unsigned short) ((int) var_1));
}
