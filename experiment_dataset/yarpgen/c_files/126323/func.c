/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126323
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_2))) << (((min((((/* implicit */unsigned int) (short)-3011)), (4294967295U))) - (4294964259U)))))) : ((~(4294967295U)))));
                    var_17 = ((/* implicit */short) var_11);
                }
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [18U]))) : (var_8)))) ? (((/* implicit */int) ((short) (short)-14099))) : (((/* implicit */int) (short)3010))))) ? (((/* implicit */int) var_5)) : (((int) (short)3010))));
                var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((signed char) max((var_1), (((/* implicit */unsigned short) (short)3010)))))), (max((((/* implicit */long long int) (short)3010)), ((-9223372036854775807LL - 1LL))))));
                arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)3010))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (((((((/* implicit */_Bool) (short)3010)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3010))) : (33521664ULL))) - (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_1 + 2] [i_1]))))));
            }
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) var_14)))));
    var_21 = ((/* implicit */long long int) ((_Bool) var_7));
    var_22 += ((/* implicit */short) var_2);
}
