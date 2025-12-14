/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124689
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((max((((36028779839094784ULL) > (var_7))), ((!(((/* implicit */_Bool) 4503598553628672LL)))))) ? ((((_Bool)1) ? (min((var_0), (-8228137629949608575LL))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
    var_19 = ((/* implicit */short) max((var_19), (var_10)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_1] [(short)6] [i_1] = ((/* implicit */unsigned long long int) 8228137629949608575LL);
                var_20 &= ((/* implicit */unsigned long long int) max((min((((var_2) >> (((arr_1 [i_0] [i_1 - 2]) + (2924257215695637004LL))))), (((((/* implicit */_Bool) 7508014203012579958LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7508014203012579961LL))))), (((long long int) arr_4 [(short)16]))));
                var_21 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_9))))), (min((arr_4 [i_1]), (var_14)))))), (max((15674005364400760770ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                var_22 |= ((/* implicit */short) arr_3 [i_0 + 1] [(_Bool)1]);
            }
        } 
    } 
}
