/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121654
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
    var_11 |= ((/* implicit */long long int) ((unsigned short) (unsigned char)40));
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((var_7), (var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [0ULL] |= ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 + 2]))))), (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 2]))))));
                var_13 &= ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) max((var_7), (arr_4 [i_1])))))));
            }
        } 
    } 
}
