/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121577
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (864036897328180285ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_7), ((short)5508)))))))));
                arr_4 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_3 [i_0] [i_0])))) : (((/* implicit */int) var_11))))));
                var_13 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_1] [i_0]))));
            }
        } 
    } 
    var_14 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    var_15 = max((((/* implicit */int) var_11)), ((~(((/* implicit */int) min(((short)-5497), ((short)-5497)))))));
}
