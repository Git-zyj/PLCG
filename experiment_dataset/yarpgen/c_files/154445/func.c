/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154445
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
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) max((((/* implicit */unsigned long long int) max(((signed char)-14), ((signed char)31)))), (var_0))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_13 = ((signed char) ((unsigned short) -1423584227670824045LL));
                    var_14 |= ((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)179));
                }
                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1 + 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_5 [i_0 - 3] [i_0 + 1])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (arr_5 [i_1 + 1] [i_0 - 3])))))))));
                var_16 = ((/* implicit */long long int) arr_6 [i_1 + 1] [i_0 - 3] [i_1]);
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned short) min((var_1), (((/* implicit */short) var_7))));
    var_18 = ((/* implicit */signed char) ((unsigned int) (signed char)-123));
}
