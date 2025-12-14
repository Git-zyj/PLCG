/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108047
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
    var_19 = ((/* implicit */unsigned long long int) var_5);
    var_20 = var_14;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min((min((((/* implicit */int) (_Bool)0)), (var_6))), (701212927)));
                arr_6 [0U] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 701212953)) ? (arr_3 [i_1 - 1] [i_0] [i_0]) : (arr_3 [i_0] [i_1 - 3] [i_1]))) / (((/* implicit */long long int) (+(701212927))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 3892918060U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (8252208404819131655ULL)));
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((signed char) 701212938)))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) (+(3072710567153619333ULL)));
}
