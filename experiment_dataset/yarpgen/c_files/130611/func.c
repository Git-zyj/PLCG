/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130611
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_16 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) : (((long long int) var_5)))), (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_0])) ? (((/* implicit */int) (unsigned short)65535)) : (arr_3 [i_0] [i_2])))))))));
                    var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0] [(unsigned short)2])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (var_1) : (arr_2 [i_0] [i_2]))))));
                    var_19 = (+(max((arr_0 [i_2] [i_1]), (arr_0 [i_0] [i_0]))));
                }
            } 
        } 
    }
    var_20 = var_13;
    var_21 = ((/* implicit */long long int) ((int) var_11));
}
