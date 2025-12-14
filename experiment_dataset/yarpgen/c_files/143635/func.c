/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143635
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
    var_12 = ((6429754585619620159LL) - (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)50458))))), ((+(6429754585619620141LL))))));
    var_13 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)48)))) + (max((((/* implicit */long long int) var_0)), (arr_0 [i_0]))))), (((/* implicit */long long int) arr_5 [i_1]))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)12))))) ? (((/* implicit */int) max((arr_2 [i_0 - 1]), (((/* implicit */short) (_Bool)1))))) : (((((/* implicit */int) arr_5 [i_1 - 1])) >> (((((((/* implicit */_Bool) (signed char)-45)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38338))))) - (2316275798U)))))));
            }
        } 
    } 
}
