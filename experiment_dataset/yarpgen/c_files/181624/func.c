/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181624
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
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)65535)))) : (-2144638366))), (((((/* implicit */int) (signed char)126)) << (((/* implicit */int) (signed char)16))))));
    var_15 = ((/* implicit */unsigned long long int) (signed char)-127);
    var_16 = ((/* implicit */unsigned char) max(((~((~(var_13))))), (((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (var_1))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11)))) == (((/* implicit */int) ((unsigned short) (unsigned short)20867)))));
            arr_5 [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (3586406217U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
        }
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (short)30837))));
    }
}
