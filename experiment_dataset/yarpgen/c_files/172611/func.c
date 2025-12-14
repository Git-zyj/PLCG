/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172611
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) min((min((var_9), (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) var_7))))))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned char)255)))) << (((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0 + 1] [i_1]) : (((/* implicit */int) arr_2 [i_0])))) - (1894665159)))))));
                arr_4 [i_0] = ((/* implicit */_Bool) (~(-1349070710)));
                var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_1]);
            }
        } 
    } 
}
