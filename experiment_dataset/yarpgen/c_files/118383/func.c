/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118383
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
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (short)-1)), (((((/* implicit */_Bool) ((long long int) var_15))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) -2616635725764541211LL)) ? (var_0) : (((/* implicit */unsigned long long int) var_7))))))));
    var_17 ^= ((unsigned short) var_14);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0 - 1])))) ? (max((8589869056ULL), (((/* implicit */unsigned long long int) (signed char)-57)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)65535)))))));
    }
    var_18 = ((/* implicit */int) var_8);
}
