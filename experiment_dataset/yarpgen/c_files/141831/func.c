/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141831
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
    var_18 = ((/* implicit */int) ((_Bool) ((((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned long long int) var_8)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
    var_19 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)30124)) * (((/* implicit */int) (_Bool)0)))) <= (((/* implicit */int) (_Bool)1))));
    var_20 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 -= max((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)48368)) != (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))), ((~(max((((/* implicit */long long int) (_Bool)1)), (arr_5 [i_0] [i_0]))))));
                arr_7 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) (_Bool)1))))))), (var_13)));
            }
        } 
    } 
    var_22 -= (_Bool)1;
}
