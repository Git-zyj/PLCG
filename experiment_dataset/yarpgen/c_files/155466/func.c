/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155466
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
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                var_12 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)-8245))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_0 + 1] [i_2]), (arr_3 [i_1] [i_2])))) && ((!(((/* implicit */_Bool) var_8))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (short)8246)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_3))))) ? ((((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (var_5))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_0 - 1]) : (arr_1 [i_2])))));
                }
            }
        } 
    } 
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) max((var_9), ((short)32749))))))) ? ((((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && ((_Bool)0))))) : ((~(var_0))))));
}
