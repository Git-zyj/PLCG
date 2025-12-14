/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163982
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_17))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 = arr_1 [i_0];
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((((/* implicit */_Bool) -7605475488924683536LL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) max((arr_1 [10ULL]), (((/* implicit */long long int) (signed char)-34)))))))) ? (max((((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229))) : (-4532863740122746504LL))), (((/* implicit */long long int) ((var_7) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-25514))))));
        var_22 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_2 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) (short)-8670)) ? (520883684U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30930))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12795))))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((((/* implicit */long long int) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) ((signed char) var_5)))))), ((~(var_18))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (((~(max((((/* implicit */unsigned int) (unsigned short)65525)), (352102259U))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_4)), (arr_8 [i_1])))))))))));
                var_25 = ((/* implicit */unsigned short) var_16);
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)10336)), (((unsigned short) 13712224638053177183ULL))));
}
