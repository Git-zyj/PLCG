/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166097
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
    var_15 = ((/* implicit */int) var_1);
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned short) ((signed char) ((long long int) var_13)))))));
    var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((931262848812320766ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))))) < (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 931262848812320794ULL))))), (min((((/* implicit */long long int) (_Bool)1)), (var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [(_Bool)1] [i_1])) < (((/* implicit */int) var_2)))))))), (((/* implicit */long long int) ((int) arr_1 [9] [(short)15]))))))));
                arr_4 [i_0 - 2] [(_Bool)1] = ((/* implicit */short) min((((/* implicit */int) max((max((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned char) var_3)))), (((/* implicit */unsigned char) var_3))))), (((((/* implicit */int) ((short) (short)2))) & (((((/* implicit */_Bool) arr_1 [(short)15] [17])) ? (((/* implicit */int) arr_1 [(short)17] [(short)17])) : (((/* implicit */int) var_13))))))));
            }
        } 
    } 
}
