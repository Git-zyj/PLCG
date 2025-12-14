/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112845
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((var_4) + (((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((unsigned int) 877553711)) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)107)) + (((/* implicit */int) var_7))))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    var_12 += ((/* implicit */long long int) (signed char)108);
                    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (2171875788U))) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_5 [2U] [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_2 + 1] [i_1 - 1] [i_0]))))) ? (((var_8) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1] [i_1 - 1] [i_0]))))) : (((/* implicit */long long int) (~(24))))));
                    var_14 = ((/* implicit */_Bool) var_11);
                }
                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((18446744073709551596ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))))) : (((/* implicit */unsigned long long int) (~(4294967295U)))))) == (((/* implicit */unsigned long long int) min((((2) / (arr_2 [i_0] [i_1]))), ((+(((/* implicit */int) arr_4 [i_0] [17LL] [i_0])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (((unsigned long long int) -4LL)) : (((/* implicit */unsigned long long int) 1461490067)))) > (((/* implicit */unsigned long long int) var_10))));
    var_17 = ((/* implicit */signed char) var_4);
    var_18 = ((/* implicit */unsigned long long int) (-(1461490067)));
}
