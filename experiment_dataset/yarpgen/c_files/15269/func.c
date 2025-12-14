/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15269
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
    var_14 = var_12;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_0 [i_0 - 1] [(unsigned short)11]))))));
                arr_6 [i_0 + 1] [i_0] [0LL] = ((/* implicit */int) max((min((((/* implicit */long long int) (-(arr_1 [i_1])))), (((long long int) (_Bool)1)))), (((/* implicit */long long int) max((max((((/* implicit */int) (_Bool)1)), (arr_3 [i_0] [8] [i_0]))), (((int) (_Bool)1)))))));
                arr_7 [i_0 - 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-99)), (var_3)))) ? (arr_1 [i_0 - 1]) : (((((/* implicit */int) var_13)) | (((/* implicit */int) var_2)))))))));
            }
        } 
    } 
}
