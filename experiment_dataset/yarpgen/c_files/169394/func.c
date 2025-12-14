/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169394
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
    var_18 = var_1;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(short)15] [(short)15] [i_1] = min((153438416), (((/* implicit */int) (_Bool)1)));
                arr_6 [i_0] [i_1] = ((/* implicit */short) (((-(min((((/* implicit */unsigned long long int) var_17)), (3837533586262996644ULL))))) ^ (((/* implicit */unsigned long long int) max((min((var_11), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (arr_1 [i_1] [i_0])))))))));
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (arr_1 [i_0] [16ULL]) : (((/* implicit */unsigned long long int) var_16)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10)))))))) ? (((max((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (max((((/* implicit */long long int) var_12)), (var_11))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_10), (arr_2 [i_0])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */int) var_10)), (var_2))), (((var_6) ? (((/* implicit */int) var_12)) : (var_9)))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_6))));
}
