/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121902
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
    for (long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((arr_1 [i_0 - 2] [i_0 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])))))), (max((((/* implicit */unsigned long long int) arr_3 [i_0 + 1])), (min((arr_1 [i_0] [i_0]), (arr_1 [i_1] [i_1 + 1])))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1 + 1]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_3);
    var_13 = ((/* implicit */int) var_10);
    var_14 |= ((/* implicit */unsigned short) (-((+(max((4055364209U), (((/* implicit */unsigned int) (unsigned short)10782))))))));
}
