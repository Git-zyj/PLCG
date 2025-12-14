/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166459
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
    var_17 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_8)))) ? (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) && (((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_14)), (var_6)))))));
    var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_11 [i_3] |= ((/* implicit */signed char) (-(max((-563820586), (((/* implicit */int) (unsigned char)193))))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_6 [i_3] [i_2] [i_1] [i_0])))))) << (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-29544)))))) * ((~(arr_5 [i_0] [i_1]))))))))));
                        }
                    } 
                } 
                arr_12 [i_0] = ((/* implicit */long long int) max((min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) var_4))))), (((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])) >> (((var_3) - (6211464317791113153ULL))))))), (2147483647)));
            }
        } 
    } 
}
