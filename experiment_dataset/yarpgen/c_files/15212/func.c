/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15212
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_11 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1]))));
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((1394903076U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    arr_9 [12U] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [6ULL])) ? ((+((~(((/* implicit */int) (unsigned short)46976)))))) : (((/* implicit */int) ((unsigned short) var_1)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_2))));
    var_14 += ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)46976)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (min((var_3), (((/* implicit */long long int) (short)13705)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))))));
    var_15 ^= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((var_3) - (121136790039084201LL)))))) : (67043328U))));
}
