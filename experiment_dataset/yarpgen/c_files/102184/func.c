/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102184
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned char)128)), (17451448556060672LL))), (((/* implicit */long long int) ((unsigned int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_2))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 100663296U))))))));
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((((((/* implicit */_Bool) 2132189710136405045ULL)) && (((/* implicit */_Bool) -17451448556060694LL)))) || (((var_2) || (((/* implicit */_Bool) 2315060408608911877LL)))))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) || (var_7))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (var_9)))))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) << (((((min((2315060408608911877LL), (arr_1 [i_0]))) + (2168312235009697585LL))) - (30LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 2]))) | ((~(arr_0 [i_0 + 3] [i_0])))))) : (((arr_3 [i_0]) ? (14636779292971381458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1])))))));
        var_15 = ((/* implicit */long long int) var_9);
        arr_4 [i_0] = ((/* implicit */signed char) (-(((arr_0 [i_0 + 2] [i_0 + 2]) / (arr_0 [i_0 - 1] [i_0 - 2])))));
        arr_5 [i_0] = ((/* implicit */int) arr_3 [i_0]);
    }
    var_16 = ((/* implicit */int) var_11);
}
