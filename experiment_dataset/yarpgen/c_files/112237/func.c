/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112237
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
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)68))))), ((signed char)56))))));
    var_19 = ((var_8) | (max((var_8), (((/* implicit */unsigned int) ((int) var_1))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_1 [i_1 + 1]) : (((/* implicit */long long int) var_16)))))));
            arr_5 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) var_9))))) ? (((/* implicit */int) ((signed char) (signed char)95))) : (max((((/* implicit */int) var_13)), (((((/* implicit */int) (short)-18856)) - (((/* implicit */int) (signed char)95))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_21 += ((/* implicit */signed char) (~(((((/* implicit */int) (signed char)95)) + (((/* implicit */int) (short)18839))))));
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-58)) == (((/* implicit */int) var_12)))))));
        }
        var_22 = ((/* implicit */int) ((unsigned short) (unsigned char)96));
        arr_10 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (arr_1 [i_0]))))));
        arr_11 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
}
