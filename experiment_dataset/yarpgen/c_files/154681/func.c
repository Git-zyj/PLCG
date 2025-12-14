/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154681
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
    var_16 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) max((var_12), (var_12)))))), (max((var_3), ((-(143738469)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_6) : (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (var_3) : (arr_0 [i_0])))))) ^ (((arr_3 [i_1] [i_1]) << (((arr_3 [i_0] [(signed char)0]) - (5239740565416308365ULL)))))));
                var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(3ULL))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (3) : (arr_0 [i_1])))) ? (max((((/* implicit */unsigned long long int) -1273350108)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-99)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((max((max((-1238326628), (((/* implicit */int) (_Bool)1)))), ((~(var_6))))) >> (((var_11) - (1517496151)))));
}
