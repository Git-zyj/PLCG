/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146829
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_1] [i_1] [i_2] = max((((/* implicit */unsigned long long int) ((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_2 + 1] [i_2])))))), (((unsigned long long int) arr_5 [i_2 + 1])));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (!(((/* implicit */_Bool) 1965687345U)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 3931454475U)), ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) -3586686579661679673LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-3586686579661679655LL)))))));
}
