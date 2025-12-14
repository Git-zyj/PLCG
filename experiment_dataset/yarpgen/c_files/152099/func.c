/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152099
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
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)3)) && (((/* implicit */_Bool) 2147483633))))), ((unsigned short)9056)));
    var_13 = (unsigned char)220;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) min(((unsigned short)56480), ((unsigned short)56496)));
                var_15 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) << (((((((/* implicit */int) (unsigned short)9056)) / ((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))) - (75)))));
                var_16 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) arr_2 [i_0 + 3] [i_1] [i_0 + 3])), ((-(var_7))))) + (((((/* implicit */int) (unsigned short)40362)) * (((/* implicit */int) (unsigned char)16))))));
            }
        } 
    } 
}
