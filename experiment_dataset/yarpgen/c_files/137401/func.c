/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137401
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
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -1108489101))));
    var_20 = var_9;
    var_21 |= ((/* implicit */short) var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2])))))) : (((((/* implicit */_Bool) arr_4 [(short)18] [i_1 + 1])) ? (arr_4 [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1] [i_1 - 2])))));
                    var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (-(var_9))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (17313095884686460582ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))))))))));
                }
            } 
        } 
    } 
}
