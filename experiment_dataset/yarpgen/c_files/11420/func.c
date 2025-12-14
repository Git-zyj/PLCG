/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11420
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_0 [i_0])) <= (665704151))))), (((((/* implicit */_Bool) 665704166)) ? (((/* implicit */int) (signed char)47)) : (((/* implicit */int) (signed char)32))))));
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-33)), (-258541609657910038LL)))) ? (((/* implicit */int) (short)-9084)) : (arr_2 [i_0] [5LL] [i_0]))))));
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), ((+(var_7))))))));
                var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) arr_1 [i_1 - 1] [i_1 + 2])), (((((/* implicit */_Bool) 14515661309471153327ULL)) ? (arr_3 [i_0] [i_1]) : (3265243663615899508LL)))));
                arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)2135)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) (short)-4557);
}
