/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108800
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */signed char) 4294967283U);
                arr_6 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 + 3] [i_1 + 1] [i_1])) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_2 [i_0] [(signed char)4])), (arr_0 [i_0])))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (arr_3 [i_0]))), (((((/* implicit */unsigned long long int) 3055276583U)) * (arr_3 [i_1])))))) ? (((((/* implicit */_Bool) 11U)) ? ((-(-1674865321))) : (((/* implicit */int) arr_1 [i_0 + 3] [i_1])))) : ((-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)28)), (var_3))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (+(var_5)));
    var_15 ^= ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-15)), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_11))))));
    var_16 = ((/* implicit */short) var_11);
}
