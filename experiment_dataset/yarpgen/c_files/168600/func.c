/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168600
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
    var_17 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)49069)), (-160185744)))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [(_Bool)1])) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) arr_2 [i_0] [i_1])) - (((/* implicit */int) arr_1 [i_0]))))));
                var_19 = ((/* implicit */int) var_13);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_16);
}
