/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170905
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
    var_10 = ((/* implicit */unsigned short) var_1);
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((var_1), (((/* implicit */short) (unsigned char)221)))), (var_1)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) && (((/* implicit */_Bool) 36028797018963967LL)))) && (((/* implicit */_Bool) arr_4 [i_0] [i_0 - 1]))));
                arr_5 [i_0] [i_1] = arr_0 [i_0];
                arr_6 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) & (((((/* implicit */int) var_0)) & (((/* implicit */int) arr_0 [i_1 - 2]))))));
                arr_7 [11ULL] = ((/* implicit */int) max((((/* implicit */long long int) min((var_7), (arr_2 [i_0] [i_1 + 2])))), (max((((/* implicit */long long int) arr_0 [i_0 + 3])), ((-(-36028797018963966LL)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) var_9);
}
