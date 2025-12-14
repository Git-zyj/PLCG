/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15668
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
    var_11 |= ((/* implicit */long long int) min(((((!(((/* implicit */_Bool) var_3)))) ? (4750864620462124746ULL) : (((/* implicit */unsigned long long int) min((var_2), (1221223581)))))), (((/* implicit */unsigned long long int) (signed char)99))));
    var_12 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (min((((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)169)) : (-723796984)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1]), (((/* implicit */short) (signed char)99))))) ? (((((/* implicit */_Bool) arr_4 [14LL] [i_0])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))))))));
                var_14 = ((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */_Bool) min(((short)-32296), (arr_0 [i_0])))) && (((/* implicit */_Bool) var_1))))), (arr_0 [i_0])));
                var_15 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (var_6)))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [(signed char)5])) : (((/* implicit */int) arr_3 [i_0] [i_1])))) : ((-(((/* implicit */int) arr_4 [i_0] [i_0])))));
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) % (var_8))));
            }
        } 
    } 
}
