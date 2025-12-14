/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17899
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */int) var_9)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max(((unsigned short)18282), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18268))) : (-3386259350822959858LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (signed char)43)))))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) (signed char)-1)) ? (8603182621573610141LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240)))))));
}
