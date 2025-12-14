/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136327
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
    var_20 -= ((/* implicit */short) (-(((((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_4)))) >> (((/* implicit */int) min((var_18), (((/* implicit */unsigned short) (_Bool)1)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_2 [2U] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [6LL])))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) 26ULL);
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_18)) == ((~(((/* implicit */int) ((_Bool) var_6)))))));
}
