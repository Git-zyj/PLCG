/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166633
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */short) arr_2 [i_1] [(_Bool)1]))))) ? (max((((/* implicit */unsigned int) arr_4 [i_1] [i_0])), (var_1))) : (3931731070U)))) ? (((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) ((18446744073709551613ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120)))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_17 = ((((/* implicit */_Bool) 701444350280456579ULL)) || (((/* implicit */_Bool) (unsigned short)1)));
    var_18 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_7)))))), (((/* implicit */int) var_12))));
}
