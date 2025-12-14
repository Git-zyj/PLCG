/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132415
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
    var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : ((~(((((/* implicit */_Bool) (unsigned char)53)) ? (-6504170863217951495LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-6215)))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_0] [(short)12])))) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 + 1]))) : (arr_2 [i_0] [4ULL] [i_1]))) : (((/* implicit */unsigned long long int) min((min((var_7), (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1])))), (((/* implicit */long long int) var_2)))))));
                var_18 = ((/* implicit */unsigned int) arr_2 [i_0] [3U] [3U]);
                var_19 = ((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_12))))))) - (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (arr_3 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_14)) : (var_5))) : (((/* implicit */unsigned int) ((int) arr_4 [i_0] [4LL] [i_1]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 1])) ? (arr_2 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1])))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
}
