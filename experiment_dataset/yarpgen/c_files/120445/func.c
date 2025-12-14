/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120445
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
    var_12 = ((/* implicit */unsigned short) var_4);
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (~((+(-3942971572055171644LL))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max(((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (-3942971572055171644LL))))), (((/* implicit */long long int) arr_0 [15]))));
                arr_7 [i_0] = ((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) -3942971572055171647LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_4 [i_0]))))) + (arr_4 [i_0]));
                var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((((_Bool)0) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0])))))))));
                arr_8 [i_0] &= ((/* implicit */long long int) arr_0 [i_0]);
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-(((arr_0 [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))))) : ((-(((/* implicit */int) (signed char)31))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) -3942971572055171667LL)))) / (-3942971572055171669LL)));
}
