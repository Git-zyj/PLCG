/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11975
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 |= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)-32753)) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))))), (((((/* implicit */_Bool) var_15)) ? (3352475911U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                var_17 = ((/* implicit */unsigned int) max(((~(((unsigned long long int) 2790911220U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2873407817U)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_13)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) min((((/* implicit */short) var_6)), (var_11)))))) ? (((var_4) ? (((/* implicit */unsigned long long int) min((3352475928U), (((/* implicit */unsigned int) (_Bool)1))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))) : (var_0))))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_3)))) / (((int) (signed char)127)))))));
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_3] [i_2] = ((/* implicit */signed char) arr_10 [i_4] [i_3] [i_2]);
                    arr_14 [i_4] [i_3] [i_2] = ((/* implicit */signed char) arr_8 [i_4] [i_2]);
                }
            } 
        } 
    } 
}
