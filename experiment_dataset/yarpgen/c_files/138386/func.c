/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138386
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
    var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) | (((/* implicit */int) (_Bool)1))))) > ((-(var_11))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = (!(((arr_1 [i_0]) && (arr_1 [i_0]))));
                var_20 += ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
            }
        } 
    } 
}
