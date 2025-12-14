/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163258
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) min((((/* implicit */int) min(((short)7092), (((/* implicit */short) (unsigned char)207))))), (((((/* implicit */_Bool) max((var_8), (((/* implicit */short) (unsigned char)49))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (var_10)))) : (((/* implicit */int) var_14)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((arr_5 [i_1] [i_2] [i_0]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-72))))))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)169)) == (((/* implicit */int) (unsigned char)48))))) != (((/* implicit */int) arr_3 [i_0]))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_14)) / (((/* implicit */int) (unsigned char)191))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_3] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4] [i_3]))) : (3367679260972380773LL))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) != (arr_10 [i_3])))))));
                var_24 = ((/* implicit */unsigned long long int) arr_9 [i_3]);
            }
        } 
    } 
    var_25 -= ((/* implicit */unsigned int) var_16);
}
