/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186209
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
    var_18 = ((/* implicit */unsigned short) (signed char)31);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_0]);
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))) <= (((/* implicit */int) var_16))));
        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)45000))));
    }
    for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (signed char)-89)) : ((~(((((/* implicit */int) (signed char)28)) % (((/* implicit */int) (signed char)-32))))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) (signed char)60);
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((long long int) (signed char)-3));
    }
}
