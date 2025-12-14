/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152936
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
    var_14 = ((/* implicit */_Bool) var_9);
    var_15 = ((/* implicit */signed char) (-(var_9)));
    var_16 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) arr_2 [(short)1]);
                var_18 = ((/* implicit */unsigned short) ((((unsigned long long int) 5202463451363614670LL)) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_4 [i_1]))))))));
            }
        } 
    } 
}
