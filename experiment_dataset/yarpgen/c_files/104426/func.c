/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104426
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
    var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((var_1), (((/* implicit */short) var_12))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */_Bool) 31457280U);
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_1 [i_0]))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) (signed char)-106)) ^ (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_1 [i_0])))), (arr_2 [2LL] [2LL])));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (((((_Bool)1) ? (31457280U) : (((/* implicit */unsigned int) -1593341014)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_1]))))))) == (((/* implicit */int) ((((/* implicit */long long int) 4263510015U)) == (((((/* implicit */long long int) 31457280U)) % (5924968479186058975LL))))))));
            }
        } 
    } 
}
