/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161256
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
    var_10 ^= ((/* implicit */long long int) ((unsigned long long int) var_1));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                var_11 -= ((/* implicit */unsigned int) ((((((/* implicit */int) ((var_3) >= (((/* implicit */int) var_0))))) / (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))) << ((((~(((((/* implicit */int) var_1)) - (((/* implicit */int) var_4)))))) - (64054)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_10 [i_2] [i_1 - 2] [16] [i_1] = var_5;
                            var_12 = ((/* implicit */unsigned char) var_8);
                        }
                    } 
                } 
                var_13 += ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_6))))) ? ((+(var_3))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))))));
                arr_11 [4U] [i_0] [16ULL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? ((+(((/* implicit */int) ((unsigned char) var_2))))) : (((/* implicit */int) ((signed char) var_0)))));
                arr_12 [(short)1] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) ((var_3) < (((/* implicit */int) var_6))))), (((short) var_1))))) ? (((((/* implicit */int) ((unsigned char) var_1))) >> (((((unsigned long long int) var_1)) - (52ULL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_8) : (var_8)))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_5))))) : ((-(((/* implicit */int) var_9))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((int) var_5));
}
