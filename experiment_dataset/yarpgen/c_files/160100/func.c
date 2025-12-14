/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160100
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) max((var_1), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [6LL] [i_1]))) : (var_7)))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)14145)) ? (((/* implicit */int) (short)14145)) : (((/* implicit */int) (short)856)))), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) min(((short)-14134), (((/* implicit */short) arr_2 [i_1] [i_1] [3]))))) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (17901836691689743684ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14146)) ? (1503386390) : (((/* implicit */int) arr_1 [3]))))) & (((var_6) << (((1592062689632617314LL) - (1592062689632617313LL))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [(_Bool)1])) & (((/* implicit */int) arr_4 [7LL] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1] [i_1] [(_Bool)1])) - (((/* implicit */int) arr_4 [i_1] [i_1] [i_1]))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)14145))) | (-5514833731371367634LL)))));
                arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((arr_0 [i_1] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_0 [7LL] [i_1])))))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (arr_2 [i_1] [i_1] [1LL]))))) & (min((var_7), (((/* implicit */unsigned long long int) arr_3 [i_0] [(_Bool)1] [i_0]))))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned long long int) var_5);
    var_11 = ((((/* implicit */int) min((((/* implicit */short) var_3)), (var_4)))) != (((/* implicit */int) var_2)));
}
