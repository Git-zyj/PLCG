/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115712
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
    var_13 = max((((/* implicit */int) var_1)), (min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) ((((/* implicit */int) (short)28923)) == (((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((min((((var_12) | (((/* implicit */int) var_5)))), (arr_5 [i_2] [i_1] [(unsigned char)14] [10ULL]))), ((~(((/* implicit */int) arr_3 [(signed char)8] [i_2] [i_2])))))))));
                    var_15 = ((/* implicit */int) max((((unsigned long long int) 2364140050U)), (((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (short)22600)), (var_8))))))));
                }
            } 
        } 
    } 
}
