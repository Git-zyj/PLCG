/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180403
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
    var_14 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)87)), (1605105992)))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) var_5)))))));
    var_15 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_13 [i_2] = ((/* implicit */_Bool) var_8);
                            var_16 = ((/* implicit */unsigned int) min(((signed char)-87), ((signed char)68)));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((_Bool) min(((signed char)16), ((signed char)43)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_9);
    var_19 += ((/* implicit */unsigned char) var_8);
}
