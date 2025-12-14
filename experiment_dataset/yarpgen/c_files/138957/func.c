/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138957
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (((~(11299838441477520457ULL))) % ((~(min((arr_2 [i_0] [11LL]), (((/* implicit */unsigned long long int) arr_1 [i_0])))))))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(11299838441477520446ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)55))) : (4712917140350545114LL)));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((unsigned int) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) 3953009385U)) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) (unsigned char)67)))))));
}
