/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112694
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
    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -305134001)) ? (4294967272U) : (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */long long int) min((2013946290), (((/* implicit */int) var_13))))) : (max((((/* implicit */long long int) (_Bool)1)), (var_5))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_16)))) ? (((((/* implicit */_Bool) 24U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_2))) : (((/* implicit */unsigned int) var_18)))) - (3177936844U)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))))) >> (((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)40132)), (2985839283U)))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_7 [1U] [i_1] [i_1])))) - (31980)))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_3 [i_1])), (3U))) != (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_0])))));
                    arr_9 [i_2] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (max((arr_0 [i_0] [i_2]), (arr_0 [i_2] [i_1])))));
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_16)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0])) > (arr_2 [i_0] [i_1]))))) : (23U)));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_17)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-28489))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (short)28488)))));
}
