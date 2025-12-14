/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178701
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 1] [i_1] = ((/* implicit */int) min((min((arr_2 [i_1 + 1] [i_0 + 1]), (arr_0 [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) > (1589524184U))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_4 [i_1] [i_1 + 1]))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) max((var_0), (((/* implicit */unsigned int) var_6))))), (var_9))) : (var_9))))));
}
