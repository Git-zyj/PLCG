/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123228
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
    var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) || (((/* implicit */_Bool) ((var_5) % (-1LL))))))), (var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */long long int) var_8);
                    arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((-(var_13)))))) ? (min((var_5), (((/* implicit */long long int) arr_6 [i_2] [i_2 - 1] [i_1] [i_2 + 2])))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_15 -= ((/* implicit */_Bool) (~(3925535406U)));
                }
            } 
        } 
    } 
    var_16 *= ((/* implicit */unsigned long long int) var_0);
}
