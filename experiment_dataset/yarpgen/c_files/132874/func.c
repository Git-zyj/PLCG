/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132874
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
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0))))) > (((/* implicit */int) min((((/* implicit */short) var_1)), (var_7))))))), (min((((/* implicit */unsigned long long int) var_15)), (1656362206059536949ULL)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) var_11);
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 4] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)4] [i_1]))) : (arr_0 [i_0])))) ? ((-(var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [7ULL])) && (((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)5]))))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1]))) != (arr_2 [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)-14527))) && (((/* implicit */_Bool) 2458966857652852207ULL))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((min((min((2458966857652852200ULL), (2458966857652852207ULL))), ((~(15987777216056699409ULL))))) == (((((var_16) * (var_12))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (var_12)))))));
}
