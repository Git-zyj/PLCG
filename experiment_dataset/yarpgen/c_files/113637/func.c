/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113637
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
    var_12 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)0))));
                arr_4 [i_0] = ((/* implicit */signed char) arr_0 [i_0 - 1]);
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_3), ((_Bool)0))))) | ((-(var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) && (((/* implicit */_Bool) (+(var_7))))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1099511625728LL)) != ((~(var_7)))));
}
