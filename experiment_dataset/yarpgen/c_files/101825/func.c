/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101825
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [i_0])) ? (-4217313120585020782LL) : (((/* implicit */long long int) -2030957404))))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)255))) : (10603501464663619035ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) -4217313120585020782LL)))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_0);
    var_15 = ((/* implicit */unsigned char) ((((long long int) var_9)) != (((/* implicit */long long int) ((((/* implicit */int) ((4217313120585020764LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))))) ^ (((((/* implicit */_Bool) (unsigned char)0)) ? (1443383992) : (((/* implicit */int) (unsigned char)234)))))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) ((((((/* implicit */_Bool) -2030957404)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4081))) : (11770436721558973115ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4092)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (18014389919547392LL)))))))));
}
