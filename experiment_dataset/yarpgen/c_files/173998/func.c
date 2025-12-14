/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173998
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
    var_16 = ((/* implicit */_Bool) max((var_16), ((((!(((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned long long int) var_3)))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (~(var_8)));
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 18446744073709551590ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1]))) : (var_8))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0 + 2] [i_1]), (((/* implicit */unsigned short) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
