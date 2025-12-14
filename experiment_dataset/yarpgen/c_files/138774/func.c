/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138774
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) (unsigned char)192);
                var_17 = ((((/* implicit */_Bool) ((short) (~(1413043084))))) ? (max((min((((/* implicit */unsigned int) var_5)), (511U))), (((/* implicit */unsigned int) arr_2 [i_1] [(_Bool)1] [i_0])))) : (((/* implicit */unsigned int) min(((~(1965175358))), (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_10);
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) (short)13049)))) ^ (((/* implicit */int) var_4))));
        var_21 = ((/* implicit */long long int) var_9);
        arr_8 [i_2] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) var_9)))) ^ ((~(((/* implicit */int) (short)-13050)))))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_6 [i_2] [i_2]), ((short)2543))))) == (min((((/* implicit */unsigned int) (unsigned short)41914)), (var_0))))))));
        var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-21378), ((short)-13050)))) ? (min((arr_5 [i_2] [i_2]), (((/* implicit */unsigned long long int) 1243383583U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_2] [i_2]))))));
    }
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_7))));
}
