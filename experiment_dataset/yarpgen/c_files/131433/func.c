/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131433
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)49))) ? ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_19))))))))))));
    var_21 = ((/* implicit */signed char) max((var_18), (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-((-(((/* implicit */int) arr_2 [20] [i_1] [18ULL])))))))));
                    arr_7 [i_2] [i_2] [11ULL] [(unsigned short)18] = ((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (((((((/* implicit */int) (short)-13)) + (2147483647))) >> (((((/* implicit */int) (signed char)-50)) + (60)))))));
                }
            } 
        } 
    } 
}
