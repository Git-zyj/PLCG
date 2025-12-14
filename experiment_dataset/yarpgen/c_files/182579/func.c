/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182579
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
    var_11 = ((/* implicit */_Bool) var_0);
    var_12 = ((/* implicit */int) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) 0)))) || (((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_1))))))), (var_10)));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_14 = ((/* implicit */int) max((var_14), ((+(((/* implicit */int) (_Bool)1))))));
        var_15 |= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        var_16 = max((((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_2 [i_1 - 1] [i_1]))))))), (((var_5) ? (3531748943U) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_1 + 1]) == (arr_3 [i_1 - 1]))))))));
        var_17 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_18 -= ((/* implicit */short) var_5);
        var_19 += ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_0 [i_2] [i_2]))))));
        var_20 *= ((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_2] [i_2]));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_21 |= ((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_4 [i_3]))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_2 [i_3] [i_3])) : (((/* implicit */int) (unsigned short)32256))))) ? ((~(8U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3] [i_3])))))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3]))) != (arr_9 [i_3]))))) : (arr_10 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_23 = ((/* implicit */int) max(((_Bool)1), ((_Bool)1)));
        var_24 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-14851))))), (min((((((/* implicit */int) arr_2 [i_3] [(_Bool)1])) + (((/* implicit */int) arr_1 [(short)9] [(short)9])))), (((/* implicit */int) max((var_4), ((_Bool)1))))))));
    }
}
