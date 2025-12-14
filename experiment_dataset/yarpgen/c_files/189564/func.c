/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189564
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] &= ((/* implicit */unsigned int) var_10);
                arr_6 [i_0] [i_0] [i_1 + 1] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)5071))));
                arr_7 [17LL] = max((((/* implicit */long long int) (unsigned short)60465)), (4900742928522230202LL));
                var_13 = ((/* implicit */unsigned int) ((((arr_4 [i_1 - 1] [i_1] [(unsigned short)4]) + (arr_4 [i_1 - 1] [13U] [(short)15]))) + (max((var_8), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_9)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5071))) < (1720011527U)))))));
    var_15 = 3886438576U;
}
