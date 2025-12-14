/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1095
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_12 = ((((/* implicit */long long int) ((int) -1LL))) ^ (max((((/* implicit */long long int) (signed char)39)), ((+(0LL))))));
                            var_13 = ((/* implicit */unsigned int) var_6);
                            var_14 = ((/* implicit */unsigned char) ((max((var_9), (((/* implicit */long long int) (signed char)-32)))) * (((/* implicit */long long int) ((/* implicit */int) ((short) arr_8 [i_0] [i_1 + 2] [i_2] [i_3 + 1]))))));
                            var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-38)), (8388607U)))) ? (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-40)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-62)))))), (((arr_6 [i_0]) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) arr_6 [i_0]))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) (!(((_Bool) 445102630))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_8);
    var_18 |= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (signed char)-39)), (4286578681U))) + (max((((/* implicit */unsigned int) var_4)), (var_11)))));
}
