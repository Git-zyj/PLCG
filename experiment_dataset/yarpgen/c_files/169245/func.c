/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169245
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
    var_15 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((var_16), ((((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (max((((arr_0 [5U]) & (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(_Bool)1])) && (arr_3 [(_Bool)0] [9ULL])))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) == (arr_4 [i_1])))))))))));
                var_17 = ((/* implicit */short) max((((((((/* implicit */_Bool) var_11)) ? (arr_4 [0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) == (((/* implicit */int) arr_3 [i_0] [i_0])))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (arr_0 [8U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) << (((int) arr_3 [i_1] [i_0])))))));
            }
        } 
    } 
}
