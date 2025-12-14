/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178439
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
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((2147483647) > (max((((((/* implicit */_Bool) arr_0 [(unsigned short)0] [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))), (((/* implicit */int) min((arr_2 [i_0]), ((unsigned short)10053))))))));
                var_15 = ((((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (max(((unsigned short)10038), (arr_1 [i_0])))))) / (((/* implicit */int) arr_1 [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_10);
}
