/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148762
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 8388576LL)) * (var_7)))) ? ((-(8070624037613473303LL))) : (((((/* implicit */_Bool) arr_5 [(_Bool)1] [(_Bool)1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [0ULL]))) : (-8070624037613473315LL))))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_16)), (arr_4 [i_0] [(short)10]))))));
                arr_8 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 8070624037613473315LL)) || (((/* implicit */_Bool) var_3)))) && (((((/* implicit */_Bool) -8070624037613473315LL)) && ((!(((/* implicit */_Bool) -8070624037613473303LL))))))));
                arr_9 [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                var_19 = ((/* implicit */_Bool) arr_5 [i_1] [(short)9] [20]);
            }
        } 
    } 
    var_20 = ((/* implicit */int) min((max((8070624037613473314LL), (max((((/* implicit */long long int) var_13)), (var_10))))), (((/* implicit */long long int) var_4))));
    var_21 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_3)) != (var_0))) ? (((/* implicit */int) min((var_11), (((/* implicit */unsigned char) var_3))))) : (((/* implicit */int) var_2)))) << ((((~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (var_18))))) + (111)))));
    var_22 = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8070624037613473315LL))) / (-8070624037613473321LL))), (((max((8070624037613473314LL), (((/* implicit */long long int) var_2)))) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) - (((((/* implicit */_Bool) (unsigned char)48)) ? (max((8070624037613473329LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-60)))))));
}
