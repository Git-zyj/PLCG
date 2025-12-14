/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115024
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
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_9))))))) ? (((/* implicit */int) min((arr_5 [i_0] [i_0]), (var_9)))) : (((/* implicit */int) (!(((_Bool) var_2)))))));
            var_14 += ((/* implicit */_Bool) arr_2 [i_0]);
            var_15 += var_11;
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_0] = var_11;
            arr_10 [i_0] [i_0] [i_2 - 1] = (+(2147483647ULL));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_16 = ((/* implicit */_Bool) min((((/* implicit */int) var_9)), ((+(((/* implicit */int) (_Bool)1))))));
                var_17 += max((var_1), (var_4));
                var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))));
                var_19 = min(((-((-(arr_1 [10ULL] [i_0]))))), (((var_9) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : ((~(var_3))))));
            }
        }
        var_20 = (+(((((/* implicit */_Bool) (-(2937214694466012585ULL)))) ? (var_8) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_3))))));
    }
    var_21 = ((((/* implicit */_Bool) 2147483647ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6786096212724863861ULL));
    var_22 = max((var_12), (min(((((_Bool)1) ? (2661020959450681881ULL) : (var_3))), ((+(var_3))))));
    var_23 = var_1;
    var_24 += min((11487727228993471273ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
}
