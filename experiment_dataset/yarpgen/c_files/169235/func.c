/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169235
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
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) ((_Bool) ((unsigned short) var_13)));
                var_15 ^= ((/* implicit */unsigned int) ((short) ((signed char) var_10)));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_1])) << (((arr_4 [i_0 + 1] [(unsigned short)1] [i_1]) - (7753171694678745165LL)))))))) ? (((((/* implicit */_Bool) ((short) arr_4 [i_0 - 1] [i_1] [i_0]))) ? (((((/* implicit */_Bool) (short)13994)) ? (var_8) : (4621755532426502553LL))) : (min((-9223372036854775805LL), (((/* implicit */long long int) arr_6 [i_0])))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_1 - 1] [i_1] [i_1]))))));
            }
        } 
    } 
    var_17 = ((long long int) ((((/* implicit */unsigned long long int) ((long long int) -7155045362973112179LL))) >= (((((/* implicit */_Bool) var_2)) ? (12368301500011649453ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))));
}
