/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143193
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
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((-(arr_1 [i_0 + 1]))), (((/* implicit */unsigned int) ((_Bool) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))))));
                var_12 = ((/* implicit */short) min((((((/* implicit */int) ((signed char) (short)-15574))) > (((/* implicit */int) arr_2 [i_0] [i_1])))), ((((!(((/* implicit */_Bool) (unsigned char)255)))) || ((!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1]))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (max((arr_3 [i_0 - 1] [i_0] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [1U])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 2] [i_0 + 1]))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1 + 3])) && (((/* implicit */_Bool) arr_0 [i_0 + 1])))) || ((!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-98)), (var_10)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)252)) || (((/* implicit */_Bool) var_0))))) : (((/* implicit */int) var_10)))) == (((int) var_10))));
}
