/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106027
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
    var_12 += ((/* implicit */int) ((((/* implicit */_Bool) -512)) || (((/* implicit */_Bool) (signed char)-20))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (-(arr_3 [0] [0]))))));
                            arr_11 [i_1] = ((/* implicit */short) arr_3 [i_1] [i_1 + 1]);
                        }
                    } 
                } 
                var_14 ^= ((/* implicit */int) ((((/* implicit */long long int) max((var_1), ((+(((/* implicit */int) var_6))))))) - (((((((/* implicit */int) (signed char)-25)) >= (((/* implicit */int) var_5)))) ? (((arr_1 [i_0]) >> (((/* implicit */int) var_5)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) var_1))))))))));
            }
        } 
    } 
}
