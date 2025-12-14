/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144018
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
    var_18 = ((/* implicit */long long int) var_5);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!((!(((var_7) == (((/* implicit */int) arr_6 [i_2 + 2] [i_1 - 1] [i_1 - 3] [i_0])))))))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_2] [i_1])) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 2])) % (((/* implicit */int) (unsigned char)255))))))) ? (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_1])), (var_6))))) % (min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) < ((+(((/* implicit */int) var_6))))))))));
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) + (((/* implicit */int) (unsigned short)3)))))));
                }
            } 
        } 
    } 
}
