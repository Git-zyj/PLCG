/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159696
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) <= (((long long int) ((arr_1 [i_0] [i_0]) - (arr_1 [i_0] [i_0]))))));
        var_15 = var_0;
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (((((-(var_12))) | (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) * (((/* implicit */long long int) ((/* implicit */int) max(((!(arr_0 [i_0] [i_0]))), (((var_7) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
    }
    /* LoopSeq 2 */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_16 = ((/* implicit */_Bool) max((max((arr_4 [i_1]), (arr_4 [i_1]))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_13))))) + (((/* implicit */int) var_0)))))));
        var_17 = arr_0 [i_1] [i_1];
        var_18 = ((/* implicit */signed char) (((!(((arr_5 [i_1] [6LL]) && (((/* implicit */_Bool) var_9)))))) && (((/* implicit */_Bool) var_1))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_2] [i_2]))));
        var_20 = arr_9 [i_2];
    }
    var_21 = var_12;
    var_22 = ((((max((((/* implicit */long long int) var_3)), (var_12))) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (((/* implicit */long long int) (~(((/* implicit */int) max((var_3), (var_1))))))));
    var_23 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_12), (var_7)))) || ((!(((/* implicit */_Bool) var_12)))))))));
}
