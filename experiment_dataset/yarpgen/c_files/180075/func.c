/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180075
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
    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)31537)) : (max((-848033449), (((/* implicit */int) (signed char)72))))))) ? (var_1) : (((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (12LL)))));
    var_21 = ((/* implicit */_Bool) var_15);
    var_22 = ((/* implicit */unsigned char) -931300732);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_23 += ((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 323492796437569515LL)) * (17876319370274333471ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned short) var_13))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [i_1] [i_0 + 2] [i_0])) : (((/* implicit */int) (unsigned short)65521)))))))));
                var_24 = (!(((/* implicit */_Bool) (~(((/* implicit */int) var_16))))));
            }
        } 
    } 
}
