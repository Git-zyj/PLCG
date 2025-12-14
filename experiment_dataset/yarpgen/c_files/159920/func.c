/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159920
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((((arr_5 [i_0] [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_1 [i_1] [i_0 - 1])))), ((+(((/* implicit */int) arr_4 [i_0 - 1]))))))) ? (max((((((/* implicit */_Bool) arr_7 [i_0] [i_1 - 3] [i_0])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_3 [i_0 - 1] [1U] [i_0 - 1])))), (((/* implicit */int) min((arr_8 [i_0 - 1]), (arr_8 [i_0])))))) : (((((/* implicit */_Bool) ((arr_4 [i_0 - 1]) ? (arr_0 [(short)3]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1])))))) ? (((/* implicit */int) arr_1 [i_1 - 3] [i_0 - 1])) : ((~(((/* implicit */int) arr_1 [(_Bool)1] [i_0]))))))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (+(arr_7 [i_0] [i_0] [6ULL]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) max(((short)-1), (((/* implicit */short) (unsigned char)255))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) ((var_2) + (var_2)))))))));
    var_19 = ((/* implicit */int) max(((!(((/* implicit */_Bool) max((var_10), (var_10)))))), (var_7)));
    var_20 = var_0;
}
