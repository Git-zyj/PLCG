/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137054
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
    var_19 += ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */long long int) var_9))))), ((-(var_17))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) - (((((/* implicit */_Bool) (unsigned short)11047)) ? (((/* implicit */int) (signed char)32)) : (var_1))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 |= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_0]))) : (((/* implicit */int) var_12)))));
                arr_5 [(unsigned char)5] [(unsigned char)5] [3U] = ((/* implicit */_Bool) var_8);
                var_21 ^= ((/* implicit */int) ((max((var_0), (((/* implicit */unsigned long long int) (-(-1069429884)))))) & (((/* implicit */unsigned long long int) (+((~(var_11))))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) ((12275648301743193610ULL) >> (((697819590) - (697819551)))))) ? (max((var_0), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) var_18))))));
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(var_15))))))) ? (var_18) : (((/* implicit */long long int) ((((-1069429884) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
}
