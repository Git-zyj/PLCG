/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171846
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
    var_13 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)4));
    var_14 = ((/* implicit */signed char) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((signed char) (~(((/* implicit */int) arr_1 [i_1 + 4] [i_1 + 2])))));
                var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) var_7))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1 + 2])) ? (2579898128835447543ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)10] [i_1 + 4]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_1 + 2])))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) max(((unsigned short)60724), ((unsigned short)6437)))) : (((/* implicit */int) (signed char)62))));
            }
        } 
    } 
}
