/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119176
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~((-2147483647 - 1)))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_3))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))) : (var_1)));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1 + 2] [(unsigned char)4] [i_1 + 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) ((((274869518336ULL) == (((/* implicit */unsigned long long int) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (var_1))))));
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0 - 1])))))));
                }
            } 
        } 
    } 
}
