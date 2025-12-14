/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185938
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
    var_17 = ((/* implicit */unsigned char) var_8);
    var_18 = ((/* implicit */long long int) (-(((((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) arr_2 [i_0])))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775800LL)) ? (arr_0 [(unsigned short)4] [(unsigned short)4]) : (7819585811463936289ULL)))) ? (((((/* implicit */int) (unsigned short)65532)) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (13268175532720506929ULL))) - (13268175532720506930ULL))))) : (((/* implicit */int) (unsigned char)149)))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) max(((short)18502), (arr_5 [i_1])))) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((unsigned long long int) -477795113))));
            }
        } 
    } 
}
