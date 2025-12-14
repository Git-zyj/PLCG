/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156207
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) var_8))))))) ? (((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */_Bool) (unsigned short)7555)) ? (arr_1 [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) - (4066120044U))))) : (((/* implicit */int) ((-1276242363) == (-1276242352))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_18))) - (3893665843U))) - (((arr_1 [i_0]) + (((/* implicit */unsigned int) 1276242360)))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
    }
    var_20 = max((max((((((/* implicit */int) var_7)) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5)))), ((((((~(((/* implicit */int) var_6)))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) var_0)), (4322573578678534638ULL))) - (15778896619257618549ULL))))));
}
