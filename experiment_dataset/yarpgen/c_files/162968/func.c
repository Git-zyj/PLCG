/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162968
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_10))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_13))));
    var_16 = ((/* implicit */signed char) var_0);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) min(((+(((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) var_5)))))), (((/* implicit */int) ((short) ((arr_1 [i_0] [i_0]) || (((/* implicit */_Bool) var_4))))))));
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [10] [10]))) : (((((/* implicit */_Bool) arr_0 [(short)12] [(short)12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [16U]))) : (min((var_11), (((/* implicit */long long int) var_8))))))));
        var_19 = ((/* implicit */int) min((((((/* implicit */long long int) 2398061247U)) | (-5329619580799375916LL))), (min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (4896745029196182608LL) : (var_11))), (min((4896745029196182608LL), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))));
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)16322)), (4896745029196182586LL)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((/* implicit */int) arr_0 [i_0] [i_0])) + (20239))))))))) : (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)16322)), (4896745029196182586LL)))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((((/* implicit */int) arr_0 [i_0] [i_0])) + (20239))) - (42194)))))))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_4 [i_1]))))), (((arr_1 [i_1] [i_1]) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) var_5)))))))))));
        var_21 = ((/* implicit */int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))) == (var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (min((((/* implicit */unsigned int) arr_3 [i_1])), (2628978191U)))));
    }
}
