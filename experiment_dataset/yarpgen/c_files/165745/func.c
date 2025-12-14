/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165745
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
    var_11 = ((/* implicit */signed char) min((var_7), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-32755))));
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                var_13 -= ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-119))))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)8012)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) min((var_9), (((/* implicit */int) (signed char)(-127 - 1)))))) : (min((((/* implicit */long long int) (signed char)122)), (var_3))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) var_2);
}
