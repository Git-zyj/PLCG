/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157578
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
    for (signed char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) (unsigned char)200)) ? (max((max((var_8), (((/* implicit */int) (signed char)-121)))), (((/* implicit */int) arr_2 [i_0] [i_0])))) : ((-(((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (signed char)95)) : (var_8))))));
                arr_6 [(unsigned char)5] [i_0] [i_1] = ((/* implicit */short) ((signed char) ((((/* implicit */int) min(((short)32767), (((/* implicit */short) (unsigned char)139))))) != (((/* implicit */int) var_6)))));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0] [i_0 + 2]))))) ? (((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [(signed char)2] [(signed char)2])) : (((/* implicit */int) (unsigned char)13))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1678101856)) ? ((+(((/* implicit */int) arr_3 [(signed char)10] [i_0 + 3])))) : ((-(((/* implicit */int) arr_4 [i_0] [i_1 + 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)245)) & (((/* implicit */int) (signed char)-55))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 1068682112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (18446744073709551615ULL)))))) ? ((((+(((/* implicit */int) (signed char)3)))) & (((/* implicit */int) (short)32767)))) : (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))))), (var_5))))));
}
