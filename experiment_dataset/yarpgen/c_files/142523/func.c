/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142523
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
    var_10 = ((/* implicit */unsigned char) max((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) / (3684252427U))), ((+(1071032932U))))), (var_7)));
    var_11 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)56909)), (3684252427U)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (unsigned short)56906))), (arr_0 [i_0 - 1]))))));
                var_12 = ((/* implicit */long long int) var_9);
            }
        } 
    } 
}
