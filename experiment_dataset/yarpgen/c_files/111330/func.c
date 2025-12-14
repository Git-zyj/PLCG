/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111330
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
    var_20 = ((((/* implicit */_Bool) (unsigned char)165)) ? (4294967294U) : ((+(var_10))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((19U) / (4294967289U)))) ? (min((4294967273U), (1U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)42)))))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (10ULL))));
                    var_21 &= ((/* implicit */long long int) (signed char)90);
                    arr_10 [i_0 + 1] [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_4 [i_0])) > (((unsigned long long int) (unsigned char)71)))))) : (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0 + 1])) : (arr_4 [i_0])))));
                }
            } 
        } 
    } 
}
