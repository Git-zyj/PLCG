/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185336
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
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (unsigned short)0))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_17))))) : (((/* implicit */int) var_12)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((max((((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_1]))), (((((/* implicit */int) var_2)) & (((/* implicit */int) var_13)))))), (min(((+(((/* implicit */int) (unsigned short)10)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))))));
                var_20 = ((/* implicit */signed char) (((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))))) - (((/* implicit */int) arr_2 [i_0]))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_2] [i_1] [i_1]) ? (((/* implicit */int) (short)-21515)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))))))));
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(((((/* implicit */_Bool) max((arr_1 [i_1] [i_2]), (((/* implicit */long long int) (unsigned short)65535))))) ? (((/* implicit */int) ((arr_5 [i_0 + 1] [i_1] [i_2]) && (arr_5 [i_0 - 1] [i_0] [i_2 - 1])))) : (((/* implicit */int) (!(var_2)))))))))));
                    var_23 -= ((/* implicit */unsigned char) arr_1 [i_1] [i_1]);
                }
            }
        } 
    } 
}
