/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184785
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
    var_12 = ((/* implicit */_Bool) (-(max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) -2605046377847820318LL)))))))));
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_8)), (min((-2605046377847820315LL), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)19)))))))));
    var_14 = ((/* implicit */unsigned int) (unsigned short)43161);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (+((~(71782494)))));
        var_16 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0]))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43159)) | (((arr_0 [i_0]) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (unsigned short)1932))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) max((3663448799U), (((/* implicit */unsigned int) (signed char)-105))))) ? (((/* implicit */int) ((unsigned char) (unsigned short)9913))) : (((/* implicit */int) arr_0 [6LL])))) >= (max((min((2097151), (((/* implicit */int) (short)-737)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1])))))))));
    }
}
