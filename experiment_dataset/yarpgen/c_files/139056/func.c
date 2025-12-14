/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139056
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
    var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((short) 536751757209538610ULL))) ? (min((var_2), (((/* implicit */long long int) 541830642)))) : (((/* implicit */long long int) max((var_1), (var_10)))))));
    var_20 ^= ((/* implicit */unsigned char) ((int) ((signed char) (short)-15271)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((0), (16515072)))) ? ((~(536751757209538595ULL))) : (max((((/* implicit */unsigned long long int) ((int) arr_5 [i_0] [i_1] [i_1 + 1]))), ((-(653747223504346821ULL)))))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_1)) : (-3042374796275363444LL)))) ? (((((/* implicit */_Bool) (unsigned short)23906)) ? (((/* implicit */int) (short)-3801)) : (((/* implicit */int) (short)-12820)))) : (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1 - 3])) ? (((/* implicit */int) var_0)) : (arr_2 [i_0 - 3] [i_1 - 3])))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))))))));
}
