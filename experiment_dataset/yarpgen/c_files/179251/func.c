/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179251
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
    var_18 &= ((/* implicit */short) min((var_10), (((/* implicit */long long int) var_12))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (var_12)))))) ? (((((/* implicit */long long int) 660765401)) / (6353415557217328002LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_2 [i_0] = ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (2033943543) : (((/* implicit */int) (short)-17520)))) : (((/* implicit */int) ((2464345546865970079ULL) >= (((/* implicit */unsigned long long int) 9073582407110004660LL))))))), (((((/* implicit */_Bool) min(((unsigned char)253), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)130))))));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 8292273283116258994ULL)))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */signed char) var_2);
        var_22 |= ((/* implicit */signed char) ((int) arr_0 [i_1 - 1]));
    }
    var_23 &= ((/* implicit */_Bool) var_12);
}
