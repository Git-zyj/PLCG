/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167469
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
    var_10 = ((/* implicit */_Bool) ((var_3) - (((/* implicit */long long int) 1149940019))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1149940035)) ? (-1149940019) : (-1149940016)));
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_2))) && (((((((/* implicit */_Bool) -1149940021)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_3))) == (var_3)))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [4]);
                /* LoopSeq 2 */
                for (unsigned short i_2 = 4; i_2 < 11; i_2 += 3) 
                {
                    arr_10 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1149940035)) ? (((/* implicit */int) arr_2 [i_0])) : (1149939997)))) ? (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) -1149940028)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1149939999)) ? (1149940018) : (-1149940025))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_8 [i_0 - 1] [i_0]);
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [i_0] = ((((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (arr_8 [i_0] [i_0]) : (arr_8 [i_0] [i_0]))) | (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) ^ (1149940008)))));
                    var_13 = ((/* implicit */_Bool) -1149940024);
                }
            }
        } 
    } 
}
