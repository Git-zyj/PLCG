/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130812
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
    var_12 |= ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_2))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) max((var_13), ((unsigned char)221)));
                arr_6 [i_1] [i_1] [i_1 + 4] = ((/* implicit */int) max((((unsigned int) (!(((/* implicit */_Bool) (signed char)48))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 16)))))));
                arr_7 [i_1] [17LL] = ((/* implicit */_Bool) min((-14), (-17)));
                arr_8 [i_1] [i_1] = -2242263687818370247LL;
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
}
