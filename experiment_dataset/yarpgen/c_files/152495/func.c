/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152495
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
    var_19 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) max((-215755463), (((/* implicit */int) (short)8576))))) ? ((~(((/* implicit */int) (unsigned short)65513)))) : ((~(((/* implicit */int) var_2)))))) + (2147483647))) << (((min((((/* implicit */long long int) 7)), (max((((/* implicit */long long int) var_3)), (-6137029884364384818LL))))) - (7LL)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1] [i_0])) / (((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)59))))))) ? ((((((~(((/* implicit */int) arr_0 [i_1])))) + (2147483647))) << ((((+(((/* implicit */int) (signed char)73)))) - (73))))) : ((((-(((/* implicit */int) arr_0 [i_0])))) % (((/* implicit */int) max((arr_5 [i_0] [i_1]), (arr_5 [i_0] [i_0]))))))));
                var_21 = min((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_5 [i_0] [i_0])), (arr_2 [i_1] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16336)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_1 [i_0] [i_1]))))))), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) (unsigned short)53207))))))));
            }
        } 
    } 
}
