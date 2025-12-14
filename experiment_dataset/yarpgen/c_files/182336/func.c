/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182336
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
    var_10 += ((/* implicit */short) (unsigned short)2);
    var_11 &= ((/* implicit */_Bool) (unsigned char)82);
    var_12 += ((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), ((-(-1768986557)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 7; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0 - 2] [i_0] [3ULL] = -300721398077369115LL;
                arr_6 [i_1] &= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) (signed char)69)), (((((/* implicit */_Bool) (signed char)15)) ? (13432503018933689909ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))))))) != (((/* implicit */unsigned long long int) -6952084151163235671LL))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */_Bool) (short)14176)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-26)))) > (((/* implicit */int) ((_Bool) (_Bool)1))))));
}
