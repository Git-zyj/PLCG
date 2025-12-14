/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14277
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((signed char) var_10)))))) != (max((74868975190693244ULL), (((/* implicit */unsigned long long int) (unsigned short)61425))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) != (((/* implicit */int) arr_1 [i_2])))))));
                    arr_7 [i_2] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2] [i_2])))), ((!(((/* implicit */_Bool) var_18))))));
                    var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (arr_5 [i_0] [i_1] [i_1] [i_2]))))));
                }
            } 
        } 
    } 
}
