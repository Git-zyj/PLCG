/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110238
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [i_1]));
                    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2] [10ULL])), (max((var_4), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)248)))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((unsigned char) (!(((/* implicit */_Bool) 5023194768714832167ULL)))))));
}
