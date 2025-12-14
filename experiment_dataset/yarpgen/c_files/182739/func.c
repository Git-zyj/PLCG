/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182739
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (var_17)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [(_Bool)1] = (!(max((((arr_1 [i_0]) || (arr_3 [i_0]))), ((!(var_6))))));
                    arr_8 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) max(((!(arr_6 [i_1] [i_1 + 1] [i_1 + 1]))), (max((arr_6 [i_2] [i_2] [i_1 + 1]), (arr_6 [(unsigned short)4] [i_2] [i_1 + 1])))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0])))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) (~((((~(((/* implicit */int) var_4)))) | (((/* implicit */int) arr_4 [i_0]))))));
    }
    var_22 = ((/* implicit */_Bool) ((((var_11) && ((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((((((/* implicit */int) var_6)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (_Bool)0)) : ((~(((/* implicit */int) var_4))))))));
}
