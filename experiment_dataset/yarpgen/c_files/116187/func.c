/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116187
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 18; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((-7542125967894645047LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_3)) - (27573)))))))))) : (max((min((var_15), ((-9223372036854775807LL - 1LL)))), ((+(5454120640726450335LL)))))));
                    arr_10 [i_0] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_10)) < ((+(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
    var_17 = var_13;
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (_Bool)1)))))));
    var_19 = ((((/* implicit */int) var_7)) > (((((/* implicit */int) ((short) (short)20525))) | (((/* implicit */int) var_11)))));
}
