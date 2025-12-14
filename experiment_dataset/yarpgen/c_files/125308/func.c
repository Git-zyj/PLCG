/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125308
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -4765997017466976330LL)) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (_Bool)0)))), (min((arr_1 [i_0]), (arr_1 [(_Bool)1])))));
        var_12 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)230)) && (((/* implicit */_Bool) (unsigned char)230)))));
    }
    var_13 = var_2;
}
