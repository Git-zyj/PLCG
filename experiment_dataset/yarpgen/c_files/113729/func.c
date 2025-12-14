/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113729
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((2575951088U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_6 [0ULL] [8LL])))) ? ((~(((/* implicit */int) (signed char)-82)))) : ((-(((/* implicit */int) (signed char)-82)))))))));
                var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_4 [i_1]), (1314243482922892616ULL)))) ? (max((1314243482922892616ULL), (arr_4 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-12777), (((/* implicit */short) (_Bool)0)))))))) >> ((((~(arr_5 [i_0] [i_0] [1U]))) - (18192498777810154411ULL)))));
            }
        } 
    } 
    var_21 = min((((/* implicit */long long int) ((unsigned char) var_13))), (var_1));
    var_22 = ((/* implicit */_Bool) var_1);
    var_23 = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((unsigned char) var_15))), (max((((/* implicit */unsigned int) var_4)), (1719016198U))))), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) | (var_18)))))));
}
