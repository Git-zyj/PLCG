/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105747
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
    var_19 = ((/* implicit */int) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (+(var_13))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61645))) - (31U))) : (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_3 [i_1])))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_12)))))))));
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) ? (1104008602) : (((/* implicit */int) (signed char)113))));
        }
        arr_7 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) + (max((140737488351232ULL), (((/* implicit */unsigned long long int) var_12)))))))));
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)-32763)) ? (4171494364U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))), (((16648548644315274143ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)25184)))))))));
    }
}
