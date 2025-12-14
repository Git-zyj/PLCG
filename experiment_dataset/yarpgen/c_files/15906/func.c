/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15906
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
    var_16 = ((/* implicit */int) min((((max((4203116384U), (((/* implicit */unsigned int) var_12)))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1675399193987675438LL)))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (7237001961764897834LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : ((~(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-67)) || (((/* implicit */_Bool) 906089053)))))) < ((-(arr_3 [i_1 + 1] [i_1 - 1])))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (short)-11611))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((arr_0 [i_0]) < (arr_0 [i_0])))), ((+(((/* implicit */int) (_Bool)0))))));
                arr_5 [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [4ULL] [(signed char)2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (max((arr_3 [i_1] [i_0]), (((/* implicit */unsigned int) (signed char)125))))))) | (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 - 1])))));
            }
        } 
    } 
}
