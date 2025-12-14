/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17042
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) + (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((long long int) var_9))) : (var_4)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_4 [0LL] [i_0])) ? (((/* implicit */long long int) var_5)) : (5842110274491479792LL))));
            var_22 = ((/* implicit */_Bool) ((long long int) 15206284690168193032ULL));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_23 = ((((var_17) + (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (signed char)-120))))))) - (((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)35615)) - (var_12))), ((-(((/* implicit */int) var_11))))))));
            var_24 = ((/* implicit */_Bool) min((var_24), (arr_6 [i_2 + 1] [0LL])));
        }
        arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0]))))));
        var_25 = ((/* implicit */_Bool) var_13);
    }
    for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
    {
        arr_10 [(signed char)7] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) <= (((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (arr_5 [i_3 - 1] [i_3 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [(_Bool)1])))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    var_26 = arr_14 [i_3] [i_4] [(_Bool)1] [i_5];
                    var_27 = ((/* implicit */int) var_8);
                    var_28 = arr_3 [i_5];
                }
            } 
        } 
    }
    var_29 += ((/* implicit */_Bool) ((unsigned long long int) ((((1081488608361408350ULL) * (var_4))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (var_17)))))));
}
