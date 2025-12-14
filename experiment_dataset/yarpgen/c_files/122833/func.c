/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122833
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
    var_19 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_9)))) | (((((/* implicit */_Bool) var_2)) ? ((~(((/* implicit */int) (short)22325)))) : (((((/* implicit */_Bool) (short)23256)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))));
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_9))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (-946162975704384042LL) : (-8934388460861749708LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_0]))))))));
                    var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_5 [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) 1940189022941073870LL)) && (((/* implicit */_Bool) (short)-1)))), ((!(((/* implicit */_Bool) -3LL))))))))));
                    arr_8 [i_0] [1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)1] [i_1] [i_1])) ? (-1940189022941073867LL) : (((/* implicit */long long int) arr_4 [i_0] [i_0])))) : (((/* implicit */long long int) ((int) (short)13335)))));
                }
            } 
        } 
    } 
}
