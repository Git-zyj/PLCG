/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118647
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) ((short) arr_0 [i_0] [i_0])))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_1)))))) ? ((((!(((/* implicit */_Bool) arr_3 [i_1 - 1])))) ? (2410200977U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))) <= (2410201001U))))))) : (((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_1 [i_1])))))))));
                var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 + 2]))))))))));
                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_0]))))) ? (((2410200977U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((arr_2 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((((((long long int) var_6)) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)87))))) ? (((var_3) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))) : ((((-(((/* implicit */int) var_2)))) & (((/* implicit */int) (!(((/* implicit */_Bool) -857697565))))))))))));
}
