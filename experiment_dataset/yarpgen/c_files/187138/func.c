/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187138
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
    var_15 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned int) ((short) 3138624666453364145LL))), (min((4294966784U), (((/* implicit */unsigned int) (short)32766)))))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) 15182015357456556763ULL))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) min((((unsigned long long int) -6370910835810684304LL)), (((/* implicit */unsigned long long int) max((min(((unsigned char)165), ((unsigned char)112))), (max(((unsigned char)109), ((unsigned char)111))))))));
                var_17 = ((/* implicit */signed char) (unsigned char)178);
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1)))));
            }
        } 
    } 
}
