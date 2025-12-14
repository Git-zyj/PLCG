/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131814
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 ^= min(((+(((/* implicit */int) (unsigned char)71)))), (min((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), ((unsigned short)63252)))), (((((/* implicit */int) (unsigned short)63248)) >> (((var_6) + (7772499953031526894LL))))))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)162)) <= (((/* implicit */int) (signed char)-35))))) >> (((1727773199) - (1727773191)))));
            }
        } 
    } 
    var_18 -= var_3;
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (+(((((/* implicit */int) (short)20795)) << (((((((/* implicit */int) min(((short)-31299), ((short)-19243)))) + (31325))) - (17))))))))));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) max(((unsigned char)94), ((unsigned char)94)))) : (var_8)));
    var_21 = ((/* implicit */unsigned char) min((((/* implicit */int) var_13)), ((~(((((/* implicit */int) (short)-5092)) & (2033172613)))))));
}
