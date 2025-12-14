/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180361
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */unsigned short) arr_4 [i_0]);
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (arr_0 [i_0]))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) 817042787142561021LL);
}
