/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132788
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
    var_18 = var_2;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_19 = ((unsigned int) (~(((((/* implicit */_Bool) (unsigned short)46528)) ? (14680064U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43665)))))));
        var_20 *= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) ((unsigned short) var_17))) : (((((/* implicit */int) (unsigned short)43665)) | (((/* implicit */int) (unsigned short)308))))))) % (((unsigned int) arr_1 [i_0])));
    }
    var_21 -= var_1;
    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) 16515072U)))));
}
