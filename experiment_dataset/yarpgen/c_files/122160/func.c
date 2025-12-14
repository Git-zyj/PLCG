/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122160
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
    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_1))));
    var_12 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)16))));
    var_13 = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) max((6894554525510757746LL), (((/* implicit */long long int) var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)25)))))));
                var_15 = ((/* implicit */int) max((var_15), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)10)))))))));
                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
                var_17 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) arr_2 [i_0] [i_0]))), (arr_4 [i_0] [i_0 + 1] [10])));
                arr_8 [i_0] [i_0] = ((/* implicit */short) ((long long int) ((long long int) arr_4 [i_0 - 1] [i_1 - 2] [i_1])));
            }
        } 
    } 
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) (unsigned short)65523))), (min((((/* implicit */unsigned long long int) (signed char)-26)), (4903455009935250064ULL))))))));
}
