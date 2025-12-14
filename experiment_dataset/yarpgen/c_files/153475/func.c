/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153475
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), ((((!(((/* implicit */_Bool) arr_3 [i_0])))) ? (arr_1 [i_1 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))));
                var_21 -= ((/* implicit */int) ((min((min((((/* implicit */unsigned int) arr_4 [i_1 - 3] [i_0] [i_0])), (2139202883U))), (((/* implicit */unsigned int) arr_2 [i_1 - 2])))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 3] [i_0])))));
                var_22 = ((/* implicit */unsigned char) ((min((var_3), (((/* implicit */long long int) arr_3 [i_0])))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned char) 941250346);
        var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_6 [i_2]) : (arr_6 [i_2])))), (((((/* implicit */unsigned long long int) arr_6 [i_2])) + (12829968443845236818ULL)))));
    }
    var_24 = ((/* implicit */_Bool) var_10);
}
