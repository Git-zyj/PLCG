/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181187
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) (signed char)50);
                arr_7 [i_1] [(signed char)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1])) % (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)54)), ((unsigned char)150))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_12)))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)50)), ((unsigned char)150))))));
    var_15 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned char)111))))));
    var_16 = ((/* implicit */unsigned char) 5635526531020255883LL);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)109)) >> (((((/* implicit */int) (unsigned char)105)) - (84)))))))) ? (var_1) : (var_4)));
}
