/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124336
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
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_1] = min((((max((12818158169550701771ULL), (((/* implicit */unsigned long long int) 2591374544016171796LL)))) + (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_13)))))), (((/* implicit */unsigned long long int) ((((arr_2 [i_1]) & (((/* implicit */unsigned long long int) var_6)))) != (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)1309)))))))));
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (!(var_2))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)64222))))) : (min((((/* implicit */long long int) min((var_12), (((/* implicit */int) (unsigned short)10889))))), (min((var_10), (((/* implicit */long long int) 4294967280U)))))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) 3361377114U);
                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)64211))))));
                var_22 -= ((/* implicit */_Bool) arr_0 [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (!(var_9)));
}
