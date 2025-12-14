/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100875
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */unsigned int) (~(arr_4 [(_Bool)1] [i_1])));
                arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
                arr_6 [i_0] [i_0] [(unsigned short)2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [10] [(short)6])) && (((/* implicit */_Bool) arr_4 [i_0] [i_1])))))) <= (arr_2 [i_0] [i_0] [i_0]))) && (((/* implicit */_Bool) (+(1829603151))))));
                arr_7 [2U] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(2999628860U)))) ? ((-(((unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [(_Bool)1])))))));
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((1894934679U) ^ (((/* implicit */unsigned int) var_7))))) ? (arr_4 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 14303634106057825121ULL))))))))))));
            }
        } 
    } 
    var_12 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) 14303634106057825119ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_3))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))));
}
