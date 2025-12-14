/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185349
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
    var_16 ^= ((/* implicit */long long int) var_1);
    var_17 = ((/* implicit */_Bool) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) (-((-(var_14)))))) ? ((+(var_14))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (~(((max((3856922153U), (((/* implicit */unsigned int) (unsigned short)54442)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                    arr_10 [i_0] [i_1] [6ULL] = ((/* implicit */unsigned long long int) (short)-9935);
                    var_19 ^= ((/* implicit */long long int) var_12);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_10);
}
